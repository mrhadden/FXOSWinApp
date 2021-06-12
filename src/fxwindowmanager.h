
#ifndef __FX_WINDOWS_
#define __FX_WINDOWS_

#include "fxos.h"


/////////////////////////////////////////////////////
// Window Chrome Styles
/////////////////////////////////////////////////////
#define FXWS_OVERLAPPED  		(0x00000000)
#define FXWS_NOBORDER	  		(0x00000000)

#define FXWS_VISIBLE  			(0x00000001)
#define FXWS_DISABLED 			(0x00000002)
#define FXWS_CAPTION  			(0x00000004)

#define FXWS_SYSMENU  			(0x00000008)
#define FXWS_MAXIMIZEBOX  		(0x00000010)
#define FXWS_MINIMIZEBOX  		(0x00000020)
#define FXWS_HSCROLL  			(0x00000040)
#define FXWS_VSCROLL  			(0x00000080)
#define FXWS_SIZEBOX  			(0x00000100)
#define FXWS_TABSTOP  			(0x00000200)
#define FXWS_MAXIMIZE 			(0x00000400)
#define FXWS_MINIMIZE 			(0x00000800)
#define FXWS_ICONIC   			(0x00001000)

#define FXWS_BORDER   			(0x00010000)
#define FXWS_THICKFRAME   		(0x00020000)
#define FXWS_DLGFRAME 			(0x00040000)
#define FXWS_CHILD    			(0x00100000)
#define FXWS_CHILDWINDOW  		(0x00100000)
#define FXWS_POPUP    			(0x00200000)
#define FXWS_CLIPCHILDREN 		(0x00400000)
#define FXWS_CLIPSIBLINGS		(0x00800000)
#define FXWS_GROUP    			(0x01000000)

#define FXWS_PARENT_WIDTH		(0x02000000)
#define FXWS_PARENT_HEIGHT		(0x04000000)

#define FXWS_CENTER_MIDDLE 		(0x10000000)
#define FXWS_CENTER_TOP 		(0x20000000)
#define FXWS_CENTER_BOTTOM 		(0x40000000)

#define FXWS_GLOBAL_COORD		(0x80000000)


#define FXWS_OVERLAPPEDWINDOW 	(FXWS_CAPTION | FXWS_SYSMENU | FXWS_THICKFRAME | FXWS_MINIMIZEBOX | FXWS_MAXIMIZEBOX)
#define FXWS_POPUPWINDOW  		(FXWS_POPUP | FXWS_BORDER | FXWS_SYSMENU)

/////////////////////////////////////////////////////
// Window Chrome Extended Styles
/////////////////////////////////////////////////////
#define FXWSX_ALWAYS_BACKPLANE	(0x00000000)
#define FXWSX_ALWAYS_FRONTPLANE	(0x00000001)
#define FXWSX_CACHE_TITLE   	(0x00000002)
#define FXWSX_DESKTOP_FLAG 	    (0x00000004)
#define FXWSX_MENU_ANCHOR_FLAG  (0x00000008)
#define FXWSX_EXT_RESERVED1     (0x00000010)
#define FXWSX_EXT_RESERVED2     (0x00000020)
#define FXWSX_EXT_RESERVED3     (0x00000040)
#define FXWSX_EXT_RESERVED4     (0x00000080)




/*
#define FXWS_BORDER   			(0x00800000)
 #define FXWS_CAPTION  			(0x00c00000)
 #define FXWS_CHILD    			(0x40000000)
 #define FXWS_CHILDWINDOW  		(0x40000000)
 #define FXWS_CLIPCHILDREN 		(0x02000000)
 #define FXWS_CLIPSIBLINGS		(0x04000000)
 #define FXWS_DISABLED 			(0x08000000)
 #define FXWS_DLGFRAME 			(0x00400000)
 #define FXWS_GROUP    			(0x00020000)
 #define FXWS_HSCROLL  			(0x00100000)
 #define FXWS_ICONIC   			(0x20000000)
 #define FXWS_MAXIMIZE 			(0x01000000)
 #define FXWS_MAXIMIZEBOX  		(0x00010000)
 #define FXWS_MINIMIZE 			(0x20000000)
 #define FXWS_MINIMIZEBOX  		(0x00020000)
 #define FXWS_OVERLAPPED  		(0x00000000)
 #define FXWS_OVERLAPPEDWINDOW 	(FXWS_OVERLAPPED | FXWS_CAPTION | FXWS_SYSMENU | FXWS_THICKFRAME | FXWS_MINIMIZEBOX | FXWS_MAXIMIZEBOX)
 #define FXWS_POPUP    			(0x80000000)
 #define FXWS_POPUPWINDOW  		(FXWS_POPUP | FXWS_BORDER | FXWS_SYSMENU)
 #define FXWS_SIZEBOX  			(0x00040000)
 #define FXWS_SYSMENU  			(0x00080000)
 #define FXWS_TABSTOP  			(0x00010000)
 #define FXWS_THICKFRAME   		(0x00040000)
 #define FXWS_TILEDWINDOW  		(0x00cf0000)
 #define FXWS_VISIBLE  			(0x10000000)
 #define FXWS_VSCROLL  			(0x00200000)
*/

