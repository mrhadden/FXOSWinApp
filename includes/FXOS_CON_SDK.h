/*
 * FXOS_CON_SDK.h
 * Created Oct 14, 2021 1:43:24 PM
 *
 */

#ifndef FXOS_CON_SDK_H_
#define FXOS_CON_SDK_H_

#include "fxtypes.h"


/*
*
* Name:InitializeText
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef VOID (*INITIALIZETEXT)(VOID);
VOID InitializeText(VOID);

/*
*
* Name:InitializeTextFonts
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef int (*INITIALIZETEXTFONTS)(UINT);
int InitializeTextFonts(UINT flag);

/*
*
* Name:GetConsoleVisibleColumns
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef int (*GETCONSOLEVISIBLECOLUMNS)(void);
int GetConsoleVisibleColumns(VOID);

/*
*
* Name:GetConsoleColumnsPerLine
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef int (*GETCONSOLECOLUMNSPERLINE)(void);
int GetConsoleColumnsPerLine(VOID);

/*
*
* Name:GetConsoleVisibleLines
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef int (*GETCONSOLEVISIBLELINES)(void);
int GetConsoleVisibleLines(VOID);

/*
*
* Name:GetConsoleMaxLines
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef int (*GETCONSOLEMAXLINES)(void);
int GetConsoleMaxLines(VOID);

/*
*
* Name:ConsoleEnableBorder
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef void (*CONSOLEENABLEBORDER)(void);
void ConsoleEnableBorder(VOID);

/*
*
* Name:ConsoleDisableBorder
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef void (*CONSOLEDISABLEBORDER)(void);
void ConsoleDisableBorder(VOID);

/*
*
* Name:SetConsoleBorderColor
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef void (*SETCONSOLEBORDERCOLOR)(char,char,char);
void SetConsoleBorderColor(char r,char g,char b);

/*
*
* Name:SetConsoleBorder
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef void (*SETCONSOLEBORDER)(int,int,char,char,char);
void SetConsoleBorder(int x,int y,char r,char g,char b);

/*
*
* Name:SetConsoleFontPage
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef void (*SETCONSOLEFONTPAGE)(UINT);
void SetConsoleFontPage(UINT page);

/*
*
* Name:SetConsoleCursor
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef void (*SETCONSOLECURSOR)(UINT);
void SetConsoleCursor(UINT page);

/*
*
* Name:SetConsoleCursorPosition
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef void (*SETCONSOLECURSORPOSITION)(int,int);
void SetConsoleCursorPosition(int x,int y);

/*
*
* Name:ConsoleClearScreen
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef void (*CONSOLECLEARSCREEN)(int);
void ConsoleClearScreen(int bcolor);

/*
*
* Name:ConsolePrintChar
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef void (*CONSOLEPRINTCHAR)(int,int,char,int,int);
void ConsolePrintChar(int col,int row,char c,int fcolor,int bcolor);

/*
*
* Name:ConsolePrintString
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef int (*CONSOLEPRINTSTRING)(int,int,char*,int,int);
int ConsolePrintString(int col,int row,char* text,int fcolor,int bcolor);

/*
*
* Name:ConsolePrintBuffer
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef int (*CONSOLEPRINTBUFFER)(int,int,char*,LPVOID);
int ConsolePrintBuffer(int col,int row,char* text,LPVOID buffer);

/*
*
* Name:SetConsoleColor
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef int (*SETCONSOLECOLOR)(int,int,char*);
int SetConsoleColor(int col,int row,char* textColor);

/*
*
* Name:CreateConsoleDialog
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef void (*CREATECONSOLEDIALOG)(int,int,int,int,LPCSTR);
void CreateConsoleDialog(int x,int y,int width,int height,LPCSTR message);

/*
*
* Name:ConsolePrint
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef int (*CONSOLEPRINT)(LPCSTR);
int ConsolePrint(LPCSTR message);

/*
*
* Name:ConsoleClear
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef void (*CONSOLECLEAR)(VOID);
void ConsoleClear(VOID);

/*
*
* Name:SetConsolePosition
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef void (*SETCONSOLEPOSITION)(int,int);
void SetConsolePosition(int row,int col);

/*
*
* Name:GetConsoleRow
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef int (*GETCONSOLEROW)(VOID);
int GetConsoleRow(VOID);

/*
*
* Name:GetConsoleColumn
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef int (*GETCONSOLECOLUMN)(VOID);
int GetConsoleColumn(VOID);

/*
*
* Name:CreateConsoleWindow
* Subsystem:CON
* Description: 
* Arguments: 
*
*/
typedef void (*CREATECONSOLEWINDOW)(PRECT,TITLE,PHANDLE);
void CreateConsoleWindow(PRECT prect,TITLE title,PHANDLE phandle);


#endif