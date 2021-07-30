/*
 *
 *
 * 	FXOS Data Types
 *  Version 0.9 Beta
 * 	Subject to change without notice
 *
 */
#ifndef __FX_TYPES_
#define __FX_TYPES_

#ifdef NOFAR
#define FAR
#else
#define FAR far
#endif

#define EXPORT_FUNC_KERNEL(a)
#define EXPORT_FUNC_GUI(a)
#define EXPORT_FUNC_GFX(a)
#define EXPORT_FUNC_CON(a)
#define EXPORT_FUNC_DOS(a)

#define EXPORT_TYPE_BEGIN(a)
#define EXPORT_TYPE_END(a)
#define EXPORT_STRING(a,b)

#define	THROW_EXCEPTION(a,b,c)	{asm BRK;}


#ifndef NULL
#define NULL	((void *)0)
#endif

#ifndef TRUE
#define TRUE	(1)
#endif

#ifndef FALSE
#define FALSE	(0)
#endif

typedef void VOID;
typedef VOID FAR *LPVOID;
//#ifndef UINT8
//typedef unsigned char UINT8;
//#define UINT8
//#endif
#ifndef TCHAR
#define TCHAR(a) a
#endif

//
// byte sized types
//
typedef unsigned char UINT_8;
typedef UINT_8 FAR *PUINT_8;
typedef unsigned int  UINT_16;
typedef UINT_16 FAR *PUINT_16;
typedef unsigned long UINT_32;
typedef UINT_32 FAR *PUINT_32;

typedef char  CHAR;
typedef CHAR FAR *LPCHAR;
typedef CHAR FAR *LPSTR;
typedef const CHAR FAR *LPCSTR;
typedef const CHAR FAR *LPWCSTR;
typedef unsigned char UCHAR;
typedef UCHAR FAR *PUCHAR;
typedef volatile UCHAR FAR *IOPORT;
typedef unsigned char BYTE;
typedef unsigned char *PBYTE;
typedef int  WORD;
typedef int  INT;
typedef unsigned int  UINT;
typedef unsigned int  USHORT;
typedef unsigned int FAR *PUINT;
//#ifndef UINT16
//typedef unsigned int  UINT16;
//#define UINT16
//#endif
typedef long  LONG;
typedef LONG FAR *LPLONG;
typedef unsigned long ULONG;
typedef unsigned long DWORD;
//#ifndef UINT32
//typedef unsigned long  UINT32;
//#define UINT32
//#endif
typedef unsigned char  BOOL;
typedef BOOL FAR *LPBOOL;
//typedef UCHAR FAR *PFAR;

typedef UCHAR uint8_t;
typedef ULONG uint32_t;

typedef LPVOID HPOINTER;
typedef LPVOID HDC;
typedef LPVOID HFONT;
typedef LPVOID HCOLOR;
typedef LPVOID HSTRINGTABLE;
// UNICODE
typedef UINT  WCHAR;
typedef WCHAR FAR *LPWCHAR;
//

typedef DWORD HRESULT;


typedef struct _fx_bytebits
{
	unsigned char b7:1;
	unsigned char b6:1;
	unsigned char b5:1;
	unsigned char b4:1;
	unsigned char b3:1;
	unsigned char b2:1;
	unsigned char b1:1;
	unsigned char b0:1;
}BYTEBITS;
typedef BYTEBITS FAR *PBYTEBITS;

typedef struct _fx_node
{
	BYTE 		type;
	BYTE 		Reserved0;
    LPVOID  	data;
    struct 	_fx_node FAR *last;
    struct 	_fx_node FAR *next;
    UCHAR	   name[32];
    UINT 	   Reserved1;
}FXNODE;
typedef FXNODE FAR *PFXNODE;

typedef void (*NodeListDeallocator)(LPCSTR name,LPVOID pdata);

typedef struct _fx_nodelist
{
	PFXNODE listhead;
	LPVOID  listData;
	NodeListDeallocator deallocator;
}FXNODELIST;
typedef FXNODELIST FAR *PFXNODELIST;

struct _fx_queue
{
    int     count;
    FXNODE FAR *front;
    FXNODE FAR *rear;
};
typedef struct _fx_queue FXQUEUE;
typedef FXQUEUE FAR *PFXQUEUE;

typedef BYTE	PROCESS_BANK;
typedef ULONG   PROCESS_ID;
typedef UINT    USERID;
typedef LPVOID  PROCESS_CTX;
typedef LPVOID  PROCESS_TLS;
typedef LPVOID  PROCESS_RESOURCE;
typedef LPCHAR	FILE_PATH_NAME;
typedef UINT	PROCESS_STATUS;

