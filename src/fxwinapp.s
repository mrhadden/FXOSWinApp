;:ts=8
R0	equ	1
R1	equ	5
R2	equ	9
R3	equ	13
	.file	"G:\devprojects\c256Binary\FXOSWinApp\src\fxwinapp.c",0
;#include "fxwinapp.h"
	.file	"G:\devprojects\c256Binary\FXOSWinApp\src\fxwinapp.h",0
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxtypes.h",0
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
	.stag	_fx_eventMessage,312,13
	.member	src,0,18,8,32
	.member	dest,32,18,8,32
	.member	type,64,16,8,16
	.member	hwnd,80,129,8,32
	.member	pheap,112,129,8,32
	.member	msgTime,144,18,8,32
	.member	data,176,110,8,0,16
	.member	attr,304,14,8,8
	.eos
	.stag	_fx_cmdMessage,312,14
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
	.member	attr,304,14,8,8
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
	.stag	_k_key_state,112,19
	.member	scanCode,0,14,8,8
	.member	isShifted,8,14,8,8
	.member	isAlt,16,14,8,8
	.member	isExtended,24,14,8,8
	.member	isCapsLock,32,14,8,8
	.member	isNumLock,40,14,8,8
	.member	isScrollLock,48,14,8,8
	.member	keyChar,56,16,8,16
	.member	scanTime,72,18,8,32
	.member	ledStatus,104,14,8,8
	.eos
	.stag	_fx_property,384,20
	.member	name,0,110,8,0,16
	.member	value,128,110,8,0,32
	.eos
	.utag	_24bitPointer,32,21
	.member	address,0,142,11,32
	.member	bytes,0,110,11,0,4
	.eos
	.stag	_PointStruct,32,22
	.member	x,0,5,8,16
	.member	y,16,5,8,16
	.eos
	.stag	_RectStruct,112,23
	.member	x,0,5,8,16
	.member	y,16,5,8,16
	.member	z,32,18,8,32
	.member	width,64,5,8,16
	.member	height,80,5,8,16
	.member	attr,96,5,8,16
	.eos
	.stag	fake24_,96,24
	.member	name,0,142,8,32
	.member	topLeft,32,10,8,32,22
	.member	bottomRight,64,10,8,32,22
	.eos
	.stag	fake25_,112,25
	.member	x,0,5,8,16
	.member	y,16,5,8,16
	.member	z,32,5,8,16
	.member	width,48,5,8,16
	.member	height,64,5,8,16
	.member	data,80,18,8,32
	.eos
	.stag	_k_WindowClass,272,26
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
	.stag	_ClickableRect,152,27
	.member	area,0,10,8,112,23
	.member	z,112,18,8,32
	.member	enabled,144,14,8,8
	.eos
	.stag	_NCClickableRect,136,28
	.member	area,0,10,8,112,23
	.member	msgType,112,16,8,16
	.member	enabled,128,14,8,8
	.eos
	.stag	_DragData,216,29
	.member	area,0,10,8,112,23
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
	.stag	_k_WindowStruct,3904,30
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
	.member	wndRect,224,10,8,112,23
	.member	clientRect,336,10,8,112,23
	.member	nonclientGadgets,448,106,8,0,28,16
	.member	clickable,2624,129,8,32
	.member	win_title,2656,110,8,0,32
	.member	Reserved0,2912,16,8,16
	.member	win_class,2928,110,8,0,16
	.member	win_class_name,3056,110,8,0,32
	.member	nBitmapLayer,3312,16,8,16
	.member	bgRegion,3328,129,8,32
	.member	procid,3360,18,8,32
	.member	pWndClass,3392,138,8,32,26
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
	.stag	_k_WindowStructEx,3880,31
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
	.member	wndRect,224,10,8,112,23
	.member	clientRect,336,10,8,112,23
	.member	nonclientGadgets,448,106,8,0,28,16
	.member	clickable,2624,129,8,32
	.member	win_title,2656,110,8,0,32
	.member	Reserved0,2912,16,8,16
	.member	win_class,2928,110,8,0,16
	.member	nBitmapLayer,3056,16,8,16
	.member	procid,3072,18,8,32
	.member	pWndClass,3104,138,8,32,26
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
	.member	localRect,3536,10,8,112,23
	.member	globalRect,3648,10,8,112,23
	.member	clientOffsetRect,3760,10,8,112,23
	.member	isDesktop,3872,14,8,8
	.eos
	.stag	_FontMetric,32,32
	.member	width,0,5,8,16
	.member	height,16,5,8,16
	.eos
	.stag	_MenuStruct,280,33
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
	.stag	fake34_,160,34
	.member	menuId,0,16,8,16
	.member	caption,16,142,8,32
	.member	rect,48,10,8,112,23
	.eos
	.stag	fake35_,5152,35
	.member	pParent,0,138,8,32,30
	.member	rect,32,10,8,112,23
	.member	captions,144,1134,8,32,24
	.member	chrome,912,110,8,0,24
	.member	ids,1104,112,8,0,24
	.member	clickable,1488,106,8,0,27,24
	.member	selected,5136,16,8,16
	.eos
	.stag	_fx_button_t,96,36
	.member	pCaption,0,142,8,32
	.member	cCaption,32,16,8,16
	.member	data,48,129,8,32
	.member	captionPixelWidth,80,16,8,16
	.eos
	.stag	_fx_scrollbar_t,240,37
	.member	min,0,16,8,16
	.member	max,16,16,8,16
	.member	increment,32,16,8,16
	.member	stopsize,48,16,8,16
	.member	location,64,5,8,16
	.member	state,80,5,8,16
	.member	rectThumb,96,10,8,112,23
	.member	data,208,129,8,32
	.eos
	.stag	_fx_listbox_t,240,38
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
	.stag	_fx_textbox_t,144,39
	.member	pos,0,5,8,16
	.member	selected,16,16,8,16
	.member	offsetX,32,5,8,16
	.member	offsetY,48,5,8,16
	.member	isShifted,64,14,8,8
	.member	cursorState,72,14,8,8
	.member	fontSet,80,142,8,32
	.member	data,112,129,8,32
	.eos
	.stag	_fx_msgbox_t,144,40
	.member	pos,0,5,8,16
	.member	selected,16,16,8,16
	.member	offsetX,32,5,8,16
	.member	offsetY,48,5,8,16
	.member	isShifted,64,14,8,8
	.member	cursorState,72,14,8,8
	.member	fontSet,80,142,8,32
	.member	data,112,129,8,32
	.eos
	.stag	_fx_menuAnchor_t,272,41
	.member	pCaption,0,142,8,32
	.member	renderLayoutX,32,16,8,16
	.member	renderLayoutY,48,16,8,16
	.member	captionPixelWidth,64,16,8,16
	.member	data,80,129,8,32
	.member	droppedWindow,112,138,8,32,30
	.member	bytes,144,110,8,0,16
	.eos
	.stag	_SubMenuStruct,64,42
	.member	caption,0,142,8,32
	.member	action,32,641,8,32
	.eos
	.stag	_SubMenuListStruct,40,43
	.member	cMenus,0,14,8,8
	.member	psubmenus,8,9354,8,32,42
	.eos
	.stag	_fx_ComBuffer,2080,44
	.member	cbSize,0,16,8,16
	.member	cbBuffer,16,16,8,16
	.member	buffer,32,110,8,0,256
	.eos
	.stag	_fx_resource_header,72,45
	.member	magic,0,110,8,0,4
	.member	major,32,14,8,8
	.member	minor,40,14,8,8
	.member	type,48,14,8,8
	.member	reserved,56,14,8,8
	.member	resheaderSize,64,14,8,8
	.eos
	.stag	_fx_resource_header_font,144,46
	.member	title,0,110,8,0,16
	.member	height,128,14,8,8
	.member	width,136,14,8,8
	.eos
	.stag	_fx_resource_string,32,47
	.member	locale,0,110,8,0,2
	.member	entries,16,16,8,16
	.eos
	.stag	_fx_resource_string_entry,40,48
	.member	index,0,16,8,16
	.member	length,16,16,8,16
	.member	data,32,14,8,8
	.eos
	.stag	_fx_string,64,49
	.member	size,0,16,8,16
	.member	pos,16,5,8,16
	.member	buffer,32,142,8,32
	.eos
	.stag	_fx_ipc_port,144,50
	.member	id,0,18,8,32
	.member	type,32,14,8,8
	.member	name,40,138,8,32,49
	.member	time,72,18,8,32
	.member	queue,104,138,8,32,4
	.member	reserved_1,136,14,8,8
	.eos
	.line	1095
	.file	"G:\devprojects\c256Binary\FXOSWinApp\src\fxwinapp.h",11
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\ff.h",0
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\ffconf.h",0
	.line	298
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\ff.h",29
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxtypes.h",0
	.line	1095
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\ff.h",30
	.stag	fake51_,4504,51
	.member	fs_type,0,14,8,8
	.member	pdrv,8,14,8,8
	.member	n_fats,16,14,8,8
	.member	wflag,24,14,8,8
	.member	fsi_flag,32,14,8,8
	.member	id,40,5,8,16
	.member	n_rootdir,56,5,8,16
	.member	csize,72,5,8,16
	.member	lfnbuf,88,144,8,32
	.member	last_clst,120,18,8,32
	.member	free_clst,152,18,8,32
	.member	n_fatent,184,18,8,32
	.member	fsize,216,18,8,32
	.member	volbase,248,18,8,32
	.member	fatbase,280,18,8,32
	.member	dirbase,312,18,8,32
	.member	database,344,18,8,32
	.member	winsect,376,18,8,32
	.member	win,408,110,8,0,512
	.eos
	.stag	fake52_,128,52
	.member	fs,0,138,8,32,51
	.member	id,32,5,8,16
	.member	attr,48,14,8,8
	.member	stat,56,14,8,8
	.member	sclust,64,18,8,32
	.member	objsize,96,18,8,32
	.eos
	.stag	fake53_,4400,53
	.member	obj,0,10,8,128,52
	.member	flag,128,14,8,8
	.member	err,136,14,8,8
	.member	fptr,144,18,8,32
	.member	clust,176,18,8,32
	.member	sect,208,18,8,32
	.member	dir_sect,240,18,8,32
	.member	dir_ptr,272,142,8,32
	.member	buf,304,110,8,0,512
	.eos
	.stag	fake54_,416,54
	.member	obj,0,10,8,128,52
	.member	dptr,128,18,8,32
	.member	clust,160,18,8,32
	.member	sect,192,18,8,32
	.member	dir,224,142,8,32
	.member	fn,256,110,8,0,12
	.member	blk_ofs,352,18,8,32
	.member	pat,384,142,8,32
	.eos
	.stag	fake55_,2224,55
	.member	fsize,0,18,8,32
	.member	fdate,32,5,8,16
	.member	ftime,48,5,8,16
	.member	fattrib,64,14,8,8
	.member	altname,72,110,8,0,13
	.member	fname,176,110,8,0,256
	.eos
	.stag	fake56_,80,56
	.member	fmt,0,14,8,8
	.member	n_fat,8,14,8,8
	.member	align,16,16,8,16
	.member	n_root,32,16,8,16
	.member	au_size,48,18,8,32
	.eos
	.line	429
	.file	"G:\devprojects\c256Binary\FXOSWinApp\src\fxwinapp.h",12
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_SDK.h",0
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxtypes.h",0
	.line	1095
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_SDK.h",10
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxkernel.h",0
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxtypes.h",0
	.line	1095
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxkernel.h",5
	.stag	_fx_environment,96,57
	.member	variables,0,142,8,32
	.member	reserved1,32,5,8,16
	.member	reserved2,48,5,8,16
	.member	reserved3,64,5,8,16
	.member	reserved4,80,5,8,16
	.eos
	.stag	_debug_byte_bits,8,58
	.member	bit7,0,14,17,1
	.member	bit6,1,14,17,1
	.member	bit5,2,14,17,1
	.member	bit4,3,14,17,1
	.member	bit3,4,14,17,1
	.member	bit2,5,14,17,1
	.member	bit1,6,14,17,1
	.member	bit0,7,14,17,1
	.eos
	.stag	_k_segmentheader,160,59
	.member	version_major,0,14,8,8
	.member	version_minor,8,14,8,8
	.member	length,16,5,8,16
	.member	segment_start_addr,32,7,8,32
	.member	segment_end_addr,64,7,8,32
	.member	segment_size,96,7,8,32
	.member	main_entry_addr,128,7,8,32
	.eos
	.stag	_fx_device_driver,776,60
	.member	name,0,110,8,0,32
	.member	version,256,110,8,0,16
	.member	hmajor,384,110,8,0,8
	.member	hminor,448,110,8,0,8
	.member	type,512,14,8,8
	.member	designation,520,110,8,0,6
	.member	irq_ctl,568,16,8,16
	.member	f_driver_irq,584,129,8,32
	.member	driver_context,616,129,8,32
	.member	f_driver_load,648,129,8,32
	.member	f_driver_read,680,129,8,32
	.member	f_driver_write,712,129,8,32
	.member	f_driver_unload,744,129,8,32
	.eos
	.stag	_fx_block_device_driver,808,61
	.member	name,0,110,8,0,32
	.member	version,256,110,8,0,16
	.member	hmajor,384,110,8,0,8
	.member	hminor,448,110,8,0,8
	.member	type,512,14,8,8
	.member	designation,520,110,8,0,6
	.member	irq_ctl,568,16,8,16
	.member	f_driver_irq,584,129,8,32
	.member	driver_context,616,129,8,32
	.member	f_driver_load,648,129,8,32
	.member	f_driver_read,680,129,8,32
	.member	f_driver_write,712,129,8,32
	.member	f_driver_unload,744,129,8,32
	.member	f_driver_command,776,129,8,32
	.eos
	.stag	_k_irq_chain,128,62
	.member	handlers,0,5217,8,32,4
	.eos
	.line	192
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_SDK.h",12
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxevent.h",0
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxtypes.h",0
	.line	1095
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxevent.h",5
	.stag	_fx_main_loopvars,16,63
	.member	dummy,0,5,8,16
	.eos
	.stag	_fxMouseMessageData,64,64
	.member	button1,0,14,8,8
	.member	button2,8,14,8,8
	.member	button3,16,14,8,8
	.member	button4,24,14,8,8
	.member	x,32,16,8,16
	.member	y,48,16,8,16
	.eos
	.utag	marshalled_data,32,65
	.member	byteValue,0,14,11,8
	.member	verbValue,0,110,11,0,2
	.member	intValue,0,16,11,16
	.member	longValue,0,18,11,32
	.member	pointerValue,0,129,11,32
	.eos
	.stag	_fx_eventProcess,64,66
	.member	process,0,138,8,32,17
	.member	eventProc,32,641,8,32
	.eos
	.stag	_mouse_msg_state,184,67
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
	.stag	_fxos_eventmanager_vtable,192,68
	.member	EventQueue,0,138,8,32,4
	.member	Init,32,8833,8,32
	.member	Run,64,656,8,32
	.member	Configure,96,656,8,32
	.member	Query,128,656,8,32
	.member	Uninit,160,641,8,32
	.eos
	.stag	_k_clipboard_data,168,69
	.member	type,0,14,8,8
	.member	readable,8,110,8,0,16
	.member	data,136,129,8,32
	.eos
	.line	283
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_SDK.h",13
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxgui.h",0
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxtypes.h",0
	.line	1095
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxgui.h",4
	.stag	_fxos_winman_vtable,160,70
	.member	Events,0,641,8,32
	.member	ConfigureWindowManager,32,656,8,32
	.member	ProcessWindowEvent,64,8833,8,32
	.member	QueryWindowManager,96,656,8,32
	.member	DoWndProcs,128,641,8,32
	.eos
	.stag	fake71_,64,71
	.member	type,0,16,8,16
	.member	size,16,16,8,16
	.member	desktopAction,32,129,8,32
	.eos
	.stag	fake72_,96,72
	.member	type,0,16,8,16
	.member	caption,16,138,8,32,49
	.member	buttonType,48,16,8,16
	.member	x,64,5,8,16
	.member	y,80,5,8,16
	.eos
	.stag	_childMessage_t,64,73
	.member	msgType,0,16,8,16
	.member	msgData,16,129,8,32
	.member	dataSize,48,16,8,16
	.eos
	.line	273
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_SDK.h",14
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_KERNEL_SDK.h",0
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxtypes.h",0
	.line	1095
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_KERNEL_SDK.h",10
	.line	1895
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_SDK.h",16
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_DOS_SDK.h",0
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxtypes.h",0
	.line	1095
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_DOS_SDK.h",10
	.line	179
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_SDK.h",17
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_GUI_SDK.h",0
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxtypes.h",0
	.line	1095
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_GUI_SDK.h",10
	.line	586
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_SDK.h",18
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_GFX_SDK.h",0
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxtypes.h",0
	.line	1095
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_GFX_SDK.h",10
	.line	586
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_SDK.h",19
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_CON_SDK.h",0
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\fxtypes.h",0
	.line	1095
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_CON_SDK.h",10
	.line	289
	.file	"G:\devprojects\c256Binary\FXOSWinApp\INCLUDES\FXOS_SDK.h",20
	.line	22
	.file	"G:\devprojects\c256Binary\FXOSWinApp\src\fxwinapp.h",14
	.line	18
	.file	"G:\devprojects\c256Binary\FXOSWinApp\src\fxwinapp.c",1
