/*
 * FXOS_GUI_SDK.h
 * Created Oct 14, 2021 1:43:24 PM
 *
 */

#ifndef FXOS_GUI_SDK_H_
#define FXOS_GUI_SDK_H_

#include "fxtypes.h"


/*
*
* Name:GetDesktopWindow
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef HWND (*GETDESKTOPWINDOW)(void);
HWND GetDesktopWindow(VOID);

/*
*
* Name:CreateWindowClass
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef PWNDCLASS (*CREATEWINDOWCLASS)(LPCSTR,LPCSTR,UINT,HICON,HCURSOR,HBRUSH,FXWndProc);
PWNDCLASS CreateWindowClass(LPCSTR pClassName,LPCSTR pMenuName,UINT style,HICON icon,HCURSOR cursor,HBRUSH brush,FXWndProc pWndProc);

/*
*
* Name:CreateWindowClassEx
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef PWNDCLASS (*CREATEWINDOWCLASSEX)(LPCSTR,LPCSTR,UINT,UINT,HICON,HCURSOR,HBRUSH,FXWndProc);
PWNDCLASS CreateWindowClassEx(LPCSTR pClassName,LPCSTR pMenuName,UINT style,UINT styleEx,HICON icon,HCURSOR cursor,HBRUSH brush,FXWndProc pWndProc);

/*
*
* Name:RegisterWindowClass
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef HANDLE (*REGISTERWINDOWCLASS)(PWNDCLASS);
HANDLE RegisterWindowClass(PWNDCLASS pTemplate);

/*
*
* Name:CreateWindow
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef PWINDOW (*CREATEWINDOW)(ULONG,LPCSTR,LPCSTR,INT,INT,INT,INT,HWND,HMENU,HINSTANCE);
PWINDOW CreateWindow(ULONG style,LPCSTR pClassName,LPCSTR pWindowName,INT X,INT Y,INT nWidth,INT nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance);

/*
*
* Name:CreateWindowEx
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef PWINDOWEX (*CREATEWINDOWEX)(ULONG,LPCSTR,LPCSTR,INT,INT,INT,INT,HWND,HMENU,HINSTANCE);
PWINDOWEX CreateWindowEx(ULONG style,LPCSTR pClassName,LPCSTR pWindowName,INT x,INT y,INT nWidth,INT nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance);

/*
*
* Name:SetWindowData
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef LPVOID (*SETWINDOWDATA)(HWND,UINT,LPVOID);
LPVOID SetWindowData(HWND hWnd,UINT index,LPVOID data);

/*
*
* Name:GetWindowData
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef LPVOID (*GETWINDOWDATA)(HWND,UINT);
LPVOID GetWindowData(HWND hWnd,UINT index);

/*
*
* Name:LoadDialog
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef PWINDOW (*LOADDIALOG)(LPCSTR,LPCSTR,INT,INT,INT,INT,HWND);
PWINDOW LoadDialog(LPCSTR pWindowName,LPCSTR pDlgClassName,INT x,INT y,INT nWidth,INT nHeight,HWND hWndParent);

/*
*
* Name:CloseWindow
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef BOOL (*CLOSEWINDOW)(HWND);
BOOL CloseWindow(HWND hWnd);

/*
*
* Name:DestroyWindow
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef BOOL (*DESTROYWINDOW)(HWND);
BOOL DestroyWindow(HWND hWnd);

/*
*
* Name:RegisterMousePointerClass
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef HPOINTER (*REGISTERMOUSEPOINTERCLASS)(LPCSTR,LPCSTR);
HPOINTER RegisterMousePointerClass(LPCSTR pFontName,LPCSTR pCursorData);

/*
*
* Name:LoadFontClass
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef LPVOID (*LOADFONTCLASS)(LPSTR);
LPVOID LoadFontClass(LPSTR path);

/*
*
* Name:RegisterFontClass
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef HFONT (*REGISTERFONTCLASS)(LPCSTR,LPCSTR);
HFONT RegisterFontClass(LPCSTR pFontName,LPCSTR pFontData);

/*
*
* Name:GetFontClass
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef HFONT (*GETFONTCLASS)(LPCSTR);
HFONT GetFontClass(LPCSTR pFontName);

/*
*
* Name:LoadResource
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef HANDLE (*LOADRESOURCE)(LPCSTR);
HANDLE LoadResource(LPCSTR resourceFile);

/*
*
* Name:GetStringTableEntry
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef PFXSTRING (*GETSTRINGTABLEENTRY)(UINT);
PFXSTRING GetStringTableEntry(UINT objId);

/*
*
* Name:RegisterStringTable
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef BOOL (*REGISTERSTRINGTABLE)(HANDLE,BOOL);
BOOL RegisterStringTable(HANDLE hStringTable,BOOL bRelease);

/*
*
* Name:GetMousePointerClass
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef HPOINTER (*GETMOUSEPOINTERCLASS)(LPCSTR);
HPOINTER GetMousePointerClass(LPCSTR pPointerName);

/*
*
* Name:SetMousePointer
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef HPOINTER (*SETMOUSEPOINTER)(LPCSTR);
HPOINTER SetMousePointer(LPCSTR pPointerName);

/*
*
* Name:ShowWindow
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef BOOL (*SHOWWINDOW)(HWND,UINT);
BOOL ShowWindow(HWND hWnd,UINT showFlag);

/*
*
* Name:ClientToGlobalCoordinates
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef PPOINT (*CLIENTTOGLOBALCOORDINATES)(HWND,PPOINT);
PPOINT ClientToGlobalCoordinates(HWND hWnd,PPOINT point);

/*
*
* Name:GlobalToClientCoordinates
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef PPOINT (*GLOBALTOCLIENTCOORDINATES)(HWND,PPOINT);
PPOINT GlobalToClientCoordinates(HWND hWnd,PPOINT point);

/*
*
* Name:CreateMenu
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef PWINDOW (*CREATEMENU)(HWND,HMENU,HINSTANCE);
PWINDOW CreateMenu(HWND hWndParent,HMENU hMenu,HINSTANCE hInstance);

/*
*
* Name:CloseMenu
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef VOID (*CLOSEMENU)(HWND);
VOID CloseMenu(HWND hWndMenu);

/*
*
* Name:SelectMenu
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef VOID (*SELECTMENU)(HWND,UINT);
VOID SelectMenu(HWND hWndMenu,UINT index);

/*
*
* Name:HighlightMenu
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef VOID (*HIGHLIGHTMENU)(HWND,UINT,BOOL);
VOID HighlightMenu(HWND hWndMenu,UINT index,BOOL selected);

/*
*
* Name:CreateMenuResource
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef HMENU (*CREATEMENURESOURCE)(void);
HMENU CreateMenuResource(VOID);

/*
*
* Name:AddMenuItem
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef HMENU (*ADDMENUITEM)(HMENU,LPCSTR,UINT);
HMENU AddMenuItem(HMENU hMenu,LPCSTR menuCaption,UINT menuId);

/*
*
* Name:SetMenuItemAttribute
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef VOID (*SETMENUITEMATTRIBUTE)(HMENU,HFONT);
VOID SetMenuItemAttribute(HMENU hMenu,HFONT hFont);

/*
*
* Name:SetMenuState
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef BOOL (*SETMENUSTATE)(HMENU,UINT,UINT);
BOOL SetMenuState(HMENU hMenu,UINT cmdId,UINT state);

/*
*
* Name:SendMenuAccelerator
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef HWND (*SENDMENUACCELERATOR)(CHAR);
HWND SendMenuAccelerator(CHAR accelkey);

/*
*
* Name:SendMenuAcceleratorItem
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef HWND (*SENDMENUACCELERATORITEM)(HWND,UINT);
HWND SendMenuAcceleratorItem(HWND dropDown,UINT menuPos);

/*
*
* Name:CreateButton
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef PWINDOW (*CREATEBUTTON)(HWND,LPCSTR,UINT,int,int,int,int);
PWINDOW CreateButton(HWND hWndParent,LPCSTR caption,UINT controlId,int x,int y,int width,int height);

/*
*
* Name:CreateTextBox
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef PWINDOW (*CREATETEXTBOX)(HWND,LPCSTR,UINT,UINT,int,int,int,int);
PWINDOW CreateTextBox(HWND hWndParent,LPCSTR caption,UINT textboxId,UINT style,int x,int y,int width,int height);

/*
*
* Name:CreateVerticalScrollBar
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef PWINDOW (*CREATEVERTICALSCROLLBAR)(HWND,LPCSTR,UINT);
PWINDOW CreateVerticalScrollBar(HWND hWndParent,LPCSTR caption,UINT buttonId);

/*
*
* Name:CreateMsgBox
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef PWINDOW (*CREATEMSGBOX)(UINT,LPCSTR,UINT,int,int);
PWINDOW CreateMsgBox(UINT type,LPCSTR caption,UINT buttonType,int x,int y);

/*
*
* Name:CenterWindow
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef VOID (*CENTERWINDOW)(HWND);
VOID CenterWindow(HWND hWnd);

/*
*
* Name:CenterBottomWindow
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef void (*CENTERBOTTOMWINDOW)(HWND);
void CenterBottomWindow(HWND hWnd);

/*
*
* Name:MoveWindow
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef void (*MOVEWINDOW)(HWND,int,int);
void MoveWindow(HWND hWnd,int x,int y);

/*
*
* Name:MoveWindowEx
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef void (*MOVEWINDOWEX)(HWND,int,int);
void MoveWindowEx(HWND hWnd,int x,int y);

/*
*
* Name:ResizeWindowEx
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef void (*RESIZEWINDOWEX)(HWND,int,int);
void ResizeWindowEx(HWND hWnd,int x,int y);

/*
*
* Name:GetFocusWindow
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef HWND (*GETFOCUSWINDOW)(VOID);
HWND GetFocusWindow(VOID);

/*
*
* Name:IsChildWindow
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef BOOL (*ISCHILDWINDOW)(HWND,HWND);
BOOL IsChildWindow(HWND hWndParent,HWND hWndChild);

/*
*
* Name:SetRect
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef void (*SETRECT)(PRECT,int,int,int,int);
void SetRect(PRECT prect,int x,int y,int width,int height);

/*
*
* Name:ClearRect
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef void (*CLEARRECT)(PRECT);
void ClearRect(PRECT prect);

/*
*
* Name:CopyRect
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef void (*COPYRECT)(PRECT,PRECT);
void CopyRect(PRECT prectSrc,PRECT prectDest);

/*
*
* Name:DrawText
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef UINT (*DRAWTEXT)(HDC,LPCSTR,PRECT);
UINT DrawText(HDC hDC,LPCSTR text,PRECT locInOUt);

/*
*
* Name:DrawWindowTextToPoint
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef UINT (*DRAWWINDOWTEXTTOPOINT)(HWND,LPCSTR,UINT,PRECT,LPCSTR);
UINT DrawWindowTextToPoint(HWND hWnd,LPCSTR text,UINT color,PRECT rectInOUt,LPCSTR charSet);

/*
*
* Name:GetMousePoint
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef PPOINT (*GETMOUSEPOINT)(PFXOSMESSAGE,PPOINT);
PPOINT GetMousePoint(PFXOSMESSAGE pMsg,PPOINT point);

/*
*
* Name:GetMouseClientPoint
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef PPOINT (*GETMOUSECLIENTPOINT)(PFXOSMESSAGE,PPOINT);
PPOINT GetMouseClientPoint(PFXOSMESSAGE pMsg,PPOINT point);

/*
*
* Name:DefaultWindowProc
* Subsystem:GUI
* Description: 
* Arguments: 
*
*/
typedef BOOL (*DEFAULTWINDOWPROC)(PFXOSMESSAGE);
BOOL DefaultWindowProc(PFXOSMESSAGE pMsg);


#endif