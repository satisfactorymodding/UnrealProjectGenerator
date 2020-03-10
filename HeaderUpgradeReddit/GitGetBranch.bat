@echo off
set GITBRANCH=
for /f %%I in ('git.exe rev-parse --abbrev-ref HEAD 2^> NUL') do set GITBRANCH=%%I

if "%GITBRANCH%" == "" (
  echo. 
) else (
    echo %GITBRANCH%
)