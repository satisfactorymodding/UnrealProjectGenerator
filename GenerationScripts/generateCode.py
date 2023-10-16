import argparse
import os
import shutil
from updateHeaders import update_headers
from addFactoryGamePCH import add_factorygame_pch

generation_scripts_path = os.path.dirname(os.path.abspath(__file__))
root = os.path.dirname(generation_scripts_path)

headers_dir_path = os.path.join(root, 'Headers')
modified_headers_path = os.path.join(headers_dir_path, 'ModifiedHeaders')
modified_implementations_path = os.path.join(headers_dir_path, 'ModifiedImplementations')

projectPath = os.path.join(root, 'FactoryGame')
headersDir = os.path.join(projectPath, 'Source', 'FactoryGame', 'Public')
cppDir = os.path.join(projectPath, 'Source', 'FactoryGame', 'Private')

def main():  
  parser = argparse.ArgumentParser(description='Generate implementations for the game headers.')
  parser.add_argument('--headers', dest='cssHeadersPath', required = True, help='The path at which the game headers are located')
  parser.add_argument('--version', dest='newVersion', required = True, help='The new game version (CL) of the headers')
  parser.add_argument('--uepath', dest='UEPath', required = True, help='The path at which Unreal Engine is located')
  args = parser.parse_args()

  update_headers(args.cssHeadersPath, args.newVersion)
  
  # Copy new files to the project
  shutil.rmtree(headersDir, ignore_errors=True)
  shutil.rmtree(cppDir, ignore_errors=True)
  shutil.copytree(modified_headers_path, headersDir)
  shutil.copytree(modified_implementations_path, cppDir)
  
  add_factorygame_pch()

if __name__ == "__main__":
  main()
