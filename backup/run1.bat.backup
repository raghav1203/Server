:: bat file for windows platform
@ECHO OFF
:: [ECHO(] is used for new line char alternate is [ECHO.]
ECHO(
::command line argument
:CMD
SET /P arg1=%1 Enter command: || SET arg1=NONE

IF /I "%arg1%" == "CLEAN" GOTO CLEAN
IF /I "%arg1%" == "T" GOTO T
IF /I "%arg1%" == "DEBUG" GOTO DEBUG
IF /I "%arg1%" == "BUILD" GOTO BUILD
IF /I "%arg1%" == "QUIT"  GOTO EOF
IF /I "%arg1%" == "NONE" ECHO( &&  ECHO Nothing is choosen! && GOTO :EOF

ECHO Enter valid command [CLEAN,DEBUG,BUILD,QUIT]
GOTO CMD

:CLEAN
IF NOT EXIST debug ECHO(  && ECHO ERROR in cleanning solution! && GOTO EOF
DEL /S /Q debug
ECHO Successfuly cleaned.
GOTO CMD

::Build entire solution.
:BUILD
SETLOCAL EnableDelayedExpansion

SET "P=-I ."

::Setting local environment variable for compilation by including all header files
FOR /D /R %%H in ("header*") DO SET "P=!P! -iquote %%H"

ECHO( && ECHO Starting compilation...
FOR /R %%I in (*.cpp) DO ECHO - %%I &&  g++ -Wall %P% -c %%I -o ./debug/%%~nI.o
ECHO Compilation Done... && ECHO(

ENDLOCAL DisableDelayedExpansion
GOTO EOF	

::Build entire solution and and run it.
:DEBUG
g++ -o poker ./debug/*.o && poker.exe
	IF %ERRORLEVEL% EQU 0 (
		COLOR
		ECHO(
		ECHO Execution success! 
		ECHO( 
	) ELSE (
		COLOR C
		ECHO ERROR in execution of poker check for errors!
	) 
	 
GOTO EOF

:EOF
ECHO( && REM ECHO End of file reached.