import os
import subprocess

generation_scripts_path = os.path.dirname(os.path.abspath(__file__))
root = os.path.dirname(generation_scripts_path)

projectPath = os.path.join(root, 'FactoryGame')
projectFile = os.path.join(projectPath, 'FactoryGame.uproject')
sourceDir = os.path.join(projectPath, 'Source', 'FactoryGame')
rebasePath = os.path.join(root, 'RebasePublicIncludePaths')

extraIncludes = [
    [
        'UI/FGListView.h',
        [
            ['Views/ITypedTableView.h', 'Framework/Views/ITypedTableView.h']
        ]
    ],
    [
        'UI/FGSignElementWidget.h',
        [
            ['Text/TextLayout.h', 'Framework/Text/TextLayout.h']
        ]
    ],
    [
        'UI/FGSignInteractWidget.h',
        [
            ['Text/TextLayout.h', 'Framework/Text/TextLayout.h']
        ]
    ],
    [
        'UI/FGSignElementSettingsWidget.h',
        [
            ['Text/TextLayout.h', 'Framework/Text/TextLayout.h']
        ]
    ],
    [
        'UI/FGPrefabSignInteract.h',
        [
            ['Text/TextLayout.h', 'Framework/Text/TextLayout.h']
        ]
    ],
    [
        'FactoryGame.h',
        [
            ['Notifications/SNotificationList.h', 'Widgets/Notifications/SNotificationList.h']
        ]
    ],
]

def rebase_includes(UEPath: str):
    UATPath = os.path.join(UEPath, 'Engine', 'Build', 'BatchFiles', 'RunUAT.bat')

    UAT_process = subprocess.Popen([UATPath,
                                    f'-ScriptDir={rebasePath}'
                                    'RebasePublicIncludePaths',
                                    f'-Project={projectFile}',
                                    f'-UpdateDir={sourceDir}',
                                    '-Write'],
                                    shell=True)

    UAT_process.wait()

    for [filePath, includes] in extraIncludes:
        fullpath = os.path.join(sourceDir, 'Public', filePath)
        if not os.path.exists(fullpath):
            print(f'Missing file {filePath}')
            continue
            
        with open(fullpath, 'r') as f:
            fileContent = f.read()
        
        for [oldInclude, newInclude] in includes:
            fileContent = fileContent.replace(f'#include "{oldInclude}"', f'#include "{newInclude}"')
            
        with open(fullpath, 'w') as f:
            f.write(fileContent)
