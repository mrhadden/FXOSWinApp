;:ts=8
R0	equ	1
R1	equ	5
R2	equ	9
R3	equ	13
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxwinapp.c",0
;
;
;#include "fxwinapp.h"
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxwinapp.h",0
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxtypes.h",0
	.stag	_fx_bytebits,8,1
	.member	b7,0,14,17,1
	.member	b6,1,14,17,1
	.member	b5,2,14,17,1
	.member	b4,3,14,17,1
	.member	b3,4,14,17,1
	.member	b2,5,14,17,1
	.member	b1,6,14,17,1
	.member	b0,7,14,17,1
	.eos
	.stag	_fx_node,384,2
	.member	type,0,14,8,8
	.member	Reserved0,8,14,8,8
	.member	data,16,129,8,32
	.member	last,48,138,8,32,2
	.member	next,80,138,8,32,2
	.member	name,112,110,8,0,32
	.member	Reserved1,368,16,8,16
	.eos
	.stag	_fx_nodelist,96,3
	.member	listhead,0,138,8,32,2
	.member	listData,32,129,8,32
	.member	deallocator,64,641,8,32
	.eos
	.stag	_fx_queue,80,4
	.member	count,0,5,8,16
	.member	front,16,138,8,32,2
	.member	rear,48,138,8,32,2
	.eos
	.stag	fake5_,32,5
	.member	subsystem,0,14,8,8
	.member	level,8,14,8,8
	.member	error,16,16,8,16
	.eos
	.stag	_fx_process_signal,16,6
	.member	cbSize,0,16,8,16
	.eos
	.stag	_fx_semaphore,16,7
	.member	reserved,0,5,8,16
	.eos
	.stag	_fx_fileBlock,552,8
	.member	openCount,0,16,8,16
	.member	lockCount,16,16,8,16
	.member	dirty,32,14,8,8
	.member	fileBuffer,40,110,8,0,64
	.eos
	.stag	_fx_irq_data,48,9
	.member	line,0,5,8,16
	.member	keycode,16,142,8,32
	.eos
	.stag	_task,48,10
	.member	SPL,0,14,8,8
	.member	SPH,8,14,8,8
	.member	pstack,16,142,8,32
	.eos
	.stag	_task_stack,32,11
	.member	SS,0,142,8,32
	.eos
	.stag	int_regs,104,12
	.member	PB,0,14,8,8
	.member	PH,8,14,8,8
	.member	PL,16,14,8,8
	.member	PP,24,14,8,8
	.member	DB,32,14,8,8
	.member	DH,40,14,8,8
	.member	DL,48,14,8,8
	.member	AH,56,14,8,8
	.member	AL,64,14,8,8
	.member	XH,72,14,8,8
	.member	XL,80,14,8,8
	.member	YH,88,14,8,8
	.member	YL,96,14,8,8
	.eos
	.stag	_fx_eventMessage,304,13
	.member	src,0,18,8,32
	.member	dest,32,18,8,32
	.member	type,64,16,8,16
	.member	hwnd,80,129,8,32
	.member	pheap,112,129,8,32
	.member	msgTime,144,18,8,32
	.member	data,176,110,8,0,16
	.eos
	.stag	_fx_cmdMessage,304,14
	.member	src,0,18,8,32
	.member	dest,32,18,8,32
	.member	type,64,16,8,16
	.member	hwnd,80,129,8,32
	.member	pheap,112,129,8,32
	.member	msgTime,144,18,8,32
	.member	cmdCId,176,16,8,16
	.member	cmdMId,192,16,8,16
	.member	parameter1,208,18,8,32
	.member	parameter2,240,18,8,32
	.member	parameter3,272,18,8,32
	.eos
	.stag	_fx_console_ctl,448,15
	.member	maxCols,0,5,8,16
	.member	maxRows,16,5,8,16
	.member	curX,32,5,8,16
	.member	curY,48,5,8,16
	.member	fgColor,64,5,8,16
	.member	bgColor,80,5,8,16
	.member	mode,96,14,8,8
	.member	kbBuffer,104,101,8,0,16
	.member	screenBuffer,360,142,8,32
	.member	desktopMode,392,14,8,8
	.member	lastMouseButton,400,5,8,16
	.member	lastMouseX,416,5,8,16
	.member	lastMouseY,432,5,8,16
	.eos
	.stag	_fx_desktop_ctl,392,16
	.member	desktopMode,0,14,8,8
	.member	cursorCtl,8,5,8,16
	.member	cursorState,24,5,8,16
	.member	backgroundColor,40,5,8,16
	.member	foregroundColor,56,5,8,16
	.member	menuMode,72,5,8,16
	.member	lastMouseButton,88,5,8,16
	.member	lastMouseX,104,5,8,16
	.member	lastMouseY,120,5,8,16
	.member	currentDiskName,136,142,8,32
	.member	diskNodes,168,129,8,32
	.member	titleNodes,200,129,8,32
	.member	menuNodes,232,129,8,32
	.member	iconNodes,264,129,8,32
	.member	windowNodes,296,129,8,32
	.member	fontNodes,328,129,8,32
	.member	wndProc,360,138,8,32,3
	.eos
	.stag	_fx_process,800,17
	.member	cbSize,0,5,8,16
	.member	procId,16,18,8,32
	.member	parentId,48,18,8,32
	.member	ctx,80,129,8,32
	.member	userId,112,16,8,16
	.member	status,128,16,8,16
	.member	foregroundActive,144,14,8,8
	.member	tls,152,1121,8,32,8
	.member	commandLine,408,142,8,32
	.member	semaphores,440,138,8,32,3
	.member	fileHandles,472,138,8,32,3
	.member	pathList,504,138,8,32,3
	.member	resources,536,138,8,32,3
	.member	timerAware,568,14,8,8
	.member	timerTicks,576,112,8,0,2
	.member	timerTickCount,608,112,8,0,2
	.member	kernelError,640,10,8,32,5
	.member	consoleCtl,672,138,8,32,15
	.member	desktopCtl,704,138,8,32,16
	.member	execProc,736,641,8,32
	.member	startupArgs,768,129,8,32
	.eos
	.stag	_fxProcessMessage,112,18
	.member	src,0,18,8,32
	.member	dest,32,18,8,32
	.member	type,64,16,8,16
	.member	processInfo,80,138,8,32,17
	.eos
	.stag	_fx_property,384,19
	.member	name,0,110,8,0,16
	.member	value,128,110,8,0,32
	.eos
	.utag	_24bitPointer,32,20
	.member	address,0,142,11,32
	.member	bytes,0,110,11,0,4
	.eos
	.stag	_PointStruct,32,21
	.member	x,0,5,8,16
	.member	y,16,5,8,16
	.eos
	.stag	_RectStruct,112,22
	.member	x,0,5,8,16
	.member	y,16,5,8,16
	.member	z,32,18,8,32
	.member	width,64,5,8,16
	.member	height,80,5,8,16
	.member	attr,96,5,8,16
	.eos
	.stag	fake23_,96,23
	.member	name,0,142,8,32
	.member	topLeft,32,10,8,32,21
	.member	bottomRight,64,10,8,32,21
	.eos
	.stag	fake24_,112,24
	.member	x,0,5,8,16
	.member	y,16,5,8,16
	.member	z,32,5,8,16
	.member	width,48,5,8,16
	.member	height,64,5,8,16
	.member	data,80,18,8,32
	.eos
	.stag	_k_WindowClass,272,25
	.member	cbSize,0,16,8,16
	.member	style,16,16,8,16
	.member	styleEx,32,16,8,16
	.member	pWndProc,48,654,8,32
	.member	hInstance,80,129,8,32
	.member	hIcon,112,129,8,32
	.member	hCursor,144,129,8,32
	.member	hbrBackground,176,129,8,32
	.member	lpszMenuName,208,142,8,32
	.member	lpszClassName,240,142,8,32
	.eos
	.stag	_ClickableRect,152,26
	.member	area,0,10,8,112,22
	.member	z,112,18,8,32
	.member	enabled,144,14,8,8
	.eos
	.stag	_NCClickableRect,136,27
	.member	area,0,10,8,112,22
	.member	msgType,112,16,8,16
	.member	enabled,128,14,8,8
	.eos
	.stag	_DragData,216,28
	.member	area,0,10,8,112,22
	.member	xoffset,112,5,8,16
	.member	yoffset,128,5,8,16
	.member	msgType,144,16,8,16
	.member	ncAction,160,16,8,16
	.member	isDrag,176,14,8,8
	.member	isResize,184,14,8,8
	.member	canDrag,192,14,8,8
	.member	canDrop,200,14,8,8
	.member	didDrag,208,14,8,8
	.eos
	.stag	_k_WindowStruct,3904,29
	.member	cbSize,0,16,8,16
	.member	style,16,18,8,32
	.member	styleEx,48,18,8,32
	.member	win_id,80,5,8,16
	.member	win_x,96,5,8,16
	.member	win_y,112,5,8,16
	.member	win_width,128,5,8,16
	.member	win_height,144,5,8,16
	.member	win_xoffset,160,5,8,16
	.member	win_yoffset,176,5,8,16
	.member	win_cxoffset,192,5,8,16
	.member	win_cyoffset,208,5,8,16
	.member	wndRect,224,10,8,112,22
	.member	clientRect,336,10,8,112,22
	.member	nonclientGadgets,448,106,8,0,27,16
	.member	clickable,2624,129,8,32
	.member	win_title,2656,110,8,0,32
	.member	Reserved0,2912,16,8,16
	.member	win_class,2928,110,8,0,16
	.member	win_class_name,3056,110,8,0,32
	.member	nBitmapLayer,3312,16,8,16
	.member	bgRegion,3328,129,8,32
	.member	procid,3360,18,8,32
	.member	pWndClass,3392,138,8,32,25
	.member	pParentWindow,3424,129,8,32
	.member	hMenu,3456,129,8,32
	.member	hPointer,3488,129,8,32
	.member	hBackground,3520,129,8,32
	.member	pChildWindows,3552,138,8,32,3
	.member	pChildHitList,3584,138,8,32,3
	.member	isVisible,3616,14,8,8
	.member	windowData,3624,129,8,32
	.member	clientData,3656,1121,8,32,6
	.member	isClosed,3848,14,8,8
	.member	isClosing,3856,14,8,8
	.member	isDesktop,3864,14,8,8
	.member	clickableNode,3872,138,8,32,2
	.eos
	.stag	_k_WindowStructEx,3880,30
	.member	cbSize,0,16,8,16
	.member	style,16,18,8,32
	.member	styleEx,48,18,8,32
	.member	win_id,80,5,8,16
	.member	win_x,96,5,8,16
	.member	win_y,112,5,8,16
	.member	win_width,128,5,8,16
	.member	win_height,144,5,8,16
	.member	win_xoffset,160,5,8,16
	.member	win_yoffset,176,5,8,16
	.member	win_cxoffset,192,5,8,16
	.member	win_cyoffset,208,5,8,16
	.member	wndRect,224,10,8,112,22
	.member	clientRect,336,10,8,112,22
	.member	nonclientGadgets,448,106,8,0,27,16
	.member	clickable,2624,129,8,32
	.member	win_title,2656,110,8,0,32
	.member	Reserved0,2912,16,8,16
	.member	win_class,2928,110,8,0,16
	.member	nBitmapLayer,3056,16,8,16
	.member	procid,3072,18,8,32
	.member	pWndClass,3104,138,8,32,25
	.member	pParentWindow,3136,129,8,32
	.member	hMenu,3168,129,8,32
	.member	hPointer,3200,129,8,32
	.member	hBackground,3232,129,8,32
	.member	pChildWindows,3264,138,8,32,3
	.member	pChildHitList,3296,138,8,32,3
	.member	isVisible,3328,14,8,8
	.member	windowData,3336,129,8,32
	.member	clientData,3368,1121,8,32,4
	.member	isClosed,3496,14,8,8
	.member	hWnd,3504,129,8,32
	.member	localRect,3536,10,8,112,22
	.member	globalRect,3648,10,8,112,22
	.member	clientOffsetRect,3760,10,8,112,22
	.member	isDesktop,3872,14,8,8
	.eos
	.stag	_FontMetric,32,31
	.member	width,0,5,8,16
	.member	height,16,5,8,16
	.eos
	.stag	_MenuStruct,280,32
	.member	cx,0,5,8,16
	.member	cy,16,5,8,16
	.member	width,32,5,8,16
	.member	height,48,5,8,16
	.member	fcolor,64,14,8,8
	.member	bcolor,72,14,8,8
	.member	chromeLeft,80,14,8,8
	.member	chromeRight1,88,14,8,8
	.member	chromeRight2,96,14,8,8
	.member	hFont,104,129,8,32
	.member	itemId,136,16,8,16
	.member	pCaption,152,142,8,32
	.member	subMenus,184,138,8,32,3
	.member	pBackground,216,129,8,32
	.member	hWndOwner,248,129,8,32
	.eos
	.stag	fake33_,160,33
	.member	menuId,0,16,8,16
	.member	caption,16,142,8,32
	.member	rect,48,10,8,112,22
	.eos
	.stag	fake34_,5152,34
	.member	pParent,0,138,8,32,29
	.member	rect,32,10,8,112,22
	.member	captions,144,1134,8,32,24
	.member	chrome,912,110,8,0,24
	.member	ids,1104,112,8,0,24
	.member	clickable,1488,106,8,0,26,24
	.member	selected,5136,16,8,16
	.eos
	.stag	_fx_button_t,96,35
	.member	pCaption,0,142,8,32
	.member	cCaption,32,16,8,16
	.member	data,48,129,8,32
	.member	captionPixelWidth,80,16,8,16
	.eos
	.stag	_fx_scrollbar_t,240,36
	.member	min,0,16,8,16
	.member	max,16,16,8,16
	.member	increment,32,16,8,16
	.member	stopsize,48,16,8,16
	.member	location,64,5,8,16
	.member	state,80,5,8,16
	.member	rectThumb,96,10,8,112,22
	.member	data,208,129,8,32
	.eos
	.stag	_fx_listbox_t,240,37
	.member	pos,0,5,8,16
	.member	selected,16,16,8,16
	.member	offsetX,32,5,8,16
	.member	offsetY,48,5,8,16
	.member	inc,64,5,8,16
	.member	direction,80,5,8,16
	.member	top,96,5,8,16
	.member	bottom,112,5,8,16
	.member	indexTop,128,5,8,16
	.member	indexBottom,144,5,8,16
	.member	maxItems,160,16,8,16
	.member	fontSet,176,142,8,32
	.member	data,208,129,8,32
	.eos
	.stag	_fx_textbox_t,144,38
	.member	pos,0,5,8,16
	.member	selected,16,16,8,16
	.member	offsetX,32,5,8,16
	.member	offsetY,48,5,8,16
	.member	isShifted,64,14,8,8
	.member	cursorState,72,14,8,8
	.member	fontSet,80,142,8,32
	.member	data,112,129,8,32
	.eos
	.stag	_fx_msgbox_t,144,39
	.member	pos,0,5,8,16
	.member	selected,16,16,8,16
	.member	offsetX,32,5,8,16
	.member	offsetY,48,5,8,16
	.member	isShifted,64,14,8,8
	.member	cursorState,72,14,8,8
	.member	fontSet,80,142,8,32
	.member	data,112,129,8,32
	.eos
	.stag	_fx_menuAnchor_t,272,40
	.member	pCaption,0,142,8,32
	.member	renderLayoutX,32,16,8,16
	.member	renderLayoutY,48,16,8,16
	.member	captionPixelWidth,64,16,8,16
	.member	data,80,129,8,32
	.member	droppedWindow,112,138,8,32,29
	.member	bytes,144,110,8,0,16
	.eos
	.stag	_SubMenuStruct,64,41
	.member	caption,0,142,8,32
	.member	action,32,641,8,32
	.eos
	.stag	_SubMenuListStruct,40,42
	.member	cMenus,0,14,8,8
	.member	psubmenus,8,9354,8,32,41
	.eos
	.stag	_fx_ComBuffer,2080,43
	.member	cbSize,0,16,8,16
	.member	cbBuffer,16,16,8,16
	.member	buffer,32,110,8,0,256
	.eos
	.line	793
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxwinapp.h",11
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxos.h",0
	.file	"G:\devtools\WDCTools\wdc\Tools\include\stdlib.h",0
	.file	"G:\devtools\WDCTools\wdc\Tools\include\stddef.h",0
	.line	88
	.file	"G:\devtools\WDCTools\wdc\Tools\include\stdlib.h",43
	.stag	fake44_,32,44
	.member	quot,0,5,8,16
	.member	rem,16,5,8,16
	.eos
	.stag	fake45_,64,45
	.member	quot,0,7,8,32
	.member	rem,32,7,8,32
	.eos
	.stag	int_sqrt,32,46
	.member	sqrt,0,16,8,16
	.member	frac,16,16,8,16
	.eos
	.line	205
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxos.h",4
	.file	"G:\devtools\WDCTools\wdc\Tools\include\string.h",0
	.line	134
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxos.h",5
	.file	"G:\devtools\WDCTools\wdc\Tools\include\ctype.h",0
	.line	103
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxos.h",6
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxtypes.h",0
	.line	793
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxos.h",8
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxc256fmx.h",0
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxtypes.h",0
	.line	793
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxc256fmx.h",5
	.line	1339
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxos.h",12
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxkernel.h",0
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxos.h",0
	.line	27
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxkernel.h",5
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxnode.h",0
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxtypes.h",0
	.line	793
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxnode.h",11
	.line	21
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxkernel.h",6
	.stag	_fx_api_call_table,4096,47
	.member	call_table,0,1121,8,32,128
	.eos
	.stag	_fx_zero_page,768,48
	.member	fxos_mouse_byte_0,0,14,8,8
	.member	fxos_mouse_byte_1,8,14,8,8
	.member	fxos_mouse_byte_2,16,14,8,8
	.member	fxos_mouse_byte_t,24,14,8,8
	.member	fxos_mouse_byte_x_l,32,14,8,8
	.member	fxos_mouse_byte_x_h,40,14,8,8
	.member	fxos_mouse_byte_y_l,48,14,8,8
	.member	fxos_mouse_byte_y_h,56,14,8,8
	.member	fxos_key_byte_0,64,14,8,8
	.member	fxos_key_byte_1,72,14,8,8
	.member	fxos_key_byte_2,80,14,8,8
	.member	fxos_mouse_ctl,88,14,8,8
	.member	fxos_mouse_index,96,14,8,8
	.member	fxos_mouse_status,104,14,8,8
	.member	VersionMajor,112,16,8,16
	.member	VersionMinor,128,16,8,16
	.member	VersionRelease,144,16,8,16
	.member	topMemory,160,18,8,32
	.member	bottomMemory,192,18,8,32
	.member	availableMemory,224,18,8,32
	.member	availableMemoryK,256,18,8,32
	.member	availableHeapMemory,288,18,8,32
	.member	availableHeapMemoryK,320,18,8,32
	.member	fxos_console_row,352,16,8,16
	.member	fxos_console_col,368,16,8,16
	.member	reserved_1,384,16,8,16
	.member	reserved_2,400,16,8,16
	.member	executive,416,129,8,32
	.member	eventmanager,448,129,8,32
	.member	devicemanager,480,129,8,32
	.member	windowmanager,512,129,8,32
	.member	fxos_kernel_api,544,138,8,32,47
	.member	fxos_dos_api,576,138,8,32,47
	.member	fxos_gfx_api,608,138,8,32,47
	.member	fxos_gui_api,640,138,8,32,47
	.member	fxos_reserved_1_api,672,138,8,32,47
	.member	fxos_reserved_2_api,704,138,8,32,47
	.member	fxos_reserved_3_api,736,138,8,32,47
	.eos
	.stag	_fx_environment,96,49
	.member	variables,0,142,8,32
	.member	reserved1,32,5,8,16
	.member	reserved2,48,5,8,16
	.member	reserved3,64,5,8,16
	.member	reserved4,80,5,8,16
	.eos
	.stag	_debug_byte_bits,8,50
	.member	bit7,0,14,17,1
	.member	bit6,1,14,17,1
	.member	bit5,2,14,17,1
	.member	bit4,3,14,17,1
	.member	bit3,4,14,17,1
	.member	bit2,5,14,17,1
	.member	bit1,6,14,17,1
	.member	bit0,7,14,17,1
	.eos
	.stag	_fx_device_driver,1416,51
	.member	name,0,110,8,0,64
	.member	version,512,110,8,0,64
	.member	hmajor,1024,110,8,0,16
	.member	hminor,1152,110,8,0,16
	.member	type,1280,14,8,8
	.member	f_driver_load,1288,129,8,32
	.member	f_driver_read,1320,129,8,32
	.member	f_driver_write,1352,129,8,32
	.member	f_driver_unload,1384,129,8,32
	.eos
	.stag	_fx_block_device_driver,1448,52
	.member	name,0,110,8,0,64
	.member	version,512,110,8,0,64
	.member	hmajor,1024,110,8,0,16
	.member	hminor,1152,110,8,0,16
	.member	type,1280,14,8,8
	.member	f_driver_load,1288,129,8,32
	.member	f_driver_read,1320,129,8,32
	.member	f_driver_write,1352,129,8,32
	.member	f_driver_unload,1384,129,8,32
	.member	f_driver_command,1416,129,8,32
	.eos
	.line	233
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxos.h",21
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxeventmanager.h",0
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxos.h",0
	.line	27
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxeventmanager.h",5
	.stag	_fx_main_loopvars,16,53
	.member	dummy,0,5,8,16
	.eos
	.stag	_fxMouseMessageData,64,54
	.member	button1,0,14,8,8
	.member	button2,8,14,8,8
	.member	button3,16,14,8,8
	.member	button4,24,14,8,8
	.member	x,32,16,8,16
	.member	y,48,16,8,16
	.eos
	.stag	_fx_eventProcess,64,55
	.member	process,0,138,8,32,17
	.member	eventProc,32,641,8,32
	.eos
	.stag	_mouse_msg_state,184,56
	.member	lastEvent,0,18,8,32
	.member	buttonLeftDown,32,14,8,8
	.member	lastLeftDown,40,18,8,32
	.member	buttonRightDown,72,14,8,8
	.member	lastRightDown,80,18,8,32
	.member	buttonMiddleDown,112,14,8,8
	.member	lastMiddleDown,120,18,8,32
	.member	lastX,152,16,8,16
	.member	lastY,168,16,8,16
	.eos
	.stag	_fxos_eventmanager_vtable,192,57
	.member	EventQueue,0,138,8,32,4
	.member	Init,32,8833,8,32
	.member	Run,64,656,8,32
	.member	Configure,96,656,8,32
	.member	Query,128,656,8,32
	.member	Uninit,160,641,8,32
	.eos
	.line	259
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxos.h",22
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxwindowmanager.h",0
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxos.h",0
	.line	27
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxwindowmanager.h",5
	.stag	_fxos_winman_vtable,160,58
	.member	Events,0,641,8,32
	.member	ConfigureWindowManager,32,656,8,32
	.member	ProcessWindowEvent,64,8833,8,32
	.member	QueryWindowManager,96,656,8,32
	.member	DoWndProcs,128,641,8,32
	.eos
	.stag	_childMessage_t,64,59
	.member	msgType,0,16,8,16
	.member	msgData,16,129,8,32
	.member	dataSize,48,16,8,16
	.eos
	.line	287
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxos.h",23
	.line	27
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxwinapp.h",12
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxuser.h",0
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxtypes.h",0
	.line	793
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxuser.h",11
	.line	78
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxwinapp.h",13
	.line	17
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxwinapp.c",3
;
;//#pragma section CODE=WINAPP,offset $09:0000
;
;/////////////////////////////////////////////////////////////
;// OK because calculator is a single instance application
;/////////////////////////////////////////////////////////////
;static PWINDOW hWndInstance = NULL;
	data