typedef struct
{
	UCHAR subsystem;
	UCHAR level;
	UINT error;
} KERNEL_ERROR;
typedef KERNEL_ERROR FAR *PKERNEL_ERROR;
typedef ULONG KRESULT;
#define AS_KERR(a) ((PKERNEL_ERROR)a)
#define KERR_SUCCESS	(0L)
#define KERR_FAIL		(0x80000000L)
#define SUCCESS(a)		((0x80000000L & a) == 0)
#define FAILED(a)		(0x80000000L & a)

/*
typedef struct _fx_process_task_list
{
	UINT cbSize;
	UINT taskCount;
	LPCSTR FAR *
}PROCESS_TASK_LIST;
typedef PROCESS_TASK_LIST FAR *PPROCESS_TASK_LIST;
*/
#define PROCESS_TIMER_0		(0)
#define PROCESS_TIMER_1		(1)


typedef struct _fx_process_signal
{
	UINT cbSize;
}PROCESS_SIGNAL;
typedef PROCESS_SIGNAL FAR *PPROCESS_SIGNAL;

#define PROCESS_STATUS_INIT 		(0x00)
#define PROCESS_STATUS_RUNNING 		(0x01)
#define PROCESS_STATUS_SLEEPING		(0x02)
#define PROCESS_STATUS_TERMINATED	(0x03)
#define PROCESS_STATUS_READY	    (0xF0)
#define PROCESS_STATUS_WAITING		(0xF1)
#define PROCESS_STATUS_SEMAPHORE	(0xF2)

typedef struct _fx_semaphore
{
	int reserved;
}SEMAPHORE;

typedef struct _fx_fileBlock
{
	UINT openCount;
	UINT lockCount;
	BOOL dirty;
	BYTE fileBuffer[64];
}FILE_BLOCK;
typedef FILE_BLOCK FAR *FILE_HANDLE;

typedef PFXNODELIST PROCEDURE_LIST;
typedef PFXNODELIST FILE_PATH_LIST;
typedef PFXNODELIST FILE_BLOCK_LIST;
typedef PFXNODELIST SEMAPHORE_LIST;
typedef PFXNODELIST PROCESS_TLS_LIST;
typedef PFXNODELIST PROCESS_RESOURCE_LIST;

#define PFXNODE_FILE_PATH_TYPE			(0xA1)
#define PFXNODE_FILE_BLOCK_TYPE			(0xA2)
#define PFXNODE_SEMAPHORE_TYPE			(0xA3)
#define PFXNODE_PROCESS_TLS_TYPE		(0xA4)
#define PFXNODE_PROCESS_RESOURCE_TYPE	(0xA5)
#define PFXNODE_PROCEDURE_TYPE			(0xA6)

typedef unsigned int 	   MSGTYPE;
typedef PROCESS_ID  	   MSGSRC;
typedef PROCESS_ID  	   MSGDEST;
typedef unsigned char  	   MSGDATA;

#define FX_MSGSRC_DRIVER  	((MSGSRC)(-2))
#define MAX_FXMSG_DATA 16

typedef LPVOID HWND;
typedef LPVOID HMENU;

typedef struct _fx_irq_data
{
	int line;
	char FAR* keycode;
} IRQDATA;
typedef IRQDATA FAR* PIRQDATA;

typedef struct _task
{
	unsigned char SPL;
	unsigned char SPH;
	char FAR *pstack;
} TASK;

typedef struct _task_stack
{
	unsigned char FAR *SS;
} TASK_STACK;

typedef struct int_regs
{
	unsigned char PB;
	unsigned char PH;
	unsigned char PL;
	unsigned char PP;
	unsigned char DB;
	unsigned char DH;
	unsigned char DL;
	unsigned char AH;
	unsigned char AL;
	unsigned char XH;
	unsigned char XL;
	unsigned char YH;
	unsigned char YL;
} INT_REGS;
typedef INT_REGS FAR* PINT_REGS;


typedef struct _fx_eventMessage
{
	MSGSRC 		src;
	MSGDEST 	dest;
	MSGTYPE 	type;
	HWND		hwnd;
	LPVOID		pheap;
	ULONG  		msgTime;
	MSGDATA		data[MAX_FXMSG_DATA];
	BYTE		attr;
}FXOSMESSAGE;
typedef FXOSMESSAGE FAR *PFXOSMESSAGE;

typedef struct _fx_cmdMessage
{
	MSGSRC 		src;
	MSGDEST 	dest;
	MSGTYPE 	type;
	HWND		hwnd;
	LPVOID		pheap;
	ULONG  		msgTime;
	UINT		cmdCId;
	UINT		cmdMId;
	ULONG		parameter1;
	ULONG		parameter2;
	ULONG		parameter3;
	BYTE		attr;
}FXCMDMESSAGE;
typedef FXCMDMESSAGE FAR *PFXCMDMESSAGE;