// SYSTEM METRICS

#define SM_CXSCREEN 0
#define SM_CYSCREEN 1
#define SM_CXVSCROLL 2
#define SM_CYHSCROLL 3
#define SM_CYCAPTION 4
#define SM_CXBORDER 5
#define SM_CYBORDER 6
#define SM_CXDLGFRAME 7
#define SM_CXFIXEDFRAME 7
#define SM_CYDLGFRAME 8
#define SM_CYFIXEDFRAME 8
#define SM_CYVTHUMB 9
#define SM_CXHTHUMB 10
#define SM_CXICON 11
#define SM_CYICON 12
#define SM_CXCURSOR 13
#define SM_CYCURSOR 14
#define SM_CYMENU 15
#define SM_CXFULLSCREEN 16
#define SM_CYFULLSCREEN 17
#define SM_CYKANJIWINDOW 18
#define SM_MOUSEPRESENT 19
#define SM_CYVSCROLL 20
#define SM_CXHSCROLL 21
#define SM_DEBUG 22
#define SM_SWAPBUTTON 23
#define SM_CXGADGET  24
#define SM_CYGADGET 25
#define SM_RESERVED3 26
#define SM_RESERVED4 27
#define SM_CXMIN 28
#define SM_CYMIN 29
#define SM_CXSIZE 30
#define SM_CYSIZE 31
#define SM_CXSIZEFRAME 32
#define SM_CXFRAME 32
#define SM_CYSIZEFRAME 33
#define SM_CYFRAME 33
#define SM_CXMINTRACK 34
#define SM_CYMINTRACK 35
#define SM_CXDOUBLECLK 36
#define SM_CYDOUBLECLK 37
#define SM_CXICONSPACING 38
#define SM_CYICONSPACING 39
#define SM_MENUDROPALIGNMENT 40
#define SM_PENWINDOWS 41
#define SM_DBCSENABLED 42
#define SM_CMOUSEBUTTONS 43
#define SM_SECURE 44
#define SM_CXEDGE 45
#define SM_CYEDGE 46
#define SM_CXMINSPACING 47
#define SM_CYMINSPACING 48
#define SM_CXSMICON 49
#define SM_CYSMICON 50
#define SM_CYSMCAPTION 51
#define SM_CXSMSIZE 52
#define SM_CYSMSIZE 53
#define SM_CXMENUSIZE 54
#define SM_CYMENUSIZE 55
#define SM_ARRANGE 56
#define SM_CXMINIMIZED 57
#define SM_CYMINIMIZED 58
#define SM_CXMAXTRACK 59
#define SM_CYMAXTRACK 60
#define SM_CXMAXIMIZED 61
#define SM_CYMAXIMIZED 62
#define SM_NETWORK 63
#define SM_CLEANBOOT 67
#define SM_CXDRAG 68
#define SM_CYDRAG 69
#define SM_SHOWSOUNDS 70
#define SM_CXMENUCHECK 71
#define SM_CYMENUCHECK 72
#define SM_SLOWMACHINE 73
#define SM_MIDEASTENABLED 74
#define SM_MOUSEWHEELPRESENT 75
#define SM_XVIRTUALSCREEN 76
#define SM_YVIRTUALSCREEN 77
#define SM_CXVIRTUALSCREEN 78
#define SM_CYVIRTUALSCREEN 79
#define SM_CMONITORS 80
#define SM_SAMEDISPLAYFORMAT 81
#define SM_CXPADDEDBORDER 92

