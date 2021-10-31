import os
import re

projectPath = input()

headersDir = os.path.join(projectPath, 'Source', 'FactoryGame', 'Public')

for root, dirs, files in os.walk(headersDir, topdown=False):
    for name in files:
        if name == 'FactoryGame.h':
            continue
        header_contents = open(os.path.join(root, name), 'r').read()
        header_contents = re.sub(r'(^\s*#include\s+".+")', r'#include "FactoryGame.h"\n\1', header_contents, 1, re.MULTILINE)
        open(os.path.join(root, name), 'w').write(header_contents)