~~hWndInstance:
	dl	$0
	ends
;//static PWINDOW hWndInstancePalette = NULL;
;//static PWINDOW pTextBox = NULL;
;
;BOOL WinAppWindowProc(PFXOSMESSAGE pMsg);
;
;//
;// App Entry
;//
;VOID FXWinMain(PFXOSMESSAGE pMsg)
;{
	.line	19
	.line	20
	code
	xdef	~~FXWinMain
	func
	.function	20
~~FXWinMain:
	longa	on
	longi	on
	tsc
	sec
	sbc	#L2
	tcs
	phd
	tcd
pMsg_0	set	4
	.block	20
;	PFXPROCESS proc;
;
;	if(pMsg!=NULL)
proc_1	set	0
	.sym	proc,0,138,1,32,17
	.sym	pMsg,4,138,6,32,13
	.line	23
;	{
	lda	<L2+pMsg_0
	ora	<L2+pMsg_0+2
	bne	L5
	brl	L10001
L5:
	.line	24
;		proc = GetCurrentProcess();
	.line	25
	jsl	~~GetCurrentProcess
	sta	<L3+proc_1
	stx	<L3+proc_1+2
;
;		switch(pMsg->type)
	.line	27
	ldy	#$8
	lda	[<L2+pMsg_0],Y
	brl	L10002
;		{
	.line	28
;		case FX_INIT_MESSAGE:
	.line	29
L10004:
;			if(proc!=NULL)
	.line	30
;			{
	lda	<L3+proc_1
	ora	<L3+proc_1+2
	bne	L6
	brl	L10005
L6:
	.line	31
;				DebugOut("FXWinApp::FX_INIT_MESSAGE\r\n");
	.line	32
	pea	#^L1
	pea	#<L1
	jsl	~~DebugOut
;				//DebugLong("FXWinApp::FX_INIT_MESSAGE::ProcessId:",(LONG)proc);
;
;				CreateWindowClassEx("fxWinAppWindowClass",NULL,0,FXWSX_ALWAYS_BACKPLANE,NULL,NULL,NULL,WinAppWindowProc);
	.line	35
	pea	#^~~WinAppWindowProc
	pea	#<~~WinAppWindowProc
	pea	#^$0
	pea	#<$0
	pea	#^$0
	pea	#<$0
	pea	#^$0
	pea	#<$0
	pea	#<$0
	pea	#<$0
	pea	#^$0
	pea	#<$0
	pea	#^L1+28
	pea	#<L1+28
	jsl	~~CreateWindowClassEx
;
;				DebugOut("FXWinApp::CreateWindowClassEx\r\n");
	.line	37
	pea	#^L1+48
	pea	#<L1+48
	jsl	~~DebugOut
;
;				hWndInstance = CreateWindow(FXWS_THICKFRAME | FXWS_CAPTION | FXWS_VISIBLE | FXWS_SYSMENU | FXWS_POPUP,
	.line	39
;											"fxWinAppWindowClass",
;											"Test Application",
;											100,100,
;											200,100,
;											GetDesktopWindow(),
;											NULL,NULL);
	pea	#^$0
	pea	#<$0
	pea	#^$0
	pea	#<$0
	jsl	~~GetDesktopWindow
	sta	<R0
	stx	<R0+2
	phx
	pha
	pea	#<$64
	pea	#<$c8
	pea	#<$64
	pea	#<$64
	pea	#^L1+100
	pea	#<L1+100
	pea	#^L1+80
	pea	#<L1+80
	pea	#^$22000d
	pea	#<$22000d
	jsl	~~CreateWindow
	sta	|~~hWndInstance
	stx	|~~hWndInstance+2
;
;				DebugOut("FXWinApp::CreateWindow\r\n");
	.line	47
	pea	#^L1+117
	pea	#<L1+117
	jsl	~~DebugOut
;
;				/*
;				if(hWndInstance == NULL)
;				{
;					CreateWindowClassEx("fxWinAppWindowClass",NULL,0,FXWSX_ALWAYS_BACKPLANE,NULL,NULL,NULL,WinAppWindowProc);
;
;					DebugOut("FXWinApp::CreateWindowClassEx\r\n");
;
;					hWndInstance = CreateWindow(FXWS_THICKFRAME | FXWS_CAPTION | FXWS_VISIBLE | FXWS_SYSMENU | FXWS_POPUP,
;												"fxWinAppWindowClass",
;												"Test Application",
;												100,100,
;												200,100,
;												GetDesktopWindow(),
;												NULL,NULL);
;
;					DebugOut("FXWinApp::CreateWindow\r\n");
;
;				}
;				else
;				{
;					//k_debug_long("FXPaletteAccessory::FX_INIT_MESSAGE::EXIT:",p->procId);
;					DebugOut("FXWinApp::FX_INIT_MESSAGE::DUPEXIT\r\n");
;					TerminateProcess(proc->procId);
;				}
;				*/
;			}
	.line	74
;			break;
L10005:
	.line	75
	brl	L10003
;		case FX_PROCESS:
	.line	76
L10006:
;			if(hWndInstance == NULL)
	.line	77
;			{
	lda	|~~hWndInstance
	ora	|~~hWndInstance+2
	beq	L7
	brl	L10007
L7:
	.line	78
;				//k_debug_long("FXPaletteAccessory::FX_PROCESS::EXIT:",p->procId);
;				DebugOut("FXWinApp::FX_PROCESS\r\n");
	.line	80
	pea	#^L1+142
	pea	#<L1+142
	jsl	~~DebugOut
;				TerminateProcess(proc->procId);
	.line	81
	ldy	#$4
	lda	[<L3+proc_1],Y
	pha
	ldy	#$2
	lda	[<L3+proc_1],Y
	pha
	jsl	~~TerminateProcess
;			}
	.line	82
;			break;
L10007:
	.line	83
	brl	L10003
;		default:
	.line	84
L10008:
;			break;
	.line	85
	brl	L10003
;		}
	.line	86
L10002:
	xref	~~~swt
	jsl	~~~swt
	dw	2
	dw	65280
	dw	L10006-1
	dw	65281
	dw	L10004-1
	dw	L10008-1
L10003:
;	}
	.line	87
;
;	return;
L10001:
	.line	89
L8:
	lda	<L2+2
	sta	<L2+2+4
	lda	<L2+1
	sta	<L2+1+4
	pld
	tsc
	clc
	adc	#L2+4
	tcs
	rtl
;}
	.line	90
	.endblock	90