#define SM_CXFULLSCREEN_DEFAULT 		(640)
#define SM_CXMENUSIZE_DEFAULT 			SM_CXFULLSCREEN_DEFAULT
#define SM_CYFULLSCREEN_DEFAULT 		(480)
#define SM_CXFRAME_DEFAULT 				(2)
#define SM_CYFRAME_DEFAULT 				(2)
#define SM_CXBORDER_DEFAULT 			(1)
#define SM_CYBORDER_DEFAULT 			(1)
#define SM_CXVSCROLL_DEFAULT 			(FONTH + 1)
#define SM_CYHSCROLL_DEFAULT 			(FONTW + 1)
#define SM_CYSMCAPTION_DEFAULT 			(10)
#define SM_CXICON_DEFAULT 				(16)
#define SM_CYICON_DEFAULT 				(16)
#define SM_CXDLGFRAME_DEFAULT 			(4)
#define SM_CXFIXEDFRAME_DEFAULT 		SM_CXDLGFRAME_DEFAULT
#define SM_CYDLGFRAME_DEFAULT 			(4)
#define SM_CYFIXEDFRAME_DEFAULT 		SM_CYDLGFRAME_DEFAULT
#define SM_CYCAPTION_DEFAULT 			(12)
#define SM_CXGADGET_DEFAULT 			(8)
#define SM_CYGADGET_DEFAULT 			(8)

#define SM_CLIENT_BORDER_DEFAULT 		(1)
// SM_CYCAPTION_DEFAULT + SM_CXBORDER_DEFAULT + SM_CXFRAME_DEFAULT + SM_CLIENT_BORDER_DEFAULT
#define SM_TITLE_XGADGETGAP_DEFAULT 	(4)
#define SM_TITLE_YGADGETGAP_DEFAULT 	(5)

/////////////////////////////////////////////////////
// Window Menu Inital Values
/////////////////////////////////////////////////////
#define MENU_INITAL_OFFSET_X	(1 * FONTW)
#define MENU_INITAL_OFFSET_Y	(2)


#define DEFAULT_WIN_HIGHLIGHT_COLOR		(3)

#define WM_QUERY_VERSION_MAJOR			(0)
#define WM_QUERY_VERSION_MINOR			(1)
#define WM_QUERY_VERSION_RELEASE		(2)

typedef VOID (*WM_EVENTS)(LPVOID);
typedef LPVOID (*WM_HANDLE_EVENT)(LPVOID,PFXOSMESSAGE);
typedef UINT (*WM_CONFIGURE)(UINT,LPVOID);
typedef UINT (*WM_QUERY_METRIC)(UINT);
typedef VOID (*WM_DOPROCS)(PFXPROCESS,PFXOSMESSAGE,BOOL);

typedef struct _fxos_winman_vtable
{
	WM_EVENTS		Events;
	WM_CONFIGURE    ConfigureWindowManager;
	WM_HANDLE_EVENT ProcessWindowEvent;
	WM_QUERY_METRIC QueryWindowManager;
	WM_DOPROCS	    DoWndProcs;
}
WINDOWMANAGER;
typedef WINDOWMANAGER FAR *PWINDOWMANAGER;



#define 	POINTER_STYLE_ARROW			((LPCSTR)"ARROW")
#define 	POINTER_STYLE_HOURGLASS		((LPCSTR)"HOURGLASS")
#define 	POINTER_STYLE_HELP			((LPCSTR)"HELP")
#define 	POINTER_STYLE_RESIZE		((LPCSTR)"RESIZE")

#define 	MENU_BLANK_CAPTION		((LPCSTR)" ")

#define CTL_TEXTBOX_SINGLE   (0)
#define CTL_TEXTBOX_MULTI    (1)
#define CTL_TEXTBOX_VSCROLL  (2)
#define CTL_TEXTBOX_HSCROLL  (4)

#define 	FX_DTD_MSGBOX (0x02)
/*
typedef struct
{
	UINT   type;
	UINT   size;
	LPVOID desktopAction;
}
DESKTOP_DATA;
typedef DESKTOP_DATA FAR *PDESKTOP_DATA;

typedef struct
{
	UINT   type;
	PFXSTRING caption;
	UINT   buttonType;
	int    x;
	int    y;
}
MSGBOX_DATA;
typedef MSGBOX_DATA FAR *PMSGBOX_DATA;
*/
//
//
//
typedef struct  _childMessage_t
{
	MSGTYPE msgType;
	LPVOID  msgData;
	UINT	dataSize;
} EACHCHILD_MSG;
typedef EACHCHILD_MSG FAR *PEACHCHILD_MSG;


#endif
