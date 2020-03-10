### DO NOT RUN THIS FROM THE REPO!
### IT RUNS GIT AND CHECKS OUT BRANCHES
### WHERE THIS SCRIPT MIGHT GET DELETED

import datetime
import time
import praw
import re
import os
import subprocess
import shutil
import json
from zipfile import ZipFile
import logging
import configparser
import pathlib

DEBUG = False
SKIP_EGL = True
PUSH = False

logging.basicConfig(filename=os.path.join(pathlib.Path(__file__).parent.absolute(), r'logs\listener.log'),
                    filemode='a+', format='%(asctime)s - %(levelname)s - %(message)s', level=logging.DEBUG)
logging.getLogger().addHandler(logging.StreamHandler())


config = configparser.ConfigParser()
config.read('redditlistener.ini')

reddit = praw.Reddit(client_id=config['Reddit']['ClientID'],
                     client_secret=config['Reddit']['ClientSecret'],
                     user_agent=config['Reddit']['UserAgent'])

epicGamesPathFolder = config['Epic']['EpicGamesLauncherPath']
launcherExe = "Portal\Binaries\Win64\EpicGamesLauncher.exe"
unrealVersionSelector = r"Engine\Binaries\Win64\UnrealVersionSelector.exe"
epicGamesLauncherPath = os.path.join(epicGamesPathFolder, launcherExe)
UE4RebuildProjectPath = os.path.join(epicGamesPathFolder, unrealVersionSelector)
enginePath = config['Epic']['Enginepath']
UE4BuildPath = os.path.join(enginePath, r'Engine\Build\BatchFiles\Build.bat')
satisfactoryEarlyAccess = config['Game']['EarlyAccessPath']
satisfactoryExperimental = config['Game']['ExperimentalPath']
gameHeadersPath = r"CommunityResources\Headers"
moddingFolder = config['Modding']['ModdingRepoFolder']
moddingProjectName = r"FactoryGame"
moddingProject = os.path.join(moddingFolder, moddingProjectName)
wwisePathToCheck = os.path.join(moddingProject, "Plugins", "Wwise", "Wwise.uplugin")
moddingUProjectFile = os.path.join(moddingProject, f"{moddingProjectName}.uproject")
moddingProjectSource = os.path.join(moddingProject, "Source", moddingProjectName)
moddingProjectSourcePublic = os.path.join(moddingProjectSource, "Public")
moddingProjectSourcePrivate = os.path.join(moddingProjectSource, "Private")
satisfactoryModdingHeaders = os.path.join(moddingFolder, "Headers")
headersPath = "ModifiedHeaders"
cppPath = "ModifiedImplementations"
headersUpdater = os.path.join(moddingFolder, "updateHeaders.py")

git_stage = [r"FactoryGame\Source", r"FactoryGame\Binaries", r"FactoryGame\Intermediate", r"Headers"]
git_get_branch = "GitGetBranch.bat"

errorMessage = "ERROR: {0} returned {1}.\nSee {2} for details."


class GitAction:
    def __init__(self, branch):
        self.branch = branch
        self.switched = False

    def __enter__(self):
        logging.debug(f"Running git task on {self.branch}")
        get_branch = subprocess.Popen(git_get_branch, cwd=moddingFolder, shell=True, stdout=subprocess.PIPE,
                                      stderr=subprocess.STDOUT)
        self.previous_branch = get_branch.communicate()[0].decode("utf-8").rstrip("\r\n")
        if self.previous_branch != self.branch:
            self.switched = True
            logging.debug(f"Switching to branch {self.branch} (will return to {self.previous_branch} when task is done)")
            stash = subprocess.Popen(["git", "stash"], cwd=moddingFolder, shell=True, stdout=subprocess.PIPE,
                                          stderr=subprocess.STDOUT)
            self.did_stash = "No local changes to save" not in stash.communicate()[0].decode("utf-8").rstrip("\r\n")
            if self.did_stash:
                logging.debug(f"Found changes on {self.previous_branch}. Will restore when done")
            subprocess.call(["git", "checkout", self.branch], cwd=moddingFolder)

        return self

    def call(self, command, **kwargs):
        final_command = ["git"]
        final_command.extend(command)
        return subprocess.call(final_command, cwd=moddingFolder, **kwargs)

    def Popen(self, command, **kwargs):
        final_command = ["git"]
        final_command.extend(command)
        return subprocess.Popen(final_command, cwd=moddingFolder, **kwargs)

    def __exit__(self, exc_type, exc_val, exc_tb):
        if self.switched:
            logging.debug(f"Switching back to {self.previous_branch}")
            subprocess.call(["git", "reset", "--hard"], cwd=moddingFolder)
            subprocess.call(["git", "clean", "-df"], cwd=moddingFolder)
            subprocess.call(["git", "checkout", self.previous_branch], cwd=moddingFolder)
            if self.did_stash:
                logging.debug(f"Restoring {self.previous_branch}")
                subprocess.call(["git", "stash", "pop"], cwd=moddingFolder)


