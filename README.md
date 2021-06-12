
# FXOSWinApp
FXOS SDK Desktop Application Example

**Under Construction**


## Screenshot of application launched, with double-click, in the volume window

![Screenshot 2021-06-11 23-51-04](https://user-images.githubusercontent.com/37045780/121765397-2411e580-cb10-11eb-9da3-4fe2e01c73a3.png)


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
