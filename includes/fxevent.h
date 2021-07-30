
#ifndef __FX_EVENT_MANAGER
#define __FX_EVENT_MANAGER

#include "fxtypes.h"

typedef struct _fx_main_loopvars
{
	int dummy;
}MAINLOOPARGS;

#define FX_MSG_DEFAULT			(-1)
#define FX_MSGATTR_FAST			(2)

#define FX_COM1_DATA			(0xFC00)
#define FX_COM2_DATA			(0xFC01)

#define FX_DRAW_WINDOW			(0xFB00)
#define FX_DRAW_NONCLIENT		(0xFB01)
#define FX_DRAW_CLIENT			(0xFB02)
#define FX_DRAW_GADGET			(0xFB03)
#define FX_DRAW_BACKGROUND		(0xFB04)
#define FX_SHOW_WINDOW			(0xFB05)
#define FX_HIDE_WINDOW			(0xFB06)
#define FX_REDRAW_WINDOW		(0xFB07)
#define FX_MOVE_WINDOW			(0xFB08)
#define FX_MIN_WINDOW			(0xFB09)
#define FX_MAX_WINDOW			(0xFB0A)

#define FX_RESIZE_WINDOW_START	(0xFB0B)
#define FX_RESIZE_WINDOW_END	(0xFB0C)
#define FX_DRAG_WINDOW_START	(0xFB0D)
#define FX_DRAG_WINDOW_END		(0xFB0E)
#define FX_RESIZE_WINDOW		(0xFB0F)
#define FX_DRAG_WINDOW			(0xFB10)


#define FX_WINDOW_CLOSE			(0xFBFF)

#define FX_PROCESS				(0xFF00)
#define FX_INIT_MESSAGE			(0xFF01)
#define FX_UNINIT_MESSAGE		(0xFF02)

#define FX_CREATE_WINDOW		(0xFF03)

#define FX_MOUSE_HIDE			(0x0F00)
#define FX_MOUSE_ENTER			(0x0F01)
#define FX_MOUSE_EXIT			(0x0F02)
#define FX_MOUSE_MOVE			(0x0F03)

#define FX_LBUTTON_DOWN			(0x0F04)
#define FX_LBUTTON_DRAG			(0x0F05)
#define FX_LBUTTON_UP			(0x0F06)
#define FX_LBUTTON_DBLCLICK	    (0x0F07)

#define FX_RBUTTON_DOWN			(0x0F08)
#define FX_RBUTTON_DRAG			(0x0F09)
#define FX_RBUTTON_UP			(0x0F0A)
#define FX_RBUTTON_DBLCLICK	    (0x0F0B)

#define FX_MBUTTON_DOWN			(0x0F0C)
#define FX_MBUTTON_DRAG			(0x0F0D)
#define FX_MBUTTON_UP			(0x0F0E)
#define FX_MBUTTON_DBLCLICK	    (0x0F0F)

#define FX_NC_MOUSE_HIDE		(0x8F00)
#define FX_NC_MOUSE_ENTER		(0x8F01)
#define FX_NC_MOUSE_EXIT		(0x8F02)
#define FX_NC_MOUSE_MOVE		(0x8F03)

#define FX_NC_LBUTTON_DOWN		(0x8F04)
#define FX_NC_LBUTTON_DRAG		(0x8F05)
#define FX_NC_LBUTTON_UP		(0x8F06)
#define FX_NC_LBUTTON_DBLCLICK 	(0x8F07)

#define FX_NC_RBUTTON_DOWN		(0x8F08)
#define FX_NC_RBUTTON_DRAG		(0x8F09)
#define FX_NC_RBUTTON_UP		(0x8F0A)
#define FX_NC_RBUTTON_DBLCLICK	(0x8F0B)

#define FX_NC_MBUTTON_DOWN		(0x8F0C)
#define FX_NC_MBUTTON_DRAG		(0x8F0D)
#define FX_NC_MBUTTON_UP		(0x8F0E)
#define FX_NC_MBUTTON_DBLCLICK	(0x8F0F)