L2	equ	8
L3	equ	5
	ends
	efunc
	.endfunc	90,5,8
	.line	90
	data
L1:
	db	$46,$58,$57,$69,$6E,$41,$70,$70,$3A,$3A,$46,$58,$5F,$49,$4E
	db	$49,$54,$5F,$4D,$45,$53,$53,$41,$47,$45,$0D,$0A,$00,$66,$78
	db	$57,$69,$6E,$41,$70,$70,$57,$69,$6E,$64,$6F,$77,$43,$6C,$61
	db	$73,$73,$00,$46,$58,$57,$69,$6E,$41,$70,$70,$3A,$3A,$43,$72
	db	$65,$61,$74,$65,$57,$69,$6E,$64,$6F,$77,$43,$6C,$61,$73,$73
	db	$45,$78,$0D,$0A,$00,$66,$78,$57,$69,$6E,$41,$70,$70,$57,$69
	db	$6E,$64,$6F,$77,$43,$6C,$61,$73,$73,$00,$54,$65,$73,$74,$20
	db	$41,$70,$70,$6C,$69,$63,$61,$74,$69,$6F,$6E,$00,$46,$58,$57
	db	$69,$6E,$41,$70,$70,$3A,$3A,$43,$72,$65,$61,$74,$65,$57,$69
	db	$6E,$64,$6F,$77,$0D,$0A,$00,$46,$58,$57,$69,$6E,$41,$70,$70
	db	$3A,$3A,$46,$58,$5F,$50,$52,$4F,$43,$45,$53,$53,$0D,$0A,$00
	ends