typedef void (*FXProcessProc)(PFXOSMESSAGE pmsg);


typedef struct _fx_console_ctl
{
	int  maxCols;
	int  maxRows;
	int  curX;
	int  curY;
	int	 fgColor;
	int	 bgColor;
	BOOL mode;
	int  kbBuffer[16];
	LPCHAR screenBuffer;
	BOOL desktopMode;
	int  lastMouseButton;
	int  lastMouseX;
	int  lastMouseY;
}CONSOLE_CONTROL;
typedef CONSOLE_CONTROL FAR *PCONSOLE_CONTROL;

typedef struct _fx_desktop_ctl
{
	BOOL desktopMode;
	INT  cursorCtl;
	INT  cursorState;
	INT	 backgroundColor;
	INT	 foregroundColor;
	int  menuMode;
	int  lastMouseButton;
	int  lastMouseX;
	int  lastMouseY;
	LPCHAR currentDiskName;
	LPVOID diskNodes;
	LPVOID titleNodes;
	LPVOID menuNodes;
	LPVOID iconNodes;
	LPVOID windowNodes;
	LPVOID fontNodes;
	PROCEDURE_LIST wndProc;
}DESKTOP_CONTROL;
typedef DESKTOP_CONTROL FAR *PDESKTOP_CONTROL;

typedef struct _fx_process
{
	int 				 	cbSize;
	PROCESS_ID 			  	procId;
	PROCESS_ID 			  	parentId;
	PROCESS_CTX 		  	ctx;
	USERID 				  	userId;
	PROCESS_STATUS 		  	status;
	BOOL 				  	foregroundActive;
	//PROCESS_CTX 		  	ctx;
	PROCESS_TLS 		  	tls[8];
	LPCSTR				  	commandLine;

	SEMAPHORE_LIST  	  	semaphores;
	FILE_BLOCK_LIST       	fileHandles;
	FILE_PATH_LIST	  	  	pathList;
	PROCESS_RESOURCE_LIST 	resources;
	BOOL					timerAware;
	UINT					timerTicks[2];
	UINT					timerTickCount[2];
	KERNEL_ERROR			kernelError;
	PCONSOLE_CONTROL  	  	consoleCtl;
	PDESKTOP_CONTROL	  	desktopCtl;
	//PROCEDURE_LIST 		  	execProc;
	FXProcessProc			execProc;
	LPVOID					startupArgs;
}FXPROCESS;
typedef FXPROCESS FAR *PFXPROCESS;

typedef struct _fxProcessMessage
{
	MSGSRC 		src;
	MSGDEST 	dest;
	MSGTYPE 	type;
    PFXPROCESS	processInfo;
}FXPROCESSMESSAGE;
typedef FXPROCESSMESSAGE FAR*PFXPROCESSMESSAGE;

typedef unsigned int  KEYCODE;
typedef unsigned char SCANCODE;

typedef struct _k_key_state
{
	BYTE 	scanCode;
	BYTE 	isShifted;
	BYTE	isAlt;
	BYTE 	isExtended;
	BYTE 	isCapsLock;
	BYTE	isNumLock;
	BYTE	isScrollLock;
	KEYCODE	keyChar;
	ULONG   scanTime;
	BYTE 	ledStatus;
}KEYSTATE;
typedef KEYSTATE FAR* PKEYSTATE;

