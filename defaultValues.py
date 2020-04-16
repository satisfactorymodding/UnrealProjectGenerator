import os
import subprocess
import shutil

path = os.path.dirname(os.path.abspath(__file__))

def recursive_overwrite(src, dest, ignore=None):
    if os.path.isdir(src):
        if not os.path.isdir(dest):
            os.makedirs(dest)
        files = os.listdir(src)
        if ignore is not None:
            ignored = ignore(src, files)
        else:
            ignored = set()
        for f in files:
            if f not in ignored:
                recursive_overwrite(os.path.join(src, f), 
                                    os.path.join(dest, f), 
                                    ignore)
    else:
        shutil.copyfile(src, dest)

print("Dump file: ")
dumpPath = input()

subprocess.call([f"{path}\\DefaultValues\\DefaultValues\\bin\\Debug\\DefaultValues.exe", f"{path}\\Headers\\ModifiedHeaders", f"{path}\\Headers\\ModifiedImplementations", dumpPath])

recursive_overwrite(f"{path}\\Headers\\ModifiedImplementations", f"{path}\\FactoryGame\\Source\\FactoryGame\\Private")

input()
