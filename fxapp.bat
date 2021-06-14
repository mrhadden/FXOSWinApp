@echo off

REM
REM https://www.westerndesigncenter.com/wdc/tools.php
REM

SET JAVA_HOME=

SET LOADBASE=0B0000
SET KERNELNAME=FXAPP02

SET BUILD=Y
SET VERBOSE=
SET TRANSFER=
SET CLEAN=

set argCount=0
for %%x in (%*) do (
   set /A argCount+=1
)


REM IF %argCount% == 0 GOTO usage

for %%x in (%*) do (
	IF [%%x] == [-n] SET BUILD=
	IF [%%x] == [-v] SET VERBOSE=Y
	IF [%%x] == [-t] SET TRANSFER=Y
	IF [%%x] == [-c] SET CLEAN=Y
)

IF ["%JAVA_HOME%"] == [] ( 
SET JAVABIN=java.exe
) else (
SET JAVABIN="%JAVA_HOME%\bin\java.exe"
)


SET CURDIR=%~dp0
SET CCTEMP=%TEMP%
SET FXINC=%CURDIR%INCLUDES
SET FXLIB=%CURDIR%LIB
SET DIST=%CURDIR%DIST
SET WDC_INC_65816=G:\devtools\WDCTools\wdc\Tools\include
REM SET WDC_INC_6502=G:\devtools\WDCTools\wdc\Tools\include
SET WDC_LIB=G:\devtools\WDCTools\wdc\Tools\lib;%FXLIB%

SET COMPILER=G:\devtools\WDCTools\wdc\Tools\bin\wdc816cc.exe
SET ASSEMBLER=G:\devtools\WDCTools\wdc\Tools\bin\wdc816AS.exe
SET FXLINKER=CALL %CURDIR%\fxlink.bat

SET LINKER=G:\devtools\WDCTools\wdc\Tools\bin\wdcln.exe

SET INCLUDES=-I. -I%FXINC%

REM -ML   Generates code for the Large model
REM -MT   Force references to string data to be far. 
REM -LT   Generates listing with embedded source statements. 
REM -PX   Allows C++ style comments.
REM -WO   Causes pointer/int conflicts to generate warnings rather than errors
REM -WR   Warns if function return type does not match declared type.
REM -A    Embeds C source statements into the assembly code.
REM -BS   Generate source level debugging information. 
REM -SO0S This option tells the compiler to assume that arrays are less than 64K in size
REM       This option is automatically turned on when the -SO option is used. To use -SO without -SS, use -SO0S.
REM -QV   Generates verbose information on memory usage. 
REM -WA   Complains on arguments which do not match the prototype specification
REM -WP   Generates a warning if a function is called without a prototype being defined for the function. 
REM -WU   Warns about unused local variables. 

SET ASM_OPTIONS=-DUSING_816 -DLARGE -V -l
SET OPTIONS=-DUSE_FX256_FMX -DUSING_816 -DLARGE -ML -MT -LT -PX -WO -WR -A -BS -SO0S -QV
SET ASM_OPT=-G -V -L -W

SET LINK_OPT=-C%LOADBASE%,%LOADBASE% -T -G -B -Q
SET LIB_OPT=-A -S -V


SET LIBS=-LG:\devtools\WDCTools\wdc\Tools\lib

SET TASSDIR=G:\devprojects\c256feonix\kernel-builds\Kernel-Trinity-11-Cleaned-up


IF [%CLEAN%] == [Y] ( 
	del /q srec.out
	del /q myprog.hex
	del /q myprog.s28.hex
	
	del /q *.obj
	del /q *.o
	del /q *.bnk	
	del /q *.sym	
	del /q *.lst
	del /q *.hex
	del /q *.map
	del /q *.bin
)


IF [%VERBOSE%] == [Y] ( 

echo Build Settings:
echo WDC 65816 Includes:%WDC_INC_65816%
echo WDC  6502 Includes:%WDC_INC_6502%
echo WDC LIB:%WDC_LIB%
echo SREC DIR:%SREC_DIR%
echo COMPILER:%COMPILER%
echo ASSEMBLER:%ASSEMBLER%
echo LINKER:%LINKER%
echo INCLUDES:%INCLUDES%
echo OPTIONS:%OPTIONS%
echo LINK OPTIONS:%LINK_OPT%
echo LIBS:%LIBS%
echo TASSDIR:%TASSDIR%
echo CURRENT DIR:%CURDIR%

)

CD .\SRC


%COMPILER% %INCLUDES% %OPTIONS% -Ofxwinapp.s fxwinapp.c
%ASSEMBLER% %ASM_OPTIONS% fxwinapp.s -o fxwinapp.obj

%LINKER% %LINK_OPT% -HB fxwinapp.obj -LFXUSER -LCL -O %DIST%\%KERNELNAME%.BIN
%FXLINKER% -i "%DIST%\%KERNELNAME%.BIN" -o "%DIST%\%KERNELNAME%.FXA" -v

CD ..

TYPE %DIST%\%KERNELNAME%.MAP




