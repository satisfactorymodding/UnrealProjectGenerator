import os
import subprocess
import shutil

generation_scripts_path = os.path.dirname(os.path.abspath(__file__))
root = os.path.dirname(generation_scripts_path)

fixHeadersExe = os.path.join(generation_scripts_path, 'FixHeaders', 'FixHeaders', 'bin', 'Debug', 'FixHeaders.exe')
implementHeadersExe = os.path.join(generation_scripts_path, 'ImplementHeaders', 'ImplementHeaders', 'bin', 'Debug', 'ImplementHeaders.exe')

headers_dir_path = os.path.join(root, 'Headers')
original_headers_path = os.path.join(headers_dir_path, 'OriginalHeaders')
modified_headers_path = os.path.join(headers_dir_path, 'ModifiedHeaders')
modified_implementations_path = os.path.join(headers_dir_path, 'ModifiedImplementations')
custom_implementations_path = os.path.join(root, 'CustomImplementations')
current_headers_version_file = os.path.join(headers_dir_path, 'currentVersion.txt')

def update_headers(cssHeadersPath: str, newVersion: str):

    oldVersion = int(open(current_headers_version_file, 'r').read())

    print(f'Detected old version: {oldVersion}')
    print(f'Update version: {newVersion}')
    print(f'Updated headers path: {cssHeadersPath}')

    subprocess.call([fixHeadersExe, original_headers_path, modified_headers_path, cssHeadersPath, modified_headers_path])

    subprocess.call([implementHeadersExe, modified_headers_path, modified_implementations_path, custom_implementations_path, 'true']) # too verbose

    shutil.rmtree(original_headers_path, ignore_errors=True)

    shutil.copytree(cssHeadersPath, original_headers_path)

    open(current_headers_version_file, 'w').write(newVersion)
