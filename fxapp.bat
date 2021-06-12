@echo off

SET JAVA_HOME=

SET KERNELNAME=FXWINAPP

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
SET FXLIB=%CURDIR%LIB
SET WDC_INC_65816=G:\devtools\WDCTools\wdc\Tools\include
SET WDC_INC_6502=G:\devtools\WDCTools\wdc\Tools\include
SET WDC_LIB=G:\devtools\WDCTools\wdc\Tools\lib;%FXLIB%

SET SREC_DIR=G:\devprojects\c256feonix\tools

SET COMPILER=G:\devtools\WDCTools\wdc\Tools\bin\wdc816cc.exe

SET ASSEMBLER=G:\devtools\WDCTools\wdc\Tools\bin\wdc816AS.exe
REM ASSEMBLER=G:\devtools\WDCTools\wdc\Tools\bin\WDC02AS.exe

SET LINKER=G:\devtools\WDCTools\wdc\Tools\bin\wdcln.exe

REM SET INCLUDES=-IG:\devprojects\6502

SET INCLUDES=-I.

SET ASM_OPTIONS=-DUSING_816 -DLARGE -V -l
SET OPTIONS=-DUSE_FX256_FMX -DUSING_816 -DLARGE -ML -MT -LT -PX -WO -WR -A -BS -SO0S
SET ASM_OPT=-G -V -L -W

SET LINK_OPT=-C090000,090000 -T -G -B -Q
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

%LINKER% %LINK_OPT% -HB fxwinapp.obj -LFXUSER -LCL -O %KERNELNAME%.BIN

TYPE %KERNELNAME%.MAP

CD ..
