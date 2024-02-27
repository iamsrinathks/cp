@echo off
REM Change directory to val/scripts
cd /d "%~dp0"

REM Execute your command or program here
REM For example, echo some text to a file in val/config
echo Hello, this is a test > "..\config\output.txt"

REM Pause to keep the console window open (optional)
pause
