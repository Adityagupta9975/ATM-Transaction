@echo off
echo ========================================================
echo  Compiling and Running ATM Simulation (atm.c)...
echo ========================================================
gcc atm.c -o atm.exe
if %ERRORLEVEL% EQU 0 (
    atm.exe
) else (
    echo [ERROR] Compilation failed. Make sure GCC is installed.
    pause
)
