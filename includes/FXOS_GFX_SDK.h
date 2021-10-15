/*
 * FXOS_GFX_SDK.h
 * Created Oct 14, 2021 1:43:24 PM
 *
 */

#ifndef FXOS_GFX_SDK_H_
#define FXOS_GFX_SDK_H_

#include "fxtypes.h"


/*
*
* Name:DrawMenu
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef PMENU (*DRAWMENU)(HMENU,int,int);
PMENU DrawMenu(HMENU hMenu,int color,int bgcolor);

/*
*
* Name:GetUIBackgroundColor
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*GETUIBACKGROUNDCOLOR)(VOID);
int GetUIBackgroundColor(VOID);

/*
*
* Name:GetUIDesktopColor
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*GETUIDESKTOPCOLOR)(VOID);
int GetUIDesktopColor(VOID);

/*
*
* Name:GetUIFontColor
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*GETUIFONTCOLOR)(VOID);
int GetUIFontColor(VOID);

/*
*
* Name:GetUISelectedColor
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*GETUISELECTEDCOLOR)(VOID);
int GetUISelectedColor(VOID);

/*
*
* Name:GetUIHighlightColor
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*GETUIHIGHLIGHTCOLOR)(VOID);
int GetUIHighlightColor(VOID);

/*
*
* Name:GetUIWindowFrameColor
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*GETUIWINDOWFRAMECOLOR)(VOID);
int GetUIWindowFrameColor(VOID);

/*
*
* Name:GetUIWindowBorderColor
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*GETUIWINDOWBORDERCOLOR)(VOID);
int GetUIWindowBorderColor(VOID);

/*
*
* Name:GetUIWindowShadeColor
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*GETUIWINDOWSHADECOLOR)(VOID);
int GetUIWindowShadeColor(VOID);

/*
*
* Name:GetUIMenuColor
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*GETUIMENUCOLOR)(VOID);
int GetUIMenuColor(VOID);

/*
*
* Name:GetUIGadgetColor
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*GETUIGADGETCOLOR)(VOID);
int GetUIGadgetColor(VOID);

/*
*
* Name:GetUIColorMetric
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*GETUICOLORMETRIC)(int);
int GetUIColorMetric(int index);

/*
*
* Name:HwndToRect
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef PRECT (*HWNDTORECT)(HWND);
PRECT HwndToRect(HWND hWnd);

/*
*
* Name:EnableTextMode
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*ENABLETEXTMODE)(void);
void EnableTextMode(VOID);

/*
*
* Name:EnableBitmapMode
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*ENABLEBITMAPMODE)(void);
void EnableBitmapMode(VOID);

/*
*
* Name:GetVideoMode
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef UINT (*GETVIDEOMODE)(void);
UINT GetVideoMode(VOID);

/*
*
* Name:GetPixelOffset
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef LONG (*GETPIXELOFFSET)(int,int);
LONG GetPixelOffset(int x,int y);

/*
*
* Name:GetPixelWidth
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef LONG (*GETPIXELWIDTH)(int,int,int);
LONG GetPixelWidth(int x,int y,int width);

/*
*
* Name:SetDefaultColors
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*SETDEFAULTCOLORS)(void);
void SetDefaultColors(VOID);

/*
*
* Name:GFXCopyRect
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*GFXCOPYRECT)(PRECT,PRECT);
void GFXCopyRect(PRECT psrc,PRECT pdst);

/*
*
* Name:GFXSetRect
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*GFXSETRECT)(PRECT,int,int,int,int);
void GFXSetRect(PRECT prect,int x,int y,int width,int height);

/*
*
* Name:GFXRectInside
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef BOOL (*GFXRECTINSIDE)(PRECT,int,int);
BOOL GFXRectInside(PRECT prect,int dx,int dy);

/*
*
* Name:GFXRectOverlapped
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef INT (*GFXRECTOVERLAPPED)(PRECT,PRECT);
INT GFXRectOverlapped(PRECT r1,PRECT r2);

/*
*
* Name:GFXRectOverlappedPoint
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef INT (*GFXRECTOVERLAPPEDPOINT)(PPOINT,PPOINT,PPOINT,PPOINT);
INT GFXRectOverlappedPoint(PPOINT l1,PPOINT r1,PPOINT l2,PPOINT r2);

/*
*
* Name:GFXBitBlt
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*GFXBITBLT)(int,int,int,int,int,int);
void GFXBitBlt(int x0,int y0,int width,int height,int x1,int y1);

/*
*
* Name:GFXBankBitBlt
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*GFXBANKBITBLT)(LPCHAR,int,int,int,int,LPCHAR,int,int,int);
void GFXBankBitBlt(LPCHAR srcBank,int x0,int y0,int width,int height,LPCHAR destBank,int x1,int y1,int direction);

/*
*
* Name:DrawPixel
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWPIXEL)(long,long,char);
void DrawPixel(long x,long y,char pcolor);

/*
*
* Name:DrawPixelEx
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWPIXELEX)(long,long,char,UINT);
void DrawPixelEx(long x,long y,char pcolor,UINT page);

/*
*
* Name:DrawClippedPixel
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWCLIPPEDPIXEL)(PRECT,long,long,char,char);
void DrawClippedPixel(PRECT prect,long x,long y,char pcolor,char mode);

/*
*
* Name:DrawClippedPixelEx
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWCLIPPEDPIXELEX)(PRECT,long,long,char,char);
void DrawClippedPixelEx(PRECT prect,long x,long y,char pcolor,char mode);

/*
*
* Name:DrawPixelFront
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWPIXELFRONT)(long,long,char);
void DrawPixelFront(long x,long y,char pcolor);

/*
*
* Name:DrawPixelFrontEx
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWPIXELFRONTEX)(long,long,char);
void DrawPixelFrontEx(long x,long y,char pcolor);

/*
*
* Name:DrawPixelBackEx
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWPIXELBACKEX)(long,long,char);
void DrawPixelBackEx(long x,long y,char pcolor);

/*
*
* Name:DrawPixelBack
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWPIXELBACK)(long,long,char);
void DrawPixelBack(long x,long y,char pcolor);

/*
*
* Name:DrawPixelBank
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWPIXELBANK)(long,long,char);
void DrawPixelBank(long x,long y,char pcolor);

/*
*
* Name:DrawSegments
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWSEGMENTS)(int,int,int,int,int);
void DrawSegments(int xc,int yc,int x,int y,int color);

/*
*
* Name:DrawCircle
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWCIRCLE)(int,int,int,int);
void DrawCircle(int xc,int yc,int r,int color);

/*
*
* Name:DrawFilledCircle
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWFILLEDCIRCLE)(int,int,int,int);
void DrawFilledCircle(int xc,int yc,int r,int color);

/*
*
* Name:DrawLine
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWLINE)(int,int,int,int,int);
void DrawLine(int x0,int y0,int x1,int y1,int color);

/*
*
* Name:DrawLineEx
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWLINEEX)(int,int,int,int,int,UINT);
void DrawLineEx(int x0,int y0,int x1,int y1,int color,UINT page);

/*
*
* Name:DrawRectangle
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWRECTANGLE)(int,int,int,int,char,UINT,UINT);
void DrawRectangle(int left,int top,int right,int bottom,char color,UINT brush,UINT page);

/*
*
* Name:DrawFilledRectangle
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWFILLEDRECTANGLE)(int,int,int,int,int);
void DrawFilledRectangle(int cx,int cy,int height,int width,int color);

/*
*
* Name:DrawTextWithFont
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*DRAWTEXTWITHFONT)(LPCSTR,LPCSTR,int,int,char);
int DrawTextWithFont(LPCSTR text,LPCSTR charSet,int x,int y,char color);

/*
*
* Name:DrawTextWithFontEx
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*DRAWTEXTWITHFONTEX)(LPCSTR,LPCSTR,int,int,char,UINT);
int DrawTextWithFontEx(LPCSTR text,LPCSTR charSet,int x,int y,char color,UINT page);

/*
*
* Name:GetFontMetrics
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*GETFONTMETRICS)(FONTMETRIC*);
int GetFontMetrics(FONTMETRIC* metric);

/*
*
* Name:DrawTextScaled
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWTEXTSCALED)(char,int,int,char,int);
void DrawTextScaled(char charCode,int row,int column,char color,int scale);

/*
*
* Name:DrawWindowGadget
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*DRAWWINDOWGADGET)(char,int,int,char);
int DrawWindowGadget(char iconCode,int cx,int cy,char color);

/*
*
* Name:DrawWindowGadgetEx
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*DRAWWINDOWGADGETEX)(char,int,int,char,UINT);
int DrawWindowGadgetEx(char gadgetCode,int cx,int cy,char color,UINT page);

/*
*
* Name:DrawWindowWidget
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*DRAWWINDOWWIDGET)(HWND,UINT,PRECT,UINT,UINT);
int DrawWindowWidget(HWND hWnd,UINT gadgetId,PRECT prect,UINT color,UINT page);

/*
*
* Name:DrawWindowIcon
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*DRAWWINDOWICON)(char,int,int,int,int);
int DrawWindowIcon(char iconCode,int cx,int cy,int paletteId,int mode);

/*
*
* Name:DrawWindowIconEx
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef int (*DRAWWINDOWICONEX)(char,int,int,int,int,UINT);
int DrawWindowIconEx(char iconCode,int cx,int cy,int paletteId,int mode,UINT page);

/*
*
* Name:DrawWindowIconScaled
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef void (*DRAWWINDOWICONSCALED)(char,int,int,char,int,int);
void DrawWindowIconScaled(char iconCode,int cx,int cy,char paletteId,int mode,int scale);

/*
*
* Name:GetFontHeight
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef UINT (*GETFONTHEIGHT)(void);
UINT GetFontHeight(VOID);

/*
*
* Name:GetFontWidth
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef UINT (*GETFONTWIDTH)(void);
UINT GetFontWidth(VOID);

/*
*
* Name:MousePointerInit
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef VOID (*MOUSEPOINTERINIT)(BOOL);
VOID MousePointerInit(BOOL enable);

/*
*
* Name:SetMousePointerData
* Subsystem:GFX
* Description: 
* Arguments: 
*
*/
typedef VOID (*SETMOUSEPOINTERDATA)(UINT,LPVOID);
VOID SetMousePointerData(UINT index,LPVOID pointerData);


#endif