
# FXOSWinApp
FXOS SDK Desktop Application Example

**Under Construction**

There still exist some ragged edges and inter-dependencies that need to be addressed.  The SDK and application will evolve over time.

## Screenshot of application launched, with double-click, in the volume window

![Screenshot 2021-06-11 23-51-04](https://user-images.githubusercontent.com/37045780/121765397-2411e580-cb10-11eb-9da3-4fe2e01c73a3.png)


Below is the debug  output of the application running, the output match the debugging built into the application.

```
DebugOut("FXWinApp::FX_INIT_MESSAGE\r\n");
```

You can see that "FXWinApp::FX_INIT_MESSAGE" below.

```
k_exec_launchProcess:/
k_exec_createProcess::processProc:090000
k_exec_createProcess::k_exec_get_current_process:101448
Enter k_attach_process_events
eventProcedure:090000
        Process:1073B8
k_attach_process_events::@index:00003
k_getevents @1

FXWinApp::FX_INIT_MESSAGE

k_user_CreateWindowClass::already-registered:fxWinAppWindowClass

FXWinApp::CreateWindowClassEx

k_user_CreateWindow:Test Application
Process Id:0000040963
k_user_CreateWindow:k_add_child_window:z:0000000008
WinApp::FX_CREATE_WINDOW

FXWinApp::CreateWindow

k_attach_process_events::k_exec_set_current_process:000000
ProcessWindowEvent RECEIVED:FX_FOCUS_WINDOW
*** ProcessWindowEvent::FX_FOCUS_LOST:105FE8
DefWndProc::defPrcData[create]:pMsg->hwnd:1075A8
DefWindowProc::FX_FOCUS_WINDOW:Test Application
DefWindowProc::FX_FOCUS_WINDOW:k_nodelist_remove_obj:NO CURRENT NODE
DefWindowProc::FX_FOCUS_WINDOW:CLICK Z:0000000009
DefWindowProc::FX_FOCUS_LOST:FX DISK1
DefWindowProc::FX_DRAW_NONCLIENT

WinApp::FX_DRAW_WINDOW

```

## Build

```
G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP>fxapp
WDC 65816 C   Version 3.49  Jan 19 2006 14:38:08
      Copyright (C) 1992-2006 by The Western Design Center, Inc.
WDC 65C816 Assembler  Version 3.49.1 Feb  6 2006 17:24:51
       Copyright (C) 1992-2006 by The Western Design Center, Inc.
allocated 1712 bytes of memory.
WDC 65C816 Linker Version 3.49.1 Apr 24 2006 15:40:38
   Copyright (C) 1992-2006 The Western Design Center, Inc.

Section: ORG:    ROM ORG:  SIZE:
CODE     090000  090000      614H (  1556)
DATA     090614  090614       DDH (   221)
Total                        6F1H (  1777)

Section CODE:
        00090000 _BEG_CODE
        00090000 ~~FXWinMain
        00090102 ~~WinAppWindowProc
        0009018f ~~DebugOut
        000901c3 ~~DebugInteger
        000901fc ~~DebugLong
        00090235 ~~GetCurrentProcess
        0009026a ~~TerminateProcess
        000902ae ~~HeapAlloc
        000902ed ~~HeapDealloc
        00090324 ~~GetDateHour
        00090351 ~~GetDateMinute
        0009037e ~~GetDateSecond
        000903ab ~~GetDateMonth
        000903d8 ~~GetDateDay
        00090405 ~~GetDateYear
        00090432 ~~GetDateCentury
        0009045f ~~CreateWindowClassEx
        000904b8 ~~CreateWindow
        00090515 ~~CreateWindowEx
        00090572 ~~GetDesktopWindow
        000905a7 ~~DefaultWindowProc
        000905eb ~~~lcal
        000905f3 ~~~swt
        00090614 _END_CODE

Section DATA:
        00090614 _BEG_DATA
        00090614 ~~hWndInstance
        000906f1 _END_DATA
```