#define FX_KEYCODE_ESC 			(0x0001)
#define FX_KEYCODE_1 			(0x0002)
#define FX_KEYCODE_2 			(0x0003)
#define FX_KEYCODE_3 			(0x0004)
#define FX_KEYCODE_4 			(0x0005)
#define FX_KEYCODE_5 			(0x0006)
#define FX_KEYCODE_6 			(0x0007)
#define FX_KEYCODE_7 			(0x0008)
#define FX_KEYCODE_8 			(0x0009)
#define FX_KEYCODE_9 			(0x000A)
#define FX_KEYCODE_0 			(0x000B)
#define FX_KEYCODE_MINUS 		(0x000C)
#define FX_KEYCODE_EQUAL 		(0x000D)
#define FX_KEYCODE_BACKSPACE    (0x000E)
#define FX_KEYCODE_TAB 			(0x000F)
#define FX_KEYCODE_Q 			(0x0010)
#define FX_KEYCODE_W 			(0x0011)
#define FX_KEYCODE_E 			(0x0012)
#define FX_KEYCODE_R 			(0x0013)
#define FX_KEYCODE_T 			(0x0014)
#define FX_KEYCODE_Y 			(0x0015)
#define FX_KEYCODE_U 			(0x0016)
#define FX_KEYCODE_I 			(0x0017)
#define FX_KEYCODE_O 			(0x0018)
#define FX_KEYCODE_P 			(0x0019)
#define FX_KEYCODE_LEFT_SQUARE_BRACKET	(0x001A)
#define FX_KEYCODE_RIGHT_SQUARE_BRACKET	(0x001B)
#define FX_KEYCODE_ENTER 		(0x001C)
#define FX_KEYCODE_LEFT_CTL 	(0x001D)
#define FX_KEYCODE_A 			(0x001E)
#define FX_KEYCODE_S 			(0x001F)
#define FX_KEYCODE_D 			(0x0020)
#define FX_KEYCODE_F 			(0x0021)
#define FX_KEYCODE_G 			(0x0022)
#define FX_KEYCODE_H 			(0x0023)
#define FX_KEYCODE_J 			(0x0024)
#define FX_KEYCODE_K 			(0x0025)
#define FX_KEYCODE_L 			(0x0026)
#define FX_KEYCODE_SEMI 		(0x0027)
#define FX_KEYCODE_SQUOTE 		(0x0028)
#define FX_KEYCODE_TICK 		(0x0029)
#define FX_KEYCODE_LEFT_SHIFT 	(0x002A)
#define FX_KEYCODE_BACKSLASH 	(0x002B)
#define FX_KEYCODE_Z 			(0x002C)
#define FX_KEYCODE_X 			(0x002D)
#define FX_KEYCODE_C 			(0x002E)
#define FX_KEYCODE_V 			(0x002F)
#define FX_KEYCODE_B 			(0x0030)
#define FX_KEYCODE_N 			(0x0031)
#define FX_KEYCODE_M 			(0x0032)
#define FX_KEYCODE_COMMA 		(0x0033)
#define FX_KEYCODE_PERIOD 		(0x0034)
#define FX_KEYCODE_SLASH 		(0x0035)
#define FX_KEYCODE_RIGHT_SHIFT 	(0x0036)
#define FX_KEYCODE_ASTERISK 	(0x0037)
#define FX_KEYCODE_LEFT_ALT 	(0x0038)
#define FX_KEYCODE_SPACE 		(0x0039)
#define FX_KEYCODE_CAPLOCK 		(0x003A)
#define FX_KEYCODE_F1 			(0x003B)
#define FX_KEYCODE_F2 			(0x003C)
#define FX_KEYCODE_F3 			(0x003D)
#define FX_KEYCODE_F4 			(0x003E)
#define FX_KEYCODE_F5 			(0x003F)
#define FX_KEYCODE_F6 			(0x0040)
#define FX_KEYCODE_F7 			(0x0041)
#define FX_KEYCODE_F8 			(0x0042)
#define FX_KEYCODE_F9 			(0x0043)
#define FX_KEYCODE_F10 			(0x0044)
#define FX_KEYCODE_F11 			(0x0057)
#define FX_KEYCODE_F12 			(0x0058)
#define FX_KEYCODE_NUMLOCK 		(0x0045)
#define FX_KEYCODE_SCROLLLOCK	(0x0046)
#define FX_KEYCODE_PAD7 		(0x0047)
#define FX_KEYCODE_PAD8 		(0x0048)
#define FX_KEYCODE_PAD9 		(0x0049)
#define FX_KEYCODE_PAD_MINUS 	(0x004A)
#define FX_KEYCODE_PAD4 		(0x004B)
#define FX_KEYCODE_PAD5 		(0x004C)
#define FX_KEYCODE_PAD6 		(0x004D)
#define FX_KEYCODE_PAD_PLUS 	(0x004E)
#define FX_KEYCODE_PAD1 		(0x004F)
#define FX_KEYCODE_PAD2 		(0x0050)
#define FX_KEYCODE_PAD3 		(0x0051)
#define FX_KEYCODE_PAD0 		(0x0052)
#define FX_KEYCODE_PAD_DECIMAL 	(0x0053)

#define FX_KEYCODE_RIGHT_OS			(0xE05C)
#define FX_KEYCODE_LEFT_OS			(0xF05C)

#define FX_KEYCODE_CUR_LEFT_DOWN 	(0xE05C)
#define FX_KEYCODE_CUR_LEFT_UP	 	(0xF05C)

#define FX_KEYCODE_CUR_RIGHT_DOWN 	(0xE05C)
#define FX_KEYCODE_CUR_RIGHT_UP   	(0xF05C)

#define FX_KEYCODE_CUR_UP_DOWN   	(0xE05C)
#define FX_KEYCODE_CUR_UP_UP	 	(0xF05C)

#define FX_KEYCODE_CUR_DOWN 	 	(0xE05C)
#define FX_KEYCODE_CUR_DOWN_UP	 	(0xF05C)

