@REM @Author: Dastan_Alam
@REM @Date:   19-06-2023 01:12:32 PM       13:12:32
@REM @Last Modified by:   Dastan_Alam
@REM Modified time: 28-06-2023 12:49:57 AM       00:49:57@echo off
setlocal enabledelayedexpansion

:FindPythonCommand
for %%A in (python python3) do (
    where /Q %%A
    if !errorlevel! EQU 0 (
        set "PYTHON_CMD=%%A"
        goto :Found
    )
)

echo Python not found. Please install Python.
pause
exit /B 1

:Found
%PYTHON_CMD% scripts/check_requirements.py requirements.txt
if errorlevel 1 (
    echo Installing missing packages...
    %PYTHON_CMD% -m pip install -r requirements.txt
)
%PYTHON_CMD% -m autogpt %*
pause