#define FX_NC_FOCUS_LOST		(0x8F14)


#define FX_KEY_DOWN				(0x0F10)
#define FX_CHAR					(0x0F11)
#define FX_KEY_UP				(0x0F12)
#define FX_FOCUS_WINDOW			(0x0F13)
#define FX_FOCUS_LOST			(0x0F14)
#define FX_KEY_SCANCODE			(0x0F15)


#define FX_DISK_INSERT			(0x0F20)
#define FX_DISK_CHANGE			(0x0F21)
#define FX_DISK_REMOVE			(0x0F22)

#define FX_WINDOW_TOFRONT		(0x0F30)
#define FX_WINDOW_TOBACK		(0x0F31)

#define FX_TIMER				(0xF001)

#define FX_MENU_SELECT	  		(0xF100)
#define FX_MENU_SHOW	  		(0xF101)
#define FX_MENU_HIDE	  		(0xF102)


#define MSG_GETMOUSE_X(a)		(*(((INT*)&a->data[1])))
#define MSG_GETMOUSE_Y(a)		(*(((INT*)&a->data[3])))

#define MSG_GETCLIENTMOUSE_X(a)	(MSG_GETMOUSE_X(a) - ((PWINDOW)a)->clientRect.x)
#define MSG_GETCLIENTMOUSE_Y(a)	(MSG_GETMOUSE_Y(a) - ((PWINDOW)a)->clientRect.y)


#define MSGCMDID(a)             ((PFXCMDMESSAGE)(a))->cmdCId
#define MSGCMDPARM1(a)          ((PFXCMDMESSAGE)(a))->parameter1
#define MSGCMDPARM2(a)          ((PFXCMDMESSAGE)(a))->parameter2
#define MSGCMDPARM3(a)          ((PFXCMDMESSAGE)(a))->parameter3

#define FX_CONTROL_COMMAND		(0xFA00)
#define CTL_CMD_CAPTION			(0x0001)
#define CTL_CMD_FGCOLOR			(0x0002)
#define CTL_CMD_BGCOLOR			(0x0003)

#define FX_MENU_COMMAND			(0xFA01)
#define CTL_MENU_SELECTED		(0x0001)
#define CTL_BUTTON_SELECTED		(0x0002)
#define CTL_MENU_CHECKED		(0x0003)
#define CTL_MENU_CLOSE			(0x0004)
#define CTL_MENU_HIGHLIGHT		(0x0005)
#define CTL_MENU_UNHIGHLIGHT	(0x0006)

#define FX_SCROLLBAR_COMMAND	(0xFA02)
#define CTL_VERT_SCROLL			(0x0001)
#define CTL_HORZ_SCROLL			(0x0002)
#define CTL_SB_ADD_ITEM			(0x0003)
#define CTL_SB_ADD_ITEMS		(0x0004)
#define CTL_SB_REMOVE_ITEM		(0x0005)
#define CTL_SB_CLEAR_ITEMS		(0x0006)
#define CTL_SB_SET_MIN			(0x0007)
#define CTL_SB_SET_MAX			(0x0008)
#define CTL_SB_SET_INCREMENT	(0x0009)

#define FX_LISTBOX_COMMAND		(0xFA03)



#define FX_APP_MESSAGE			(0xFFF0)
#define FX_PROCESS_TIMER		(0xFFF1)
#define FX_PROCESS_FLOPPY		(0xFFF2)
#define FX_PROCESS_SDCARD		(0xFFF3)
#define FX_PROCESS_LPT0			(0xFFF4)
#define FX_PROCESS_RTC			(0xFFF5)
#define FX_PROCESS_OPL2R		(0xFFF6)
#define FX_PROCESS_OPL2L		(0xFFF7)
#define FX_PROCESS_VDMA			(0xFFF8)
#define FX_PROCESS_SDMA			(0xFFF9)
//#define FX_PROCESS_EXCEPTION	(0xFFFA)


#define ISPROCESSMSG(a)			(a & 0xF000)

#define BROADCAST_HWND			((LPVOID)0xFFFAFFFA)