def get_version(version):
    with GitAction(version) as git:
        with open(f'{satisfactoryModdingHeaders}\\currentVersion.txt', 'r') as f:
            version_number = int(f.read())
    return version_number


headerVersions = {"EarlyAccess": get_version("EarlyAccess"), "Experimental": get_version("Experimental")}


class ExceptionWithLog(Exception):
    def __init__(self, message, files=None):
        self.message = message
        self.files = files or []

    def __str__(self):
        return self.message


def recursive_overwrite(src, destination, ignore=None):
    if os.path.isdir(src):
        if not os.path.isdir(destination):
            os.makedirs(destination)
        files = os.listdir(src)
        if ignore is not None:
            ignored = ignore(src, files)
        else:
            ignored = set()
        for f in files:
            if f not in ignored:
                recursive_overwrite(os.path.join(src, f),
                                    os.path.join(destination, f),
                                    ignore)
    else:
        shutil.copyfile(src, destination)


def run_update(new_version, is_experimental, triggered_by):
    if is_experimental:
        full_header_path = os.path.join(satisfactoryExperimental, gameHeadersPath)
    else:
        full_header_path = os.path.join(satisfactoryEarlyAccess, gameHeadersPath)

    headers_zip = full_header_path + ".zip"

    if not DEBUG and not SKIP_EGL:
        logging.info("Launching Epic Games Launcher to update the game")
        if os.path.exists(full_header_path):
            shutil.rmtree(full_header_path)

        if os.path.exists(headers_zip):
            os.remove(headers_zip)

        subprocess.Popen(epicGamesLauncherPath)

        while not os.path.exists(headers_zip):
            time.sleep(5)

        time.sleep(45)

        os.system('taskkill /IM "{0}"'.format(epicGamesLauncherPath[epicGamesLauncherPath.rindex("\\") + 1:]))
        logging.info("Quitting Epic Games Launcher")

    logging.info("Extracting headers")
    with ZipFile(headers_zip, 'r') as zipObj:
        zipObj.extractall(full_header_path)
    log_file_name = "logs\\HeaderUpdater\\{0}_{1}".format(new_version,
                                                          datetime.datetime.now().strftime("%Y-%m-%d_%H-%M-%S"))
    os.makedirs(log_file_name[:log_file_name.rfind("\\")], exist_ok=True)
    log_file = open("{0}.log".format(log_file_name), "w+")
    err_file = open("{0}.err".format(log_file_name), "w+")
    version_branch = "Experimental" if is_experimental else "EarlyAccess"
    with GitAction(version_branch) as git:
        logging.info("Launching headers updater")
        header_updater_process = subprocess.Popen(["python", headersUpdater], shell=True,
                                                  stdin=subprocess.PIPE,
                                                  stdout=log_file,
                                                  stderr=err_file)
        header_updater_process.communicate('\n'.join([str(new_version), full_header_path, "", ""]).encode())
        log_file.close()
        err_file.close()

        if header_updater_process.returncode != 0:
            raise ExceptionWithLog(errorMessage
                                   .format("header updater",
                                           header_updater_process.returncode,
                                           log_file_name), files=["{0}.log".format(log_file_name),
                                                                  "{0}.err".format(log_file_name)])
        recursive_overwrite(os.path.join(satisfactoryModdingHeaders, headersPath), moddingProjectSourcePublic)
        recursive_overwrite(os.path.join(satisfactoryModdingHeaders, cppPath), moddingProjectSourcePrivate)

        wwise_ok = False
        while not wwise_ok:
            with open(wwisePathToCheck, "r") as f:
                wwise_ok = True
                wwise_data = json.load(f)
                if is_experimental:
                    if "4.21" in wwise_data["EngineVersion"]:
                        wwise_ok = False
                        print("Confirm changing Wwise integration to 4.22")
                else:
                    if "4.22" in wwise_data["EngineVersion"]:
                        wwise_ok = False
                        print("Confirm changing Wwise integration to 4.21")
            if not wwise_ok:
                input()

        logging.info("Regen project files")
        log_file_name = "logs\\Regen\\{0}_{1}".format(new_version,
                                                      datetime.datetime.now().strftime("%Y-%m-%d_%H-%M-%S"))
        os.makedirs(log_file_name[:log_file_name.rfind("\\")], exist_ok=True)
        log_file = open("{0}.log".format(log_file_name), "w+")
        err_file = open("{0}.err".format(log_file_name), "w+")
        build_process = subprocess.Popen([UE4RebuildProjectPath,
                                          "/projectfiles",
                                          f"{moddingUProjectFile}"], shell=True,
                                         stdout=log_file,
                                         stderr=err_file)

        build_process.wait()
        log_file.close()
        err_file.close()

        logging.info("Launching UBT")
        log_file_name = "logs\\Build\\{0}_{1}".format(new_version,
                                                      datetime.datetime.now().strftime("%Y-%m-%d_%H-%M-%S"))
        os.makedirs(log_file_name[:log_file_name.rfind("\\")], exist_ok=True)
        log_file = open("{0}.log".format(log_file_name), "w+")
        err_file = open("{0}.err".format(log_file_name), "w+")
        build_process = subprocess.Popen([UE4BuildPath, "FactoryGameEditor", "Development", "Win64", f"-Project={moddingUProjectFile}", "-WaitMutex", "-FromMsBuild"], shell=True,
                                         stdout=log_file,
                                         stderr=err_file)

        build_process.wait()
        log_file.close()
        err_file.close()

        if build_process.returncode != 0:
            raise ExceptionWithLog(errorMessage.format("build",
                                                       build_process.returncode,
                                                       log_file_name), files=["{0}.log".format(log_file_name),
                                                                              "{0}.err".format(log_file_name)])
        if not DEBUG:
            logging.info("Commiting changes")
            for file in git_stage:
                git.Popen(["add", file]).wait()

            git.Popen(["commit", "-m",
                       "Updated headers to {0}\n\nThis commit was triggered by {1}".format(new_version, triggered_by)]).wait()
            if PUSH:
                logging.info("Pushing changes")
                git.Popen(["push"]).wait()

    logging.info(f"Successfully updated to {new_version}")


