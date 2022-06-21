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
            if name == 'FGObjectReference.h':
                continue # FactoryGame.h includes it
            header_contents = open(os.path.join(root, name), 'r').read()
            if re.findall(r'^#include\s+"FactoryGame\.h"', header_contents, re.MULTILINE):
                continue
            header_contents = re.sub(r'(^#include\s+".+")', r'#include "FactoryGame.h"\n\1', header_contents, 1, re.MULTILINE)
            open(os.path.join(root, name), 'w').write(header_contents)