typedef enum irq_event
{
	IRQE_UNKNOWN  	= 0,
	IRQE_KEYBOARD 	= 1,
	IRQE_MOUSE 	  	= 2,
	IRQE_COM1	  	= 3,
	IRQE_COM2	  	= 4,
	IRQE_SOL_TIMER	= 5,
	IRQE_FLOPPY   	= 6,
	IRQE_SDCARD   	= 7,
	IRQE_SDCARD_INS = 8,
	IRQE_CTLR_RESET = 9,
	IRQE_LPT_PORT0  = 10,
	IRQE_RTC 		= 11,
	IRQE_OPL2R		= 12,
	IRQE_OPL2L      = 13,
	IRQE_VDMA		= 14,
	IRQE_SDMA		= 15,
	IRQE_HDDRIVE	= 16,
	IRQE_KEYBOARD_RAW=17,
	IRQE_EXCEPTION	= 64,
}MSGIRQ;


#define MOUSEDATA_BUTTON_DOWN (0x01)
#define MOUSEDATA_BUTTON_UP   (0x00)

typedef struct _fxMouseMessageData
{
   unsigned char button1;
   unsigned char button2;
   unsigned char button3;
   unsigned char button4;
   unsigned int x;
   unsigned int y;
}MOUSEMSGDATA;
typedef MOUSEMSGDATA FAR *PMOUSEMSGDATA;

//static UCHAR _eventQueueIndex = 0;
//static PFXOSMESSAGE _k_eventQueue[255];

typedef void (*FXEventProc)(PFXOSMESSAGE pmsg);
#define FX_IDLEPROC_REG      		(0x01)
#define FX_IDLEPROC_UNREG	 		(0x02)
#define FX_IDLEPROC_PROCESS	 		(0x04)
typedef void (*FXIDLEPROCESS)(UINT );

typedef union marshalled_data
{
	BYTE	byteValue;
	BYTE 	verbValue[2];
	UINT  	intValue;
	ULONG 	longValue;
	LPVOID 	pointerValue;
}
MARSHALDATA;
typedef MARSHALDATA FAR *PMARSHALDATA;

typedef struct _fx_eventProcess
{
	PFXPROCESS  process;
	FXEventProc eventProc;
}FXEVENTPROCESS;
typedef FXEVENTPROCESS FAR *PFXEVENTPROCESS;

typedef struct _mouse_msg_state
{
	ULONG lastEvent;
	BOOL  buttonLeftDown;
	ULONG lastLeftDown;
	BOOL  buttonRightDown;
	ULONG lastRightDown;
	BOOL  buttonMiddleDown;
	ULONG lastMiddleDown;
	UINT  lastX;
	UINT  lastY;
}MOUSE_MSG_STATE;
typedef MOUSE_MSG_STATE FAR *PMOUSE_MSG_STATE;

#define EV_QUERY_VERSION_MAJOR			(0)
#define EV_QUERY_VERSION_MINOR			(1)
#define EV_QUERY_VERSION_RELEASE		(2)

typedef LPVOID (*EV_INIT)(VOID);
typedef VOID   (*EV_UNINIT)(VOID);
typedef UINT   (*EV_CONFIGURE)(UINT,LPVOID);
typedef UINT   (*EV_QUERY_METRIC)(UINT);
typedef UINT   (*EV_RUN)(LPVOID);

typedef struct _fxos_eventmanager_vtable
{
	PFXQUEUE		EventQueue;
	EV_INIT         Init;
	EV_RUN			Run;
	EV_CONFIGURE    Configure;
	EV_QUERY_METRIC Query;
	EV_UNINIT       Uninit;
}
EVENTMANAGER;
typedef EVENTMANAGER FAR *PEVENTMANAGER;




typedef struct _k_clipboard_data
{
	BYTE 	type;
	CHAR	readable[16];
	LPVOID  data;
}
CLIPBOARD_DATA;
typedef CLIPBOARD_DATA FAR *PCLIPBOARD_DATA;
typedef PCLIPBOARD_DATA HCLIP;


#endif
