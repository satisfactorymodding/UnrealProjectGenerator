import os
import subprocess
import shutil

path = os.path.dirname(os.path.abspath(__file__))

def getVersion(versionPath):
    with open(f'{path}\\Headers\\{versionPath}\\currentVersion.txt', 'r') as f:
        return int(f.read())

print("Is new version experimental? (y/n): ")
is_experimental = (input() == 'y')

newHeadersPath = "Experimental" if is_experimental else "EarlyAccess"

if is_experimental:
    if getVersion("EarlyAccess") >= getVersion("Experimental"):
        oldHeadersPath = "EarlyAccess"
    else:
        oldHeadersPath = "Experimental"
else:
    oldHeadersPath = "EarlyAccess"

oldVersion = getVersion(oldHeadersPath)

print(f"Detected old version: {oldVersion} ({oldHeadersPath})")
print("Update version: ")
newVersion = input()
print("Updated headers path: ")
cssHeadersPath = input()

subprocess.call([f"{path}\\FixHeaders\\FixHeaders\\bin\\Debug\\FixHeaders.exe", f"{path}\\Headers\\{oldHeadersPath}\\OriginalHeaders", f"{path}\\Headers\\{oldHeadersPath}\\ModifiedHeaders", cssHeadersPath, f"{path}\\Headers\\{newHeadersPath}\\ModifiedHeaders"])

subprocess.call([f"{path}\\ImplementHeaders\\ImplementHeaders\\bin\\Debug\\ImplementHeaders.exe", f"{path}\\Headers\\{newHeadersPath}\\ModifiedHeaders", f"{path}\\Headers\\{newHeadersPath}\\ModifiedImplementations"])

shutil.rmtree(f"{path}\\Headers\\{newHeadersPath}\\OriginalHeaders", ignore_errors=True)

shutil.copytree(cssHeadersPath, f"{path}\\Headers\\{newHeadersPath}\\OriginalHeaders")

with open(f"{path}\\Headers\\{newHeadersPath}\\currentVersion.txt", 'w') as f:
    f.write(newVersion)

input()