/*
#define FX_KEYCODE_EX_ (0xE0,
#define FX_KEYCODE_XXX (0x35) //(keypad) / pressed

#define FX_KEYCODE_XXX (0xE0,
#define FX_KEYCODE_XXX (0x38) //right alt (or altGr) pressed

#define FX_KEYCODE_XXX (0xE0,
#define FX_KEYCODE_XXX (0x47) //home pressed

#define FX_KEYCODE_XXX (0xE0,
#define FX_KEYCODE_XXX (0x48) //cursor up pressed

#define FX_KEYCODE_XXX (0xE0,
#define FX_KEYCODE_XXX (0x49) //page up pressed

#define FX_KEYCODE_XXX (0xE0,
#define FX_KEYCODE_XXX (0x4B) //cursor left pressed

#define FX_KEYCODE_XXX (0xE0,
#define FX_KEYCODE_XXX (0x4D) //cursor right pressed

#define FX_KEYCODE_XXX (0xE0,
#define FX_KEYCODE_XXX (0x4F) //end pressed

#define FX_KEYCODE_XXX (0xE0,
#define FX_KEYCODE_XXX (0x50) //cursor down pressed

#define FX_KEYCODE_XXX (0xE0,
#define FX_KEYCODE_XXX (0x51) //page down pressed

#define FX_KEYCODE_XXX (0xE0,
#define FX_KEYCODE_XXX (0x52) //insert pressed

#define FX_KEYCODE_XXX (0xE0,
#define FX_KEYCODE_XXX (0x53) //delete pressed

#define FX_KEYCODE_XXX (0xE0,
#define FX_KEYCODE_XXX (0x2A,
#define FX_KEYCODE_XXX (0xE0,
#define FX_KEYCODE_XXX (0x37) //print screen pressed


#define FX_KEYCODE_XXX (0x81) //escape released
#define FX_KEYCODE_XXX (0x82) //1 released
#define FX_KEYCODE_XXX (0x83) //2 released

#define FX_KEYCODE_XXX (0x84) //3 released
#define FX_KEYCODE_XXX (0x85) //4 released
#define FX_KEYCODE_XXX (0x86) //5 released
#define FX_KEYCODE_XXX (0x87) //6 released

#define FX_KEYCODE_XXX (0x88) //7 released
#define FX_KEYCODE_XXX (0x89) //8 released
#define FX_KEYCODE_XXX (0x8A) //9 released
#define FX_KEYCODE_XXX (0x8B) //0 (zero) released

#define FX_KEYCODE_XXX (0x8C) //- released
#define FX_KEYCODE_XXX (0x8D) //= released
#define FX_KEYCODE_XXX (0x8E) //backspace released
#define FX_KEYCODE_XXX (0x8F) //tab released

*/

typedef struct _fx_property
{
	CHAR name[16];
	CHAR value[32];
}FXPROPERTY;
typedef FXPROPERTY FAR *PFXPROPERTY;


union _24bitPointer
{
	unsigned char *address;
	char bytes[4];
};

#define LOBYTE(a) ((CHAR)(a))
#define HIBYTE(a) ((CHAR)(((WORD)(a) >> 8) & 0xFF))
#define LOWORD(a) ((WORD)(a))
#define HIWORD(a) ((WORD)(((DWORD)(a) >> 16) & 0xFFFF))


#define L24BYTE(a) ((CHAR)(((LONG)(a))))
#define M24BYTE(a) ((CHAR)(((ULONG)(a) >> 8)  & 0xFF))
#define H24BYTE(a) ((CHAR)(((ULONG)(a) >> 16) & 0xFF))
#define H32BYTE(a) ((CHAR)(((ULONG)(a) >> 24) & 0xFF))

#define MAKEWORD(low, high) ( (WORD)((((WORD) (high)) << 8 )| ((BYTE)(low))) )
#define MAKELONG(low, high) ( (LONG)((((LONG) (high)) << 16)| ((WORD)(low))) )

#define INVALID_HANDLE (-1)

typedef struct _PointStruct
{
	int x;
	int y;
}POINT;
typedef POINT FAR *PPOINT;

typedef struct _RectStruct
{
	int   x;
	int   y;
	ULONG z;
	int   width;
	int   height;
	int   attr;
} RECT;
typedef RECT FAR* PRECT;


typedef struct
{
	LPSTR name;
	POINT topLeft;
	POINT bottomRight;
} RECTP;
typedef RECTP FAR* PRECTP;

typedef struct
{
	int x;
	int y;
	int z;
	int width;
	int height;
	ULONG data;
} DRECT;
typedef DRECT FAR* PDRECT;


typedef BOOL (*FXWndProc)(PFXOSMESSAGE pmsg);


typedef LPVOID HINSTANCE;
typedef LPVOID HICON;
typedef LPVOID HCURSOR;
typedef LPVOID HBRUSH;