def check():
    global headerVersions
    while True:
        post_idx = 1
        while "Patch" not in reddit.subreddit('satisfactorygame').sticky(post_idx).title:
            post_idx = post_idx + 1

        patch_post = reddit.subreddit('satisfactorygame').sticky(post_idx)
        patch_title = patch_post.title

        versions = re.findall(r"(Early Access.*|Experimental.*)\s*(v\S*)\s*-?\s*Build (\d*)", patch_title, re.IGNORECASE)

        logging.debug(versions)

        logging.info('Checking for updates')
        for version in versions:
            experimental = "experimental" in version[0].lower()
            satisfactory_version_string = "Experimental" if experimental else "EarlyAccess"
            build_number = int(version[2])
            if (experimental and build_number > headerVersions["Experimental"]) or (
                    not experimental and build_number > headerVersions["EarlyAccess"]):
                logging.debug(
                    f'Found post {patch_title}, game version {build_number} {"(Experimental)" if experimental else "(Early Access)"}')
                if experimental and build_number > headerVersions["Experimental"]:
                    currentVersion = headerVersions["Experimental"]
                else:
                    currentVersion = headerVersions["EarlyAccess"]

                try:
                    logging.info(f"Trying to update {satisfactory_version_string} from {currentVersion} to {build_number}")
                    run_update(build_number, experimental, "reddit Patch Notes\n{0}".format(patch_post.url))
                    if experimental:
                        if build_number > headerVersions["Experimental"]:
                            headerVersions["Experimental"] = build_number
                    else:
                        if build_number > headerVersions["EarlyAccess"]:
                            headerVersions["EarlyAccess"] = build_number

                except ExceptionWithLog as e:
                    logging.error(e)
                    exit(1)
                except:
                    logging.error("An error occured", exc_info=True)
                    exit(1)
        time.sleep(30)


if __name__ == "__main__":
    logging.info("Header updater started")
    check()
