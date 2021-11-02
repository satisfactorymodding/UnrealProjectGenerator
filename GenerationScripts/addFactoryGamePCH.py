import os
import re

generation_scripts_path = os.path.dirname(os.path.abspath(__file__))
root = os.path.dirname(generation_scripts_path)

projectPath = os.path.join(root, 'FactoryGame')
headersDir = os.path.join(projectPath, 'Source', 'FactoryGame', 'Public')

def add_factorygame_pch():
    for root, dirs, files in os.walk(headersDir, topdown=False):
        for name in files:
            if name == 'FactoryGame.h':
                continue
            header_contents = open(os.path.join(root, name), 'r').read()
            if re.match(r'^\s*#include\s+"FactoryGame.h"', header_contents, re.MULTILINE):
                continue
            header_contents = re.sub(r'(^\s*#include\s+".+")', r'#include "FactoryGame.h"\n\1', header_contents, 1, re.MULTILINE)
            open(os.path.join(root, name), 'w').write(header_contents)