;
;
;BOOL WinAppWindowProc(PFXOSMESSAGE pMsg)
;{
	.line	93
	.line	94
	code
	xdef	~~WinAppWindowProc
	func
	.function	94
~~WinAppWindowProc:
	longa	on
	longi	on
	tsc
	sec
	sbc	#L10
	tcs
	phd
	tcd
pMsg_0	set	4
	.block	94
;	PFXPROCESS 	proc;
;	PWINDOW 	pWin = NULL;
;
;	if(pMsg!=NULL)
proc_1	set	0
pWin_1	set	4
	.sym	proc,0,138,1,32,17
	.sym	pWin,4,138,1,32,29
	.sym	pMsg,4,138,6,32,13
	stz	<L11+pWin_1
	stz	<L11+pWin_1+2
	.line	98
;	{
	lda	<L10+pMsg_0
	ora	<L10+pMsg_0+2
	bne	L13
	brl	L10009
L13:
	.line	99
;		proc = GetCurrentProcess();
	.line	100
	jsl	~~GetCurrentProcess
	sta	<L11+proc_1
	stx	<L11+proc_1+2
;
;		switch(pMsg->type)
	.line	102
	ldy	#$8
	lda	[<L10+pMsg_0],Y
	brl	L10010
;		{
	.line	103
;		case FX_CREATE_WINDOW:
	.line	104
L10012:
;			if(proc)
	.line	105
;			{
	lda	<L11+proc_1
	ora	<L11+proc_1+2
	bne	L14
	brl	L10013
L14:
	.line	106
;				DebugOut("WinApp::FX_CREATE_WINDOW\r\n");
	.line	107
	pea	#^L9
	pea	#<L9
	jsl	~~DebugOut
;			}
	.line	108
;			return TRUE;
L10013:
	.line	109
	lda	#$1
L15:
	tay
	lda	<L10+2
	sta	<L10+2+4
	lda	<L10+1
	sta	<L10+1+4
	pld
	tsc
	clc
	adc	#L10+4
	tcs
	tya
	rtl
;			break;
	.line	110
;		case FX_DRAW_WINDOW:
	.line	111
L10014:
;			DebugOut("WinApp::FX_DRAW_WINDOW\r\n");
	.line	112
	pea	#^L9+27
	pea	#<L9+27
	jsl	~~DebugOut
;			/*
;			pWin = k_getWindowFromHandle(pMsg->hwnd);
;			if(pWin)
;			{
;				k_vdma_fill_rect_ex(pWin->clientRect.x,
;									pWin->clientRect.y,
;									pWin->clientRect.width,
;									pWin->clientRect.height,
;									BRUSHCOLOR(pWin->hBackground),
;									pWin->nBitmapLayer);
;
;			}
;			*/
;			break;
	.line	126
	brl	L10011
;		case FX_LBUTTON_DOWN:
	.line	127
L10015:
;			/*
;			pWin = k_getWindowFromHandle(pMsg->hwnd);
;			if(pWin)
;			{
;			}
;			*/
;			return TRUE;
	.line	134
	lda	#$1
	brl	L15
;		default:
	.line	135
L10016:
;			break;
	.line	136
	brl	L10011
;		}
	.line	137
L10010:
	xref	~~~swt
	jsl	~~~swt
	dw	3
	dw	3844
	dw	L10015-1
	dw	64256
	dw	L10014-1
	dw	65283
	dw	L10012-1
	dw	L10016-1
L10011:
;	}
	.line	138
;
;	return DefaultWindowProc(pMsg);
L10009:
	.line	140
	pei	<L10+pMsg_0+2
	pei	<L10+pMsg_0
	jsl	~~DefaultWindowProc
	sep	#$20
	longa	off
	sta	<R0
	rep	#$20
	longa	on
	lda	<R0
	and	#$ff
	brl	L15
;}
	.line	141
	.endblock	141