typedef struct _k_WindowClass
{
	UINT 		cbSize;
	UINT      	style;
	UINT      	styleEx;
	FXWndProc   pWndProc;
	HINSTANCE 	hInstance;
	HICON     	hIcon;
	HCURSOR   	hCursor;
	HBRUSH    	hbrBackground;
	LPCSTR    	lpszMenuName;
	LPCSTR    	lpszClassName;
} WNDCLASS;
typedef WNDCLASS FAR *PWNDCLASS;

#define WINDOW_DEPTH_TOP	(0x10)
#define WINDOW_DEPTH_NOHIT	(0x00)
#define WINDOW_DEPTH_BOTTOM	(0xFF)

#define COLORBRUSH(a) ((HBRUSH)(ULONG)a)
#define BRUSHCOLOR(a) (UINT)((ULONG)a)

typedef struct _ClickableRect
{
	RECT 	area;
	ULONG   z;
	BOOL 	enabled;
} CLICKABLE;
typedef CLICKABLE FAR* PCLICKABLE;
typedef long HCLICKABLE;



typedef struct _NCClickableRect
{
	RECT area;
	UINT msgType;
	BOOL enabled;
} NCCLICKABLE;
typedef NCCLICKABLE FAR* PNCCLICKABLE;

#define CLIENTDATA_DEFAULT (0x00)
#define CLIENTDATA_USERID  (0x01)
#define CLIENTDATA_USER1   (0x02)
#define CLIENTDATA_USER2   (0x03)
#define CLIENTDATA_USER3   (0x04)
#define CLIENTDATA_TITLE   (0x05)

#define NC_ACTION_DRAG	   (0x01)
#define NC_ACTION_RESIZE   (0x02)
typedef struct _DragData
{
	RECT area;
	INT	 xoffset;
	INT	 yoffset;
	UINT msgType;
	UINT ncAction; // switch to action and remove is-attributes 1203
	BOOL isDrag;
	BOOL isResize;
	BOOL canDrag;
	BOOL canDrop;
	BOOL didDrag;
} DRAGDATA;
typedef DRAGDATA FAR* PDRAGDATA;


typedef struct _k_WindowStruct
{
	UINT 		 cbSize;
	ULONG		 style;
	ULONG		 styleEx;
	int  		 win_id;
	int  		 win_x;
	int  		 win_y;
	int  		 win_width;
	int  		 win_height;
	int  		 win_xoffset;
	int  		 win_yoffset;
	int  		 win_cxoffset;
	int  		 win_cyoffset;
	RECT 		 wndRect;
	RECT 		 clientRect;
	NCCLICKABLE	 nonclientGadgets[16];
	LPVOID 		 clickable;
	CHAR 		 win_title[32];
	UINT		 Reserved0;
	CHAR 		 win_class[16];
	CHAR 		 win_class_name[32];
	UINT		 nBitmapLayer;
	LPVOID		 bgRegion;
	PROCESS_ID 	 procid;
	PWNDCLASS    pWndClass;
	HWND		 pParentWindow;
	HMENU		 hMenu;
	HPOINTER	 hPointer;
	HBRUSH       hBackground;
	PFXNODELIST	 pChildWindows;
	PFXNODELIST	 pChildHitList;
	BOOL		 isVisible;
	LPVOID		 windowData;
	LPVOID 		 clientData[6];
	BOOL 		 isClosed;
	BOOL 		 isClosing;
	BOOL		 isDesktop;
	PFXNODE	     clickableNode;
} WINDOW;
typedef WINDOW FAR *PWINDOW;

typedef struct _k_WindowStructEx
{
	UINT 		 cbSize;
	ULONG		 style;
	ULONG		 styleEx;
	int  		 win_id;
	int  		 win_x;
	int  		 win_y;
	int  		 win_width;
	int  		 win_height;
	int  		 win_xoffset;
	int  		 win_yoffset;
	int  		 win_cxoffset;
	int  		 win_cyoffset;
	RECT 		 wndRect;
	RECT 		 clientRect;
	NCCLICKABLE	 nonclientGadgets[16];
	LPVOID 		 clickable;
	CHAR 		 win_title[32];
	UINT		 Reserved0;
	CHAR 		 win_class[16];
	UINT		 nBitmapLayer;
	PROCESS_ID 	 procid;
	PWNDCLASS    pWndClass;
	HWND		 pParentWindow;
	HMENU		 hMenu;
	HPOINTER	 hPointer;
	HBRUSH       hBackground;
	PFXNODELIST	 pChildWindows;
	PFXNODELIST	 pChildHitList;
	BOOL		 isVisible;
	LPVOID		 windowData;
	LPVOID 		 clientData[4];
	BOOL 		 isClosed;
	HWND  		 hWnd;
	RECT 		 localRect;
	RECT 		 globalRect;
	RECT 		 clientOffsetRect;
	BOOL		 isDesktop;
} WINDOWEX;
typedef WINDOWEX FAR *PWINDOWEX;



