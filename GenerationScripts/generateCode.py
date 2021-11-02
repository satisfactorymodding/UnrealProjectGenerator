import argparse
from updateHeaders import update_headers
from rebaseIncludePublicPaths import rebase_includes
from addFactoryGamePCH import add_factorygame_pch

def main():  
  parser = argparse.ArgumentParser(description='Generate implementations for the game headers.')
  parser.add_argument('--headers', dest='cssHeadersPath', required = True, help='The path at which the game headers are located')
  parser.add_argument('--version', dest='newVersion', required = True, help='The new game version (CL) of the headers')
  parser.add_argument('--uepath', dest='UEPath', required = True, help='The path at which Unreal Engine is located')
  args = parser.parse_args()

  update_headers(args.cssHeadersPath, args.newVersion)
  rebase_includes(args.UEPath)
  add_factorygame_pch()

if __name__ == "__main__":
  main()