;
;static PWINDOW hWndInstance = NULL;
	data
~~hWndInstance:
	dl	$0
	ends
;
;BOOL WinAppWindowProc(PFXOSMESSAGE pMsg);
;//
;// App Entry
;//
;VOID FXWinMain(PFXOSMESSAGE pMsg)
;{
	.line	9
	.line	10
	code
	xdef	~~FXWinMain
	func
	.function	10
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
	.block	10
;	PFXPROCESS proc;
;
;	if(pMsg!=NULL)
proc_1	set	0
	.sym	proc,0,138,1,32,17
	.sym	pMsg,4,138,6,32,13
	.line	13
;	{
	lda	<L2+pMsg_0
	ora	<L2+pMsg_0+2
	bne	L5
	brl	L10001
L5:
	.line	14
;		proc = GetCurrentProcess();
	.line	15
	jsl	~~GetCurrentProcess
	sta	<L3+proc_1
	stx	<L3+proc_1+2
;
;		switch(pMsg->type)
	.line	17
	ldy	#$8
	lda	[<L2+pMsg_0],Y
	brl	L10002
;		{
	.line	18
;		case FX_INIT_MESSAGE:
	.line	19
L10004:
;			if(proc!=NULL)
	.line	20
;			{
	lda	<L3+proc_1
	ora	<L3+proc_1+2
	bne	L6
	brl	L10005
L6:
	.line	21
;				DebugOut("FXWinApp::FX_INIT_MESSAGE\r\n");
	.line	22
	pea	#^L1
	pea	#<L1
	jsl	~~DebugOut
;
;				CreateWindowClassEx("fxWinAppWindowClass",NULL,0,FXWSX_ALWAYS_BACKPLANE,NULL,NULL,NULL,WinAppWindowProc);
	.line	24
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
;				DebugOut("FXWinApp::CreateWindowClassEx\r\n");
	.line	25
	pea	#^L1+48
	pea	#<L1+48
	jsl	~~DebugOut
;
;				hWndInstance = CreateWindow(FXWS_THICKFRAME | FXWS_CAPTION | FXWS_VISIBLE | FXWS_SYSMENU | FXWS_POPUP,
	.line	27
;											"fxWinAppWindowClass",
;											"FX/OS Application",
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
	.line	35
	pea	#^L1+118
	pea	#<L1+118
	jsl	~~DebugOut
;			}
	.line	36
;			break;
L10005:
	.line	37
	brl	L10003
;		case FX_PROCESS:
	.line	38
L10006:
;			if(hWndInstance == NULL)
	.line	39
;			{
	lda	|~~hWndInstance
	ora	|~~hWndInstance+2
	beq	L7
	brl	L10007
L7:
	.line	40
;				DebugOut("FXWinApp::FX_PROCESS\r\n");
	.line	41
	pea	#^L1+143
	pea	#<L1+143
	jsl	~~DebugOut
;				ProcessTerminate(proc->procId);
	.line	42
	ldy	#$4
	lda	[<L3+proc_1],Y
	pha
	ldy	#$2
	lda	[<L3+proc_1],Y
	pha
	jsl	~~ProcessTerminate
;			}
	.line	43
;			break;
L10007:
	.line	44
	brl	L10003
;		default:
	.line	45
L10008:
;			break;
	.line	46
	brl	L10003
;		}
	.line	47
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
	.line	48
;	return;
L10001:
	.line	49
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
	.line	50
	.endblock	50
L2	equ	8
L3	equ	5
	ends
	efunc
	.endfunc	50,5,8
	.line	50
	data
L1:
	db	$46,$58,$57,$69,$6E,$41,$70,$70,$3A,$3A,$46,$58,$5F,$49,$4E
	db	$49,$54,$5F,$4D,$45,$53,$53,$41,$47,$45,$0D,$0A,$00,$66,$78
	db	$57,$69,$6E,$41,$70,$70,$57,$69,$6E,$64,$6F,$77,$43,$6C,$61
	db	$73,$73,$00,$46,$58,$57,$69,$6E,$41,$70,$70,$3A,$3A,$43,$72
	db	$65,$61,$74,$65,$57,$69,$6E,$64,$6F,$77,$43,$6C,$61,$73,$73
	db	$45,$78,$0D,$0A,$00,$66,$78,$57,$69,$6E,$41,$70,$70,$57,$69
	db	$6E,$64,$6F,$77,$43,$6C,$61,$73,$73,$00,$46,$58,$2F,$4F,$53
	db	$20,$41,$70,$70,$6C,$69,$63,$61,$74,$69,$6F,$6E,$00,$46,$58
	db	$57,$69,$6E,$41,$70,$70,$3A,$3A,$43,$72,$65,$61,$74,$65,$57
	db	$69,$6E,$64,$6F,$77,$0D,$0A,$00,$46,$58,$57,$69,$6E,$41,$70
	db	$70,$3A,$3A,$46,$58,$5F,$50,$52,$4F,$43,$45,$53,$53,$0D,$0A
	db	$00
	ends
;
;
;BOOL WinAppWindowProc(PFXOSMESSAGE pMsg)
;{
	.line	53
	.line	54
	code
	xdef	~~WinAppWindowProc
	func
	.function	54
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
	.block	54
;	PFXPROCESS 	proc;
;	PWINDOW 	pWin = NULL;
;
;	if(pMsg!=NULL)
proc_1	set	0
pWin_1	set	4
	.sym	proc,0,138,1,32,17
	.sym	pWin,4,138,1,32,30
	.sym	pMsg,4,138,6,32,13
	stz	<L11+pWin_1
	stz	<L11+pWin_1+2
	.line	58
;	{
	lda	<L10+pMsg_0
	ora	<L10+pMsg_0+2
	bne	L13
	brl	L10009
L13:
	.line	59
;		proc = GetCurrentProcess();
	.line	60
	jsl	~~GetCurrentProcess
	sta	<L11+proc_1
	stx	<L11+proc_1+2
;
;		switch(pMsg->type)
	.line	62
	ldy	#$8
	lda	[<L10+pMsg_0],Y
	brl	L10010
;		{
	.line	63
;		case FX_CREATE_WINDOW:
	.line	64
L10012:
;			if(proc)
	.line	65
;			{
	lda	<L11+proc_1
	ora	<L11+proc_1+2
	bne	L14
	brl	L10013
L14:
	.line	66
;				DebugOut("WinApp::FX_CREATE_WINDOW\r\n");
	.line	67
	pea	#^L9
	pea	#<L9
	jsl	~~DebugOut
;			}
	.line	68
;			return TRUE;
L10013:
	.line	69
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
	.line	70
;		case FX_DRAW_WINDOW:
	.line	71
L10014:
;			DebugOut("WinApp::FX_DRAW_WINDOW\r\n");
	.line	72
	pea	#^L9+27
	pea	#<L9+27
	jsl	~~DebugOut
;			break;
	.line	73
	brl	L10011
;		case FX_LBUTTON_DOWN:
	.line	74
L10015:
;			return TRUE;
	.line	75
	lda	#$1
	brl	L15
;		default:
	.line	76
L10016:
;			break;
	.line	77
	brl	L10011
;		}
	.line	78
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
	.line	79
;
;	return DefaultWindowProc(pMsg);
L10009:
	.line	81
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
	.line	82
	.endblock	82
L10	equ	12
L11	equ	5
	ends
	efunc
	.endfunc	82,5,12
	.line	82
	data
L9:
	db	$57,$69,$6E,$41,$70,$70,$3A,$3A,$46,$58,$5F,$43,$52,$45,$41
	db	$54,$45,$5F,$57,$49,$4E,$44,$4F,$57,$0D,$0A,$00,$57,$69,$6E
	db	$41,$70,$70,$3A,$3A,$46,$58,$5F,$44,$52,$41,$57,$5F,$57,$49
	db	$4E,$44,$4F,$57,$0D,$0A,$00
	ends
;
	.line	82
	.file	"G:\devprojects\c256Binary\FXOSWinApp\src\fxwinapp.c",53
	xref	~~DefaultWindowProc
	xref	~~CreateWindow
	xref	~~CreateWindowClassEx
	xref	~~GetDesktopWindow
	xref	~~DebugOut
	xref	~~ProcessTerminate
	xref	~~GetCurrentProcess
	.sym	~~WinAppWindowProc,~~WinAppWindowProc,78,2,0
	.sym	~~hWndInstance,~~hWndInstance,138,3,32,30
	.sym	~~FXWinMain,~~FXWinMain,65,2,0
	.sym	CREATECONSOLEWINDOW,0,641,14,32
	.sym	GETCONSOLECOLUMN,0,645,14,32
	.sym	GETCONSOLEROW,0,645,14,32
	.sym	SETCONSOLEPOSITION,0,641,14,32
	.sym	CONSOLECLEAR,0,641,14,32
	.sym	CONSOLEPRINT,0,645,14,32
	.sym	CREATECONSOLEDIALOG,0,641,14,32
	.sym	SETCONSOLECOLOR,0,645,14,32
	.sym	CONSOLEPRINTBUFFER,0,645,14,32
	.sym	CONSOLEPRINTSTRING,0,645,14,32
	.sym	CONSOLEPRINTCHAR,0,641,14,32
	.sym	CONSOLECLEARSCREEN,0,641,14,32
	.sym	SETCONSOLECURSORPOSITION,0,641,14,32
	.sym	SETCONSOLECURSOR,0,641,14,32
	.sym	SETCONSOLEFONTPAGE,0,641,14,32
	.sym	SETCONSOLEBORDER,0,641,14,32
	.sym	SETCONSOLEBORDERCOLOR,0,641,14,32
	.sym	CONSOLEDISABLEBORDER,0,641,14,32
	.sym	CONSOLEENABLEBORDER,0,641,14,32
	.sym	GETCONSOLEMAXLINES,0,645,14,32
	.sym	GETCONSOLEVISIBLELINES,0,645,14,32
	.sym	GETCONSOLECOLUMNSPERLINE,0,645,14,32
	.sym	GETCONSOLEVISIBLECOLUMNS,0,645,14,32
	.sym	INITIALIZETEXTFONTS,0,645,14,32
	.sym	INITIALIZETEXT,0,641,14,32
	.sym	SETMOUSEPOINTERDATA,0,641,14,32
	.sym	MOUSEPOINTERINIT,0,641,14,32
	.sym	GETFONTWIDTH,0,656,14,32
	.sym	GETFONTHEIGHT,0,656,14,32
	.sym	DRAWWINDOWICONSCALED,0,641,14,32
	.sym	DRAWWINDOWICONEX,0,645,14,32
	.sym	DRAWWINDOWICON,0,645,14,32
	.sym	DRAWWINDOWWIDGET,0,645,14,32
	.sym	DRAWWINDOWGADGETEX,0,645,14,32
	.sym	DRAWWINDOWGADGET,0,645,14,32
	.sym	DRAWTEXTSCALED,0,641,14,32
	.sym	GETFONTMETRICS,0,645,14,32
	.sym	DRAWTEXTWITHFONTEX,0,645,14,32
	.sym	DRAWTEXTWITHFONT,0,645,14,32
	.sym	DRAWFILLEDRECTANGLE,0,641,14,32
	.sym	DRAWRECTANGLE,0,641,14,32
	.sym	DRAWLINEEX,0,641,14,32
	.sym	DRAWLINE,0,641,14,32
	.sym	DRAWFILLEDCIRCLE,0,641,14,32
	.sym	DRAWCIRCLE,0,641,14,32
	.sym	DRAWSEGMENTS,0,641,14,32
	.sym	DRAWPIXELBANK,0,641,14,32
	.sym	DRAWPIXELBACK,0,641,14,32
	.sym	DRAWPIXELFRONT,0,641,14,32
	.sym	DRAWPIXELEX,0,641,14,32
	.sym	DRAWPIXEL,0,641,14,32
	.sym	GFXBANKBITBLT,0,641,14,32
	.sym	GFXBITBLT,0,641,14,32
	.sym	GFXRECTOVERLAPPEDPOINT,0,645,14,32
	.sym	GFXRECTOVERLAPPED,0,645,14,32
	.sym	GFXRECTINSIDE,0,654,14,32
	.sym	GFXSETRECT,0,641,14,32
	.sym	GFXCOPYRECT,0,641,14,32
	.sym	SETDEFAULTCOLORS,0,641,14,32
	.sym	GETPIXELWIDTH,0,647,14,32
	.sym	GETPIXELOFFSET,0,647,14,32
	.sym	GETVIDEOMODE,0,656,14,32
	.sym	ENABLEBITMAPMODE,0,641,14,32
	.sym	ENABLETEXTMODE,0,641,14,32
	.sym	HWNDTORECT,0,8842,14,32,23
	.sym	GETUICOLORMETRIC,0,645,14,32
	.sym	GETUIGADGETCOLOR,0,645,14,32
	.sym	GETUIMENUCOLOR,0,645,14,32
	.sym	GETUIWINDOWSHADECOLOR,0,645,14,32
	.sym	GETUIWINDOWBORDERCOLOR,0,645,14,32
	.sym	GETUIWINDOWFRAMECOLOR,0,645,14,32
	.sym	GETUIHIGHLIGHTCOLOR,0,645,14,32
	.sym	GETUISELECTEDCOLOR,0,645,14,32
	.sym	GETUIFONTCOLOR,0,645,14,32
	.sym	GETUIDESKTOPCOLOR,0,645,14,32
	.sym	GETUIBACKGROUNDCOLOR,0,645,14,32
	.sym	DRAWMENU,0,8842,14,32,33
	.sym	~~DefaultWindowProc,~~DefaultWindowProc,78,18,0
	.sym	DEFAULTWINDOWPROC,0,654,14,32
	.sym	GETMOUSECLIENTPOINT,0,8842,14,32,22
	.sym	GETMOUSEPOINT,0,8842,14,32,22
	.sym	DRAWWINDOWTEXTTOPOINT,0,656,14,32
	.sym	DRAWTEXT,0,656,14,32
	.sym	COPYRECT,0,641,14,32
	.sym	CLEARRECT,0,641,14,32
	.sym	SETRECT,0,641,14,32
	.sym	ISCHILDWINDOW,0,654,14,32
	.sym	GETFOCUSWINDOW,0,8833,14,32
	.sym	RESIZEWINDOWEX,0,641,14,32
	.sym	MOVEWINDOWEX,0,641,14,32
	.sym	MOVEWINDOW,0,641,14,32
	.sym	CENTERBOTTOMWINDOW,0,641,14,32
	.sym	CENTERWINDOW,0,641,14,32
	.sym	CREATEMSGBOX,0,8842,14,32,30
	.sym	CREATEVERTICALSCROLLBAR,0,8842,14,32,30
	.sym	CREATETEXTBOX,0,8842,14,32,30
	.sym	CREATEBUTTON,0,8842,14,32,30
	.sym	SENDMENUACCELERATORITEM,0,8833,14,32
	.sym	SENDMENUACCELERATOR,0,8833,14,32
	.sym	SETMENUSTATE,0,654,14,32
	.sym	SETMENUITEMATTRIBUTE,0,641,14,32
	.sym	ADDMENUITEM,0,8833,14,32
	.sym	CREATEMENURESOURCE,0,8833,14,32
	.sym	HIGHLIGHTMENU,0,641,14,32
	.sym	SELECTMENU,0,641,14,32
	.sym	CLOSEMENU,0,641,14,32
	.sym	CREATEMENU,0,8842,14,32,30
	.sym	GLOBALTOCLIENTCOORDINATES,0,8842,14,32,22
	.sym	CLIENTTOGLOBALCOORDINATES,0,8842,14,32,22
	.sym	SHOWWINDOW,0,654,14,32
	.sym	SETMOUSEPOINTER,0,8833,14,32
	.sym	GETMOUSEPOINTERCLASS,0,8833,14,32
	.sym	REGISTERSTRINGTABLE,0,654,14,32
	.sym	GETSTRINGTABLEENTRY,0,8842,14,32,49
	.sym	LOADRESOURCE,0,8833,14,32
	.sym	GETFONTCLASS,0,8833,14,32
	.sym	REGISTERFONTCLASS,0,8833,14,32
	.sym	LOADFONTCLASS,0,8833,14,32
	.sym	REGISTERMOUSEPOINTERCLASS,0,8833,14,32
	.sym	DESTROYWINDOW,0,654,14,32
	.sym	CLOSEWINDOW,0,654,14,32
	.sym	LOADDIALOG,0,8842,14,32,30
	.sym	GETWINDOWDATA,0,8833,14,32
	.sym	SETWINDOWDATA,0,8833,14,32
	.sym	CREATEWINDOWEX,0,8842,14,32,31
	.sym	~~CreateWindow,~~CreateWindow,1098,18,32,30
	.sym	CREATEWINDOW,0,8842,14,32,30
	.sym	REGISTERWINDOWCLASS,0,8833,14,32
	.sym	~~CreateWindowClassEx,~~CreateWindowClassEx,1098,18,32,26
	.sym	CREATEWINDOWCLASSEX,0,8842,14,32,26
	.sym	CREATEWINDOWCLASS,0,8842,14,32,26
	.sym	~~GetDesktopWindow,~~GetDesktopWindow,1089,18,32
	.sym	GETDESKTOPWINDOW,0,8833,14,32
	.sym	VOLUMESETLABEL,0,658,14,32
	.sym	VOLUMEGETLABEL,0,658,14,32
	.sym	FILEGETFREESPACE,0,658,14,32
	.sym	FILERENAME,0,658,14,32
	.sym	FILEDELETE,0,658,14,32
	.sym	DIRCREATE,0,658,14,32
	.sym	FILEFINDNEXT,0,658,14,32
	.sym	FILEFINDFIRST,0,658,14,32
	.sym	DIRCLOSE,0,658,14,32
	.sym	DIROPEN,0,658,14,32
	.sym	FILESEEK,0,658,14,32
	.sym	FILEWRITE,0,658,14,32
	.sym	FILEREAD,0,658,14,32
	.sym	FILECLOSE,0,658,14,32
	.sym	FILEOPEN,0,658,14,32
	.sym	STRINGLOCALHOURMINUTE,0,8846,14,32
	.sym	STRINGLOCALTIME,0,8846,14,32
	.sym	STRINGDATE,0,8846,14,32
	.sym	STRINGTOLOWER,0,8846,14,32
	.sym	STRINGTOUPPER,0,8846,14,32
	.sym	FXSTRINGENDWITH,0,654,14,32
	.sym	STRINGINDEXOF,0,645,14,32
	.sym	STRINGREPLACE,0,8846,14,32
	.sym	STRINGTRIM,0,8846,14,32
	.sym	STRINGLTRIM,0,8846,14,32
	.sym	STRINGRTRIM,0,8846,14,32
	.sym	STRINGCOPY,0,8846,14,32
	.sym	STRINGCONCAT,0,8846,14,32
	.sym	STRINGREVERSE,0,641,14,32
	.sym	STRINGPAD,0,8846,14,32
	.sym	STRINGITOA,0,8846,14,32
	.sym	STRINGFROMCHAR,0,8846,14,32
	.sym	STRINGLASTINDEXOF,0,656,14,32
	.sym	STRINGFIRSTINDEXOF,0,656,14,32
	.sym	STRINGCOPYTODELIMITER,0,8846,14,32
	.sym	STRINGFROMPOINTER,0,8846,14,32
	.sym	STRINGAPPENDINT,0,8846,14,32
	.sym	STRINGLONGTOSIZE,0,8846,14,32
	.sym	STRINGLONGTODEC,0,8846,14,32
	.sym	STRINGINTTODEC,0,8846,14,32
	.sym	STRINGBYTETODEC,0,8846,14,32
	.sym	STRINGBYTETOHEX,0,8846,14,32
	.sym	STRINGREPLACEPADDINGUNTIL,0,8846,14,32
	.sym	STRINGREPLACEPADDING,0,8846,14,32
	.sym	STRINGSTRIPPADDING,0,8846,14,32
	.sym	FXSTRINGAPPENDHEX,0,8842,14,32,49
	.sym	FXSTRINGAPPENDLONG,0,8842,14,32,49
	.sym	FXSTRINGAPPENDINTEGER,0,8842,14,32,49
	.sym	FXSTRINGEQUALS,0,654,14,32
	.sym	FXSTRINGFROMLONG,0,8842,14,32,49
	.sym	FXSTRINGCOPYTOSTRING,0,8846,14,32
	.sym	FXSTRINGCHARAT,0,654,14,32
	.sym	FXSTRINGASSTRING,0,8846,14,32
	.sym	FXSTRINGADDFXSTRING,0,656,14,32
	.sym	FXSTRINGADDSTRING,0,8846,14,32
	.sym	FXSTRINGREMOVECHAR,0,654,14,32
	.sym	FXSTRINGADDCHAR,0,8846,14,32
	.sym	FXSTRINGINDEX,0,656,14,32
	.sym	FXSTRINGSIZE,0,656,14,32
	.sym	FXSTRINGLENGTH,0,656,14,32
	.sym	FXSTRINGFREE,0,641,14,32
	.sym	FXSTRINGREINIT,0,8842,14,32,49
	.sym	FXSTRINGNEW,0,8842,14,32,49
	.sym	FXSTRINGINIT,0,8842,14,32,49
	.sym	NODELISTFOREACHREMOVE,0,641,14,32
	.sym	NODELISTFOREACHUNTILLISTDATA,0,8842,14,32,2
	.sym	NODELISTFOREACHLISTDATA,0,641,14,32
	.sym	NODELISTFOREACHTYPE,0,641,14,32
	.sym	NODELISTFOREACHUNTIL,0,8842,14,32,2
	.sym	NODELISTFOREACH,0,641,14,32
	.sym	NODELISTREMOVENODE,0,8842,14,32,2
	.sym	NODELISTISEMPTY,0,654,14,32
	.sym	NODELISTGETFIRST,0,8842,14,32,2
	.sym	NODELISTGETNAME,0,8846,14,32
	.sym	NODELISTFINDBYTYPE,0,8842,14,32,2
	.sym	NODELISTFINDBYID,0,8842,14,32,2
	.sym	NODELISTFINDBYNAME,0,8842,14,32,2
	.sym	NODELISTCLEAR,0,8842,14,32,3
	.sym	NODELISTADDNODE,0,8842,14,32,2
	.sym	NODELISTADDBYID,0,8842,14,32,2
	.sym	NODELISTADDFIRSTBYNAME,0,8842,14,32,2
	.sym	NODELISTADDFIRSTBYID,0,8842,14,32,2
	.sym	NODELISTADDBYNAME,0,8842,14,32,2
	.sym	NODELISTDEALLOC,0,641,14,32
	.sym	NODELISTALLOC,0,8842,14,32,3
	.sym	NODESGETLAST,0,8842,14,32,2
	.sym	NODESREMOVEBYID,0,8842,14,32,2
	.sym	NODESREMOVENODE,0,8842,14,32,2
	.sym	NODESREMOVEBYNAME,0,8842,14,32,2
	.sym	NODESGETNAMEANDTYPE,0,8842,14,32,2
	.sym	NODESGETNAME,0,8842,14,32,2
	.sym	NODESGET,0,8842,14,32,2
	.sym	NODESGETTYPE,0,8842,14,32,2
	.sym	NODESADDTOHEAD,0,641,14,32
	.sym	NODESADDNODE,0,641,14,32
	.sym	NODESCOPYNODE,0,8842,14,32,2
	.sym	NODESCREATEBYID,0,8842,14,32,2
	.sym	NODESCREATEBYNAME,0,8842,14,32,2
	.sym	NODESINIT,0,8842,14,32,2
	.sym	QUEUEREMOVEWITHLOCK,0,8833,14,32
	.sym	QUEUEADDWITHLOCK,0,641,14,32
	.sym	QUEUEREMOVE,0,8833,14,32
	.sym	QUEUEADD,0,654,14,32
	.sym	QUEUEISEMPTY,0,645,14,32
	.sym	QUEUEINITIALIZE,0,641,14,32
	.sym	SETMEMORYBLOCKUSER,0,654,14,32
	.sym	SETMEMORYBLOCKVIRTUAL,0,8833,14,32
	.sym	IPCWRITELONGPORT,0,641,14,32
	.sym	IPCWRITEINTEGERPORT,0,641,14,32
	.sym	IPCWRITEVERBPORT,0,641,14,32
	.sym	IPCWRITEBYTEPORT,0,641,14,32
	.sym	IPCWRITEPORT,0,656,14,32
	.sym	IPCPEEKPORT,0,8833,14,32
	.sym	IPCREADPORT,0,8833,14,32
	.sym	IPCCLOSEPORT,0,641,14,32
	.sym	IPCGETPORT,0,8842,14,32,50
	.sym	IPCOPENPORT,0,8842,14,32,50
	.sym	GETSEGMENTINFO,0,8833,14,32
	.sym	SEGMENTUNLOAD,0,641,14,32
	.sym	SEGMENTUNLOCK,0,654,14,32
	.sym	SEGMENTLOCK,0,8833,14,32
	.sym	SEGMENTLOAD,0,8833,14,32
	.sym	HEAPDEALLOC,0,641,14,32
	.sym	HEAPALLOC,0,8833,14,32
	.sym	MEMORYUNLOCK,0,641,14,32
	.sym	MEMORYLOCK,0,8833,14,32
	.sym	MEMORYDEALLOC,0,641,14,32
	.sym	MEMORYALLOC,0,8833,14,32
	.sym	MEMORYCOPY,0,8833,14,32
	.sym	GETHARDWARERELEASE,0,641,14,32
	.sym	GETHARDWAREVERSIONMINOR,0,641,14,32
	.sym	GETHARDWAREVERSIONMAJOR,0,641,14,32
	.sym	GETFIRMWAREDATEYEAR,0,641,14,32
	.sym	GETFIRMWAREDATEMONTH,0,641,14,32
	.sym	GETFIRMWAREDATEDAY,0,641,14,32
	.sym	GETRTCCENTURY,0,656,14,32
	.sym	GETRTCYEAR,0,656,14,32
	.sym	GETRTCDAY,0,656,14,32
	.sym	GETRTCMONTH,0,656,14,32
	.sym	GETRTCSECOND,0,656,14,32
	.sym	GETRTCMINUTE,0,656,14,32
	.sym	GETRTCHOUR,0,656,14,32
	.sym	GETMILLISECONDS,0,658,14,32
	.sym	DEBUGOFF,0,641,14,32
	.sym	DEBUGON,0,641,14,32
	.sym	DEBUGSTATUS,0,654,14,32
	.sym	DEBUGNODESDATA,0,641,14,32
	.sym	DEBUGNODELIST,0,641,14,32
	.sym	DEBUGNODES,0,641,14,32
	.sym	DEBUGNODE,0,641,14,32
	.sym	DEBUGCRLF,0,641,14,32
	.sym	DEBUGRECT,0,641,14,32
	.sym	DEBUGNSTRINGS,0,641,14,32
	.sym	DEBUGNMESSAGE,0,641,14,32
	.sym	DEBUGSTRINGS,0,641,14,32
	.sym	DEBUGMESSAGE,0,641,14,32
	.sym	DEBUGBYTEARRAY,0,641,14,32
	.sym	DEBUGBITS,0,641,14,32
	.sym	DEBUGHEXCHAR,0,641,14,32
	.sym	DEBUGHEX,0,641,14,32
	.sym	DEBUGLONG,0,641,14,32
	.sym	DEBUGINTEGERARRAY,0,641,14,32
	.sym	DEBUGHEXINTEGER,0,641,14,32
	.sym	DEBUGINTEGER,0,641,14,32
	.sym	DEBUGPOINTER,0,641,14,32
	.sym	DEBUGCHAR,0,641,14,32
	.sym	DEBUGNSTRING,0,641,14,32
	.sym	~~DebugOut,~~DebugOut,65,18,0
	.sym	DEBUGOUT,0,641,14,32
	.sym	PROCESSSIGNAL,0,654,14,32
	.sym	PROCESSWAIT,0,654,14,32
	.sym	PROCESSSTART,0,654,14,32
	.sym	~~ProcessTerminate,~~ProcessTerminate,78,18,0
	.sym	PROCESSTERMINATE,0,654,14,32
	.sym	PROCESSSLEEP,0,654,14,32
	.sym	~~GetCurrentProcess,~~GetCurrentProcess,1098,18,32,17
	.sym	GETCURRENTPROCESS,0,8842,14,32,17
	.sym	CREATEPROCESS,0,8842,14,32,17
	.sym	LAUNCHPROCESS,0,8842,14,32,17
	.sym	GETPROCESSLIST,0,74378,14,32,17
	.sym	GETPROCESSBYNAME,0,8842,14,32,17
	.sym	GETPROCESS,0,8842,14,32,17
	.sym	RAISEEXCEPTION,0,641,14,32
	.sym	UNREGISTERIDLEPROC,0,654,14,32
	.sym	REGISTERIDLEPROC,0,8833,14,32
	.sym	SENDPROCESSMESSAGE,0,654,14,32
	.sym	SENDCOMMANDMESSAGE,0,654,14,32
	.sym	SENDWINDOWMESSAGE,0,654,14,32
	.sym	SENDMESSAGE,0,654,14,32
	.sym	PEACHCHILD_MSG,0,138,14,32,73
	.sym	EACHCHILD_MSG,0,10,14,64,73
	.sym	PMSGBOX_DATA,0,138,14,32,72
	.sym	MSGBOX_DATA,0,10,14,96,72
	.sym	PDESKTOP_DATA,0,138,14,32,71
	.sym	DESKTOP_DATA,0,10,14,64,71
	.sym	PWINDOWMANAGER,0,138,14,32,70
	.sym	WINDOWMANAGER,0,10,14,160,70
	.sym	WM_DOPROCS,0,641,14,32
	.sym	WM_QUERY_METRIC,0,656,14,32
	.sym	WM_CONFIGURE,0,656,14,32
	.sym	WM_HANDLE_EVENT,0,8833,14,32
	.sym	WM_EVENTS,0,641,14,32
	.sym	HCLIP,0,138,14,32,69
	.sym	PCLIPBOARD_DATA,0,138,14,32,69
	.sym	CLIPBOARD_DATA,0,10,14,168,69
	.sym	PEVENTMANAGER,0,138,14,32,68
	.sym	EVENTMANAGER,0,10,14,192,68
	.sym	EV_RUN,0,656,14,32
	.sym	EV_QUERY_METRIC,0,656,14,32
	.sym	EV_CONFIGURE,0,656,14,32
	.sym	EV_UNINIT,0,641,14,32
	.sym	EV_INIT,0,8833,14,32
	.sym	PMOUSE_MSG_STATE,0,138,14,32,67
	.sym	MOUSE_MSG_STATE,0,10,14,184,67
	.sym	PFXEVENTPROCESS,0,138,14,32,66
	.sym	FXEVENTPROCESS,0,10,14,64,66
	.sym	PMARSHALDATA,0,139,14,32,65
	.sym	MARSHALDATA,0,11,14,32,65
	.sym	FXIDLEPROCESS,0,641,14,32
	.sym	FXEventProc,0,641,14,32
	.sym	PMOUSEMSGDATA,0,138,14,32,64
	.sym	MOUSEMSGDATA,0,10,14,64,64
	.sym	MSGIRQ,0,5,14,16
	.sym	MAINLOOPARGS,0,10,14,16,63
	.sym	PIRQCHAIN,0,138,14,32,62
	.sym	IRQCHAIN,0,10,14,128,62
	.sym	DEVICEDRIVER_COMMAND,0,656,14,32
	.sym	DEVICEDRIVER_UNLOAD,0,654,14,32
	.sym	DEVICEDRIVER_WRITE,0,656,14,32
	.sym	DEVICEDRIVER_READ,0,656,14,32
	.sym	DEVICEDRIVER_LOAD,0,654,14,32
	.sym	DEVICEDRIVER_IRQ,0,641,14,32
	.sym	PFX_BLOCK_DEVICE_DRIVER,0,138,14,32,61
	.sym	FX_BLOCK_DEVICE_DRIVER,0,10,14,808,61
	.sym	GETDRIVERDEF,0,8842,14,32,60
	.sym	PFX_DEVICE_DRIVER,0,138,14,32,60
	.sym	FX_DEVICE_DRIVER,0,10,14,776,60
	.sym	PSEGMENTHEADER,0,138,14,32,59
	.sym	SEGMENTHEADER,0,10,14,160,59
	.sym	PDEBUGBYTEBITS,0,138,14,32,58
	.sym	DEBUGBYTEBITS,0,10,14,8,58
	.sym	PFXENVIRONMENT,0,138,14,32,57
	.sym	FXENVIRONMENT,0,10,14,96,57
	.sym	PFXZEROPAGE,0,1153,14,32
	.sym	FRESULT,0,5,14,16
	.sym	MKFS_PARM,0,10,14,80,56
	.sym	FILINFO,0,10,14,2224,55
	.sym	DIR,0,10,14,416,54
	.sym	FIL,0,10,14,4400,53
	.sym	FFOBJID,0,10,14,128,52
	.sym	FATFS,0,10,14,4504,51
	.sym	LBA_t,0,18,14,32
	.sym	FSIZE_t,0,18,14,32
	.sym	TCHAR,0,14,14,8
	.sym	PIPCPORT,0,138,14,32,50
	.sym	IPCPORT,0,10,14,144,50
	.sym	PFXSTRING,0,138,14,32,49
	.sym	FXSTRING,0,10,14,64,49
	.sym	FOREACHNODEUNTIL,0,654,14,32
	.sym	FOREACHNODE,0,641,14,32
	.sym	PFXRFHEADER_STRING_ENTRY,0,138,14,32,48
	.sym	FXRFHEADER_STRING_ENTRY,0,10,14,40,48
	.sym	PFXRFHEADER_STRING,0,138,14,32,47
	.sym	FXRFHEADER_STRING,0,10,14,32,47
	.sym	PFXRFHEADER_FONT,0,138,14,32,46
	.sym	FXRFHEADER_FONT,0,10,14,144,46
	.sym	PFXRFHEADER,0,138,14,32,45
	.sym	FXRFHEADER,0,10,14,72,45
	.sym	PFXCOMBUFFER,0,138,14,32,44
	.sym	FXCOMBUFFER,0,10,14,2080,44
	.sym	PSUBMENULIST,0,138,14,32,43
	.sym	SUBMENULIST,0,10,14,40,43
	.sym	HSUBMENU,0,7,14,32
	.sym	PSUBMENU,0,138,14,32,42
	.sym	SUBMENU,0,10,14,64,42
	.sym	MenuAction,0,641,14,32
	.sym	PMENUANCHOR,0,138,14,32,41
	.sym	MENUANCHOR,0,10,14,272,41
	.sym	PMSGBOX,0,138,14,32,40
	.sym	MSGBOX,0,10,14,144,40
	.sym	PTEXTBOX,0,138,14,32,39
	.sym	TEXTBOX,0,10,14,144,39
	.sym	PLISTBOX,0,138,14,32,38
	.sym	LISTBOX,0,10,14,240,38
	.sym	PSCROLLBAR,0,138,14,32,37
	.sym	SCROLLBAR,0,10,14,240,37
	.sym	PBUTTON,0,138,14,32,36
	.sym	BUTTON,0,10,14,96,36
	.sym	PMENUDROPDOWNDATA,0,138,14,32,35
	.sym	MENUDROPDOWNDATA,0,10,14,5152,35
	.sym	PMENUTAG,0,138,14,32,34
	.sym	MENUTAG,0,10,14,160,34
	.sym	PMENU,0,138,14,32,33
	.sym	MENU,0,10,14,280,33
	.sym	HMENURESOURCE,0,129,14,32
	.sym	FONTMETRIC,0,10,14,32,32
	.sym	TITLE,0,142,14,32
	.sym	PHANDLE,0,1153,14,32
	.sym	HANDLE,0,129,14,32
	.sym	PWINDOWEX,0,138,14,32,31
	.sym	WINDOWEX,0,10,14,3880,31
	.sym	PWINDOW,0,138,14,32,30
	.sym	WINDOW,0,10,14,3904,30
	.sym	PDRAGDATA,0,138,14,32,29
	.sym	DRAGDATA,0,10,14,216,29
	.sym	PNCCLICKABLE,0,138,14,32,28
	.sym	NCCLICKABLE,0,10,14,136,28
	.sym	HCLICKABLE,0,7,14,32
	.sym	PCLICKABLE,0,138,14,32,27
	.sym	CLICKABLE,0,10,14,152,27
	.sym	PWNDCLASS,0,138,14,32,26
	.sym	WNDCLASS,0,10,14,272,26
	.sym	HBRUSH,0,129,14,32
	.sym	HCURSOR,0,129,14,32
	.sym	HICON,0,129,14,32
	.sym	HINSTANCE,0,129,14,32
	.sym	FXWndProc,0,654,14,32
	.sym	PDRECT,0,138,14,32,25
	.sym	DRECT,0,10,14,112,25
	.sym	PRECTP,0,138,14,32,24
	.sym	RECTP,0,10,14,96,24
	.sym	PRECT,0,138,14,32,23
	.sym	RECT,0,10,14,112,23
	.sym	PPOINT,0,138,14,32,22
	.sym	POINT,0,10,14,32,22
	.sym	PFXPROPERTY,0,138,14,32,20
	.sym	FXPROPERTY,0,10,14,384,20
	.sym	PKEYSTATE,0,138,14,32,19
	.sym	KEYSTATE,0,10,14,112,19
	.sym	SCANCODE,0,14,14,8
	.sym	KEYCODE,0,16,14,16
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
	.sym	FXCMDMESSAGE,0,10,14,312,14
	.sym	PFXOSMESSAGE,0,138,14,32,13
	.sym	FXOSMESSAGE,0,10,14,312,13
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
	.sym	HRESULT,0,18,14,32
	.sym	LPWCHAR,0,144,14,32
	.sym	WCHAR,0,16,14,16
	.sym	HSTRINGTABLE,0,129,14,32
	.sym	HCOLOR,0,129,14,32
	.sym	HFONT,0,129,14,32
	.sym	HDC,0,129,14,32
	.sym	HPOINTER,0,129,14,32
	.sym	uint32_t,0,18,14,32
	.sym	uint8_t,0,14,14,8
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
	.sym	IOPORT,0,142,14,32
	.sym	PUCHAR,0,142,14,32
	.sym	UCHAR,0,14,14,8
	.sym	LPWCSTR,0,142,14,32
	.sym	LPCSTR,0,142,14,32
	.sym	LPSTR,0,142,14,32
	.sym	LPCHAR,0,142,14,32
	.sym	CHAR,0,14,14,8
	.sym	PUINT_32,0,146,14,32
	.sym	UINT_32,0,18,14,32
	.sym	PUINT_16,0,144,14,32
	.sym	UINT_16,0,16,14,16
	.sym	PUINT_8,0,142,14,32
	.sym	UINT_8,0,14,14,8
	.sym	LPVOID,0,129,14,32
	.sym	VOID,0,1,14,32
	end