typedef LPVOID HANDLE;
typedef HANDLE FAR* PHANDLE;

typedef char FAR* TITLE;

typedef struct _FontMetric
{
	int width;
	int height;
} FONTMETRIC;

/*
struct _ctl_Textbox
{
	int win_id;
	int win_x;
	int win_y;
	int win_width;
	int win_height;
	char FAR** content;
};
typedef struct _ctl_Textbox TEXTBOXX;
typedef TEXTBOXX FAR* PTEXTBOXX;
typedef long HTEXTBOX;
*/

typedef LPVOID HMENURESOURCE;
typedef struct _MenuStruct
{
	int 		cx;
	int 		cy;
	int 		width;
	int 		height;
	char 		fcolor;
	char 		bcolor;
	char 		chromeLeft;
	char 		chromeRight1;
	char 		chromeRight2;
	HFONT	    hFont;
	UINT		itemId;
	LPCSTR 		pCaption;
	PFXNODELIST subMenus;
	LPVOID  	pBackground;
	HWND		hWndOwner;
}MENU;
typedef MENU FAR* PMENU;

typedef struct
{
	UINT 	menuId;
	LPCSTR 	caption;
	RECT 	rect;
}MENUTAG;
typedef MENUTAG FAR* PMENUTAG;

typedef struct
{
	PWINDOW		pParent;
	RECT 		rect;
	LPCSTR		captions[24];
	CHAR		chrome[24];
	UINT    	ids[24];
	CLICKABLE	clickable[24];
	UINT		selected;
}
MENUDROPDOWNDATA;
typedef MENUDROPDOWNDATA FAR *PMENUDROPDOWNDATA;

typedef struct _fx_button_t
{
	LPCSTR 		pCaption;
	UINT		cCaption;
	LPVOID  	data;
	UINT		captionPixelWidth;
}BUTTON;
typedef BUTTON FAR* PBUTTON;

typedef struct _fx_scrollbar_t
{
	UINT		min;
	UINT		max;
	UINT		increment;
	UINT		stopsize;
	int  		location;
	int 		state;
	RECT		rectThumb;
	LPVOID  	data;
}SCROLLBAR;
typedef SCROLLBAR FAR* PSCROLLBAR;

typedef struct _fx_listbox_t
{
	int			pos;
	UINT		selected;
	int 		offsetX;
	int 		offsetY;
	int 		inc;
	int 		direction;
	int 		top;
	int 		bottom;
	int			indexTop;
	int			indexBottom;
	UINT		maxItems;
	LPCHAR		fontSet;
	LPVOID  	data;
}LISTBOX;
typedef LISTBOX FAR* PLISTBOX;

typedef struct _fx_textbox_t
{
	int			pos;
	UINT		selected;
	int 		offsetX;
	int 		offsetY;
	BOOL		isShifted;
	BOOL		cursorState;
	LPCHAR		fontSet;
	LPVOID  	data;
}TEXTBOX;
typedef TEXTBOX FAR* PTEXTBOX;
#define ASTEXTBOX(a) ((PTEXTBOX)(a)->windowData)

typedef struct _fx_msgbox_t
{
	int			pos;
	UINT		selected;
	int 		offsetX;
	int 		offsetY;
	BOOL		isShifted;
	BOOL		cursorState;
	LPCHAR		fontSet;
	LPVOID  	data;
}MSGBOX;
typedef MSGBOX FAR* PMSGBOX;
#define ASMSGBOX(a) ((PMSGBOX)(a)->windowData)

typedef struct _fx_menuAnchor_t
{
	LPCSTR 		pCaption;
	UINT 		renderLayoutX;
	UINT 		renderLayoutY;
	UINT		captionPixelWidth;
	LPVOID  	data;
	PWINDOW		droppedWindow;
	CHAR		bytes[16];
}MENUANCHOR;
typedef MENUANCHOR FAR* PMENUANCHOR;


typedef void (*MenuAction)(PMENU pmenu, int cx, int cy, void FAR* data);

struct _SubMenuStruct
{
	char FAR* caption;
	MenuAction action;
};

typedef struct _SubMenuStruct SUBMENU;
typedef SUBMENU FAR* PSUBMENU;
typedef long HSUBMENU;

typedef struct _SubMenuListStruct
{
	char cMenus;
	PSUBMENU FAR** psubmenus;
} SUBMENULIST;
typedef SUBMENULIST FAR* PSUBMENULIST;