L10	equ	12
L11	equ	5
	ends
	efunc
	.endfunc	141,5,12
	.line	141
	data
L9:
	db	$57,$69,$6E,$41,$70,$70,$3A,$3A,$46,$58,$5F,$43,$52,$45,$41
	db	$54,$45,$5F,$57,$49,$4E,$44,$4F,$57,$0D,$0A,$00,$57,$69,$6E
	db	$41,$70,$70,$3A,$3A,$46,$58,$5F,$44,$52,$41,$57,$5F,$57,$49
	db	$4E,$44,$4F,$57,$0D,$0A,$00
	ends
;
;
	.line	142
	.file	"G:\devprojects\c256Foenix\fxos\FXOSWorkspace\FXAPP\src\fxwinapp.c",93
	xref	~~DefaultWindowProc
	xref	~~GetDesktopWindow
	xref	~~CreateWindow
	xref	~~CreateWindowClassEx
	xref	~~GetCurrentProcess
	xref	~~TerminateProcess
	xref	~~DebugOut
	.sym	~~WinAppWindowProc,~~WinAppWindowProc,78,2,0
	.sym	~~hWndInstance,~~hWndInstance,138,3,32,29
	.sym	~~FXWinMain,~~FXWinMain,65,2,0
	.sym	~~DefaultWindowProc,~~DefaultWindowProc,78,18,0
	.sym	GUIDEFWNDPROC,0,654,14,32
	.sym	~~GetDesktopWindow,~~GetDesktopWindow,1089,18,32
	.sym	GUIGETDESKTOP,0,8833,14,32
	.sym	GUICREATEWINDOWEX,0,8842,14,32,29
	.sym	~~CreateWindow,~~CreateWindow,1098,18,32,29
	.sym	GUICREATEWINDOW,0,8842,14,32,29
	.sym	~~CreateWindowClassEx,~~CreateWindowClassEx,1098,18,32,25
	.sym	GUICRTCLASSEX,0,8842,14,32,25
	.sym	RTCCENTURY,0,645,14,32
	.sym	RTCYEAR,0,645,14,32
	.sym	RTCDAY,0,645,14,32
	.sym	RTCMON,0,645,14,32
	.sym	RTCSEC,0,645,14,32
	.sym	RTCMIN,0,645,14,32
	.sym	RTCHOUR,0,645,14,32
	.sym	MEMDEALLOC,0,641,14,32
	.sym	MEMALLOC,0,8833,14,32
	.sym	~~GetCurrentProcess,~~GetCurrentProcess,1098,18,32,17
	.sym	EXECGETCURPROC,0,8842,14,32,17
	.sym	~~TerminateProcess,~~TerminateProcess,78,18,0
	.sym	EXECTERMPROC,0,654,14,32
	.sym	DEBUGLONG,0,641,14,32
	.sym	DEBUGINTEGER,0,641,14,32
	.sym	~~DebugOut,~~DebugOut,65,18,0
	.sym	DEBUGOUT,0,641,14,32
	.sym	PEACHCHILD_MSG,0,138,14,32,59
	.sym	EACHCHILD_MSG,0,10,14,64,59
	.sym	PWINDOWMANAGER,0,138,14,32,58
	.sym	WINDOWMANAGER,0,10,14,160,58
	.sym	WM_DOPROCS,0,641,14,32
	.sym	WM_QUERY_METRIC,0,656,14,32
	.sym	WM_CONFIGURE,0,656,14,32
	.sym	WM_HANDLE_EVENT,0,8833,14,32
	.sym	WM_EVENTS,0,641,14,32
	.sym	PEVENTMANAGER,0,138,14,32,57
	.sym	EVENTMANAGER,0,10,14,192,57
	.sym	EV_RUN,0,656,14,32
	.sym	EV_QUERY_METRIC,0,656,14,32
	.sym	EV_CONFIGURE,0,656,14,32
	.sym	EV_UNINIT,0,641,14,32
	.sym	EV_INIT,0,8833,14,32
	.sym	PMOUSE_MSG_STATE,0,138,14,32,56
	.sym	MOUSE_MSG_STATE,0,10,14,184,56
	.sym	PFXEVENTPROCESS,0,138,14,32,55
	.sym	FXEVENTPROCESS,0,10,14,64,55
	.sym	FXIDLEPROCESS,0,641,14,32
	.sym	FXEventProc,0,641,14,32
	.sym	PMOUSEMSGDATA,0,138,14,32,54
	.sym	MOUSEMSGDATA,0,10,14,64,54
	.sym	MSGIRQ,0,5,14,16
	.sym	MAINLOOPARGS,0,10,14,16,53
	.sym	DEVICEDRIVER_COMMAND,0,656,14,32
	.sym	DEVICEDRIVER_UNLOAD,0,654,14,32
	.sym	DEVICEDRIVER_WRITE,0,656,14,32
	.sym	DEVICEDRIVER_READ,0,656,14,32
	.sym	DEVICEDRIVER_LOAD,0,654,14,32
	.sym	PFX_BLOCK_DEVICE_DRIVER,0,138,14,32,52
	.sym	FX_BLOCK_DEVICE_DRIVER,0,10,14,1448,52
	.sym	PFX_DEVICE_DRIVER,0,138,14,32,51
	.sym	FX_DEVICE_DRIVER,0,10,14,1416,51
	.sym	PDEBUGBYTEBITS,0,138,14,32,50
	.sym	DEBUGBYTEBITS,0,10,14,8,50
	.sym	PFXENVIRONMENT,0,138,14,32,49
	.sym	FXENVIRONMENT,0,10,14,96,49
	.sym	PFXZERPOPAGE,0,138,14,32,48
	.sym	FXZERPOPAGE,0,10,14,768,48
	.sym	KERNELTRAPCALL,0,641,14,32
	.sym	PFXKERNEL_API_CALLTABLE,0,138,14,32,47
	.sym	FXKERNEL_API_CALLTABLE,0,10,14,4096,47
	.sym	FOREACHNODEUNTIL,0,654,14,32
	.sym	FOREACHNODE,0,641,14,32
	.sym	Boolean_T,0,5,14,16
	.sym	ldiv_t,0,10,14,64,45
	.sym	div_t,0,10,14,32,44
	.sym	wctype_t,0,16,14,16
	.sym	wint_t,0,16,14,16
	.sym	wchar_t,0,14,14,8
	.sym	ptrdiff_t,0,7,14,32
	.sym	size_t,0,16,14,16
	.sym	PFXCOMBUFFER,0,138,14,32,43
	.sym	FXCOMBUFFER,0,10,14,2080,43
	.sym	PSUBMENULIST,0,138,14,32,42
	.sym	SUBMENULIST,0,10,14,40,42
	.sym	HSUBMENU,0,7,14,32
	.sym	PSUBMENU,0,138,14,32,41
	.sym	SUBMENU,0,10,14,64,41
	.sym	MenuAction,0,641,14,32
	.sym	PMENUANCHOR,0,138,14,32,40
	.sym	MENUANCHOR,0,10,14,272,40
	.sym	PMSGBOX,0,138,14,32,39
	.sym	MSGBOX,0,10,14,144,39
	.sym	PTEXTBOX,0,138,14,32,38
	.sym	TEXTBOX,0,10,14,144,38
	.sym	PLISTBOX,0,138,14,32,37
	.sym	LISTBOX,0,10,14,240,37
	.sym	PSCROLLBAR,0,138,14,32,36
	.sym	SCROLLBAR,0,10,14,240,36
	.sym	PBUTTON,0,138,14,32,35
	.sym	BUTTON,0,10,14,96,35
	.sym	PMENUDROPDOWNDATA,0,138,14,32,34
	.sym	MENUDROPDOWNDATA,0,10,14,5152,34
	.sym	PMENUTAG,0,138,14,32,33
	.sym	MENUTAG,0,10,14,160,33
	.sym	PMENU,0,138,14,32,32
	.sym	MENU,0,10,14,280,32
	.sym	HMENURESOURCE,0,129,14,32
	.sym	FONTMETRIC,0,10,14,32,31
	.sym	TITLE,0,142,14,32
	.sym	PHANDLE,0,1153,14,32
	.sym	HANDLE,0,129,14,32
	.sym	PWINDOWEX,0,138,14,32,30
	.sym	WINDOWEX,0,10,14,3880,30
	.sym	PWINDOW,0,138,14,32,29
	.sym	WINDOW,0,10,14,3904,29
	.sym	PDRAGDATA,0,138,14,32,28
	.sym	DRAGDATA,0,10,14,216,28
	.sym	PNCCLICKABLE,0,138,14,32,27
	.sym	NCCLICKABLE,0,10,14,136,27
	.sym	HCLICKABLE,0,7,14,32
	.sym	PCLICKABLE,0,138,14,32,26
	.sym	CLICKABLE,0,10,14,152,26
	.sym	PWNDCLASS,0,138,14,32,25
	.sym	WNDCLASS,0,10,14,272,25
	.sym	HBRUSH,0,129,14,32
	.sym	HCURSOR,0,129,14,32
	.sym	HICON,0,129,14,32
	.sym	HINSTANCE,0,129,14,32
	.sym	FXWndProc,0,654,14,32
	.sym	PDRECT,0,138,14,32,24
	.sym	DRECT,0,10,14,112,24
	.sym	PRECTP,0,138,14,32,23
	.sym	RECTP,0,10,14,96,23
	.sym	PRECT,0,138,14,32,22
	.sym	RECT,0,10,14,112,22
	.sym	PPOINT,0,138,14,32,21
	.sym	POINT,0,10,14,32,21
	.sym	PFXPROPERTY,0,138,14,32,19
	.sym	FXPROPERTY,0,10,14,384,19
	.sym	SCANCODE,0,14,14,8
	.sym	KEYCODE,0,14,14,8
	.sym	PFXPROCESSMESSAGE,0,138,14,32,18
	.sym	FXPROCESSMESSAGE,0,10,14,112,18
	.sym	PFXPROCESS,0,138,14,32,17
	.sym	FXPROCESS,0,10,14,800,17
	.sym	PDESKTOP_CONTROL,0,138,14,32,16
	.sym	DESKTOP_CONTROL,0,10,14,392,16
	.sym	PCONSOLE_CONTROL,0,138,14,32,15
	.sym	CONSOLE_CONTROL,0,10,14,448,15
	.sym	FXProcessProc,0,641,14,32
	.sym	PFXCMDMESSAGE,0,138,14,32,14
	.sym	FXCMDMESSAGE,0,10,14,304,14
	.sym	PFXOSMESSAGE,0,138,14,32,13
	.sym	FXOSMESSAGE,0,10,14,304,13
	.sym	PINT_REGS,0,138,14,32,12
	.sym	INT_REGS,0,10,14,104,12
	.sym	TASK_STACK,0,10,14,32,11
	.sym	TASK,0,10,14,48,10
	.sym	PIRQDATA,0,138,14,32,9
	.sym	IRQDATA,0,10,14,48,9
	.sym	HMENU,0,129,14,32
	.sym	HWND,0,129,14,32
	.sym	MSGDATA,0,14,14,8
	.sym	MSGDEST,0,18,14,32
	.sym	MSGSRC,0,18,14,32
	.sym	MSGTYPE,0,16,14,16
	.sym	PROCESS_RESOURCE_LIST,0,138,14,32,3
	.sym	PROCESS_TLS_LIST,0,138,14,32,3
	.sym	SEMAPHORE_LIST,0,138,14,32,3
	.sym	FILE_BLOCK_LIST,0,138,14,32,3
	.sym	FILE_PATH_LIST,0,138,14,32,3
	.sym	PROCEDURE_LIST,0,138,14,32,3
	.sym	FILE_HANDLE,0,138,14,32,8
	.sym	FILE_BLOCK,0,10,14,552,8
	.sym	SEMAPHORE,0,10,14,16,7
	.sym	PPROCESS_SIGNAL,0,138,14,32,6
	.sym	PROCESS_SIGNAL,0,10,14,16,6
	.sym	KRESULT,0,18,14,32
	.sym	PKERNEL_ERROR,0,138,14,32,5
	.sym	KERNEL_ERROR,0,10,14,32,5
	.sym	PROCESS_STATUS,0,16,14,16
	.sym	FILE_PATH_NAME,0,142,14,32
	.sym	PROCESS_RESOURCE,0,129,14,32
	.sym	PROCESS_TLS,0,129,14,32
	.sym	PROCESS_CTX,0,129,14,32
	.sym	USERID,0,16,14,16
	.sym	PROCESS_ID,0,18,14,32
	.sym	PROCESS_BANK,0,14,14,8
	.sym	PFXQUEUE,0,138,14,32,4
	.sym	FXQUEUE,0,10,14,80,4
	.sym	PFXNODELIST,0,138,14,32,3
	.sym	FXNODELIST,0,10,14,96,3
	.sym	NodeListDeallocator,0,641,14,32
	.sym	PFXNODE,0,138,14,32,2
	.sym	FXNODE,0,10,14,384,2
	.sym	PBYTEBITS,0,138,14,32,1
	.sym	BYTEBITS,0,10,14,8,1
	.sym	HCOLOR,0,129,14,32
	.sym	HFONT,0,129,14,32
	.sym	HDC,0,129,14,32
	.sym	HPOINTER,0,129,14,32
	.sym	uint32_t,0,18,14,32
	.sym	uint8_t,0,14,14,8
	.sym	PFAR,0,142,14,32
	.sym	LPBOOL,0,142,14,32
	.sym	BOOL,0,14,14,8
	.sym	DWORD,0,18,14,32
	.sym	ULONG,0,18,14,32
	.sym	LPLONG,0,135,14,32
	.sym	LONG,0,7,14,32
	.sym	PUINT,0,144,14,32
	.sym	USHORT,0,16,14,16
	.sym	UINT,0,16,14,16
	.sym	INT,0,5,14,16
	.sym	WORD,0,5,14,16
	.sym	PBYTE,0,142,14,32
	.sym	BYTE,0,14,14,8
	.sym	UCHAR,0,14,14,8
	.sym	LPWCSTR,0,142,14,32
	.sym	LPCSTR,0,142,14,32
	.sym	LPSTR,0,142,14,32
	.sym	LPCHAR,0,142,14,32
	.sym	CHAR,0,14,14,8
	.sym	LPVOID,0,129,14,32
	.sym	VOID,0,1,14,32
	end
