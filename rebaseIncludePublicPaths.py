import os
import subprocess

extraIncludes = [
    [
        'UI/FGListView.h',
        [
            ['Views/ITypedTableView.h', 'Framework/Views/ITypedTableView.h']
        ]
    ],
    [
        'FactoryGame.h',
        [
            ['Notifications/SNotificationList.h', 'Widgets/Notifications/SNotificationList.h']
        ]
    ]
]

UEPath = input()
projectPath = input()


UATPath = os.path.join(UEPath, 'Engine', 'Build', 'BatchFiles', 'RunUAT.bat')
projectFile = os.path.join(projectPath, 'FactoryGame.uproject')
sourceDir = os.path.join(projectPath, 'Source', 'FactoryGame')


UAT_process = subprocess.Popen([UATPath,
                                  'RebasePublicIncludePaths',
                                  f'-Project={projectFile}',
                                  f'-UpdateDir={sourceDir}',
                                  '-Write'],
                                shell=True)

UAT_process.wait()

for [filePath, includes] in extraIncludes:
    with open(os.path.join(sourceDir, 'Public', filePath), 'r') as f:
        fileContent = f.read()
    
    for [oldInclude, newInclude] in includes:
        fileContent = fileContent.replace(f'#include "{oldInclude}"', f'#include "{newInclude}"')
        
    with open(os.path.join(sourceDir, 'Public', filePath), 'w') as f:
        f.write(fileContent)