typedef struct _fx_ComBuffer
{
	UINT 	cbSize;
	UINT    cbBuffer;
	UCHAR 	buffer[256];
}FXCOMBUFFER;
typedef FXCOMBUFFER FAR* PFXCOMBUFFER;

typedef struct _fx_resource_header
{
	CHAR 	magic[4];
	BYTE	major;
	BYTE	minor;
	BYTE	type;
	BYTE	reserved;
	BYTE	resheaderSize;
}FXRFHEADER;
typedef FXRFHEADER FAR* PFXRFHEADER;

typedef struct _fx_resource_header_font
{
	CHAR 	title[16];
	BYTE	height;
	BYTE	width;
}FXRFHEADER_FONT;
typedef FXRFHEADER_FONT FAR* PFXRFHEADER_FONT;

#define FXRF_FONTDATA(a)	((PFXRFHEADER_FONT)((ULONG)(&a->resheaderSize) + 1L))

typedef struct _fx_resource_string
{
	CHAR 	locale[2];
	UINT	entries;
}FXRFHEADER_STRING;
typedef FXRFHEADER_STRING FAR* PFXRFHEADER_STRING;

typedef struct _fx_resource_string_entry
{
	UINT	index;
	UINT	length;
	BYTE	data;
}FXRFHEADER_STRING_ENTRY;
typedef FXRFHEADER_STRING_ENTRY FAR* PFXRFHEADER_STRING_ENTRY;

#define NEXT_STRING_TABLE_ENTRY(a)		(PFXRFHEADER_STRING_ENTRY)(((ULONG)&a->data) + ((ULONG)a->length))

//	RESOURSE TYPES
EXPORT_TYPE_BEGIN(RESOURCE_TYPE)
#define RESOURCE_TYPE_BASE			(0)
#define RESOURCE_TYPE_STRING		(RESOURCE_TYPE_BASE + 1)
#define RESOURCE_TYPE_MENU			(RESOURCE_TYPE_BASE + 2)
#define RESOURCE_TYPE_ICON			(RESOURCE_TYPE_BASE + 4)
#define RESOURCE_TYPE_FONT			(RESOURCE_TYPE_BASE + 5)
#define RESOURCE_TYPE_DRIVER		(RESOURCE_TYPE_BASE + 64)
EXPORT_TYPE_END(RESOURCE_TYPE)

//
// Node List Types
//
#define NL_TYPE_HIDDEN				0xFF
#define NL_TYPE_PROCESS				0xFE

#define NL_TYPE_WINDOW_UNK			0x00
#define NL_TYPE_WINDOW_CLS			0x01
#define NL_TYPE_WINDOW_OBJ			0x02
#define NL_TYPE_WINDOW_MENU			0x03
#define NL_TYPE_WINDOW_CTL			0x04
#define NL_TYPE_WINDOW_RECT			0x05
#define NL_TYPE_WINDOW_FONT			0x06
#define NL_TYPE_WINDOW_BRUSH		0x07
#define NL_TYPE_WINDOW_ICON			0x08
#define NL_TYPE_WINDOW_BITMAP		0x09
#define NL_TYPE_WINDOW_CURSOR	 	0x0A
#define NL_TYPE_WINDOW_SHARED_MEM	0x0B
#define NL_TYPE_WINDOW_CLIPBOARD	0x0C
#define NL_TYPE_WINDOW_CLIPSCRAP	0x0D
#define NL_TYPE_WINDOW_MENU_ACCEL  	0x0E
#define NL_TYPE_WINDOW_STRING_TBL  	0x0F

#define NL_TYPE_EVENT_IDLEPROC		0xF0
#define NL_TYPE_EVENT_HI_IDLEPROC	0xF1

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

typedef void (*FOREACHNODE)(LPVOID ctx,LPVOID pdata);
typedef BOOL (*FOREACHNODEUNTIL)(LPVOID ctx,LPVOID pdata);

typedef struct _fx_string
{
	UINT   size;
	int    pos;
	LPCHAR buffer;
}FXSTRING;
typedef FXSTRING FAR *PFXSTRING;

typedef struct _fx_ipc_port
{
	ULONG 		id;
	BYTE 		type;
	PFXSTRING	name;
	ULONG 		time;
	PFXQUEUE 	queue;
	BYTE		reserved_1;
}IPCPORT;
typedef IPCPORT FAR *PIPCPORT;

#define IPC_SYS_DEBUG			("@debug")
#define IPC_SYS_DEBUG_HD		("@debughd")
#define IPC_SYS_BROADCAST		("@broadcast")
#define IPC_SYS_KEYBOARD		("@keyboard")
#define IPC_SYS_MOUSE			("@mouse")
#define IPC_SYS_CLIPBOARD		("@clipboard")
#define IPC_SYS_ASYNCPROC		("@proc")




#define KEYBOARD_TIMEOUT (50)

#endif
