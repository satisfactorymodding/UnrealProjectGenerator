import os
import subprocess
import shutil

path = os.path.dirname(os.path.abspath(__file__))

with open(f'{path}\\Headers\\currentVersion.txt', 'r') as f:
    oldVersion = int(f.read())

print(f"Detected old version: {oldVersion} ({oldHeadersPath})")
print("Update version: ")
newVersion = input()
print("Updated headers path: ")
cssHeadersPath = input()

subprocess.call([f"{path}\\FixHeaders\\FixHeaders\\bin\\Debug\\FixHeaders.exe", f"{path}\\Headers\\OriginalHeaders", f"{path}\\Headers\\ModifiedHeaders", cssHeadersPath, f"{path}\\Headers\\ModifiedHeaders"])

subprocess.call([f"{path}\\ImplementHeaders\\ImplementHeaders\\bin\\Debug\\ImplementHeaders.exe", f"{path}\\Headers\\ModifiedHeaders", f"{path}\\Headers\\ModifiedImplementations"])

shutil.rmtree(f"{path}\\Headers\\OriginalHeaders", ignore_errors=True)

shutil.copytree(cssHeadersPath, f"{path}\\Headers\\OriginalHeaders")

with open(f"{path}\\Headers\\currentVersion.txt", 'w') as f:
    f.write(newVersion)

input()
