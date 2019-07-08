import os
import subprocess
import shutil

path = os.path.dirname(os.path.abspath(__file__))
modifiedHeadersPath = "{0}\\Headers".format(path)
currentVersion = 0

for entry in os.listdir(modifiedHeadersPath):
	if os.path.isdir(os.path.join(modifiedHeadersPath, entry)):
		currentVersion = max(currentVersion, int(entry))

print("Detected current version: {0}".format(currentVersion))
print("Update version: ")
newVersion = input()
print("Updated headers path: ")
newPath = input()

subprocess.call(["{0}\\FixHeaders\\FixHeaders\\bin\\Debug\\FixHeaders.exe".format(path), "{0}\\Headers\\{1}\\OriginalHeaders".format(path, currentVersion), "{0}\\Headers\\{1}\\ModifiedHeaders".format(path, currentVersion), newPath, "{0}\\Headers\\{1}\\ModifiedHeaders".format(path, newVersion)])

subprocess.call(["{0}\\ImplementHeaders\\ImplementHeaders\\bin\\Debug\\ImplementHeaders.exe".format(path), "{0}\\Headers\\{1}\\ModifiedHeaders".format(path, newVersion), "{0}\\Headers\\{1}\\ModifiedImplementations".format(path, newVersion)])

shutil.copytree(newPath, "{0}\\Headers\\{1}\\OriginalHeaders".format(path, newVersion))

input()