#ifndef _FX_GUI
#define _FX_GUI


#include "fxfont.h"


extern CHAR FAR MOUSE_POINTER_ARROW[];
extern CHAR FAR MOUSE_POINTER_HELP[];
extern CHAR FAR MOUSE_POINTER_HOURGLASS[];
extern CHAR FAR MOUSE_POINTER_RESIZE[];


#define FONTW (k_font_getFontWidth())
#define FONTH (k_font_getFontHeight())

#define PRECTRIGHT(a)	(a->x + a->width  - 1)
#define PRECTBOTTOM(a)	(a->y + a->height - 1)

#define FILLCOLOR_TRANSPARENT	((UINT)0x00)

typedef void (*OBJECTCLICKED)(PWINDOW console);
typedef struct _click_detected
{
	PWINDOW window;
	OBJECTCLICKED handler;
}CLICKDETECTED;
typedef CLICKDETECTED FAR *PCLICKDETECTED;


#define HITTOWND(a)          (((PCLICKDETECTED)a->data)->window)
#define HITTOCLICKABLE(a)    ((PCLICKABLE)((PCLICKDETECTED)a->data)->window->clickable)


PMENU k_draw_menu(HMENU hMenu,int color, int bgcolor);

PMENU k_vdraw_ui_menu(int cx,int cy,int width,int height,LPCSTR title,int color, int bgcolor);
PMENU k_vdraw_ui_menu_ex(int cx,int cy,int width,int height,LPCSTR title,int color, int bgcolor,UINT page);
PMENU k_vdraw_ui_menu_with_rect(int cx,int cy,int width,int height,LPCSTR title,int color, int bgcolor,LPVOID *prects);
PMENU k_render_menu(PMENU menu);

typedef struct _current_palette_map
{
	INT CUR_DESKTOP;
	INT CUR_BACKGROUND;
	INT CUR_FONT;
	INT CUR_SELECTED_FONT;
	INT CUR_HIGHLIGHT_COLOR;
	INT CUR_WINDOWFRAME;
	INT CUR_WINDOWBORDER;
	INT CUR_WINDOWSHADOW;
	INT CUR_MENU;
	INT CUR_GADGET;
	INT CUR_COLOR[15];
}CUR_PALETTE_MAP;
typedef CUR_PALETTE_MAP FAR *PCUR_PALETTE_MAP;

int k_getUIBackgroundColor(VOID);
int k_getUIDesktopColor(VOID);
int k_getUIFontColor(VOID);
int k_getUIFontSelectedColor(VOID);
int k_getUIHighlightColor(VOID);
int k_getUIWindowFrameColor(VOID);
int k_getUIWindowBorderColor(VOID);
int k_getUIWindowShadowColor(VOID);
int k_getUIMenuColor(VOID);
int k_getUIGadgetColor(VOID);
int k_getUIColor(int index);

PRECT k_HWNDToWINRECT(HWND hWnd);
BOOL k_gui_size_nonclient_area(HWND hWnd);



void k_drawPixel(char fcolor,char fcolor2,char fcolor3);
void setFColors(void);
void setBColors(void);

void k_init_vicky(void);

void k_enable_text_mode(void);
void k_enable_bitmap_mode(void);

#define VIDEO_MODE_640X480	(0x01)
#define VIDEO_MODE_640X480D	(0x02)
#define VIDEO_MODE_800X600	(0x04)
#define VIDEO_MODE_800X600D	(0x08)
#define VIDEO_MODE_UNKNOWN	(0xFF)
UINT k_get_video_mode(void);

LONG k_gui_get_pixel_offset(int x,int y);
LONG k_gui_get_pixel_offset_width(int x,int y,int width);



void k_reboot(void);
void k_restore(void);
void k_init_mouse(void);
void k_init_graphics(void);

void k_gui_cache_desktop_widgets(void);
void k_init_desktop(PFXPROCESS process);

int k_get_cols_visible(void);
int k_get_cols_per_line(void);
int k_get_lines_visible(void);
int k_get_lines_max(void);

char FAR* k_pad_string(char FAR* dest,char FAR* src,char filler,int width);

void setColors(void);
void defineGrayPalette(void);

void k_copy_rect(PRECT psrc,PRECT pdst);
void k_set_rect(PRECT prect,int x,int y, int width,int height);
BOOL k_is_inside_rect(PRECT prect,int dx,int dy);
INT  k_is_overlapped_rect(PRECT r1,PRECT r2);
INT  k_is_overlapped_rect_points(PPOINT l1, PPOINT r1, PPOINT l2, PPOINT r2);

void k_shadow_bitblt(int x0, int y0, int width, int height, int x1, int y1);
void k_shadow_fill_rect(int x0, int y0, int width, int height, UCHAR color);
void k_shadow_fill_rect_address(LPCHAR bank,int x0, int y0, int width, int height, UCHAR color);
void k_scratch_save_bitblt(int x0, int y0, int width, int height, int x1, int y1);
void k_scratch_restore_bitblt(int x0, int y0, int width, int height, int x1, int y1);


void k_bitblt(int x0, int y0, int width, int height, int x1, int y1);

#define BLT_DIR_TOPDOWN  (1)
#define BLT_DIR_BOTTOMUP (-1)
void k_memory_bitblt(LPCHAR srcBank,int x0, int y0, int width, int height,LPCHAR destBank, int x1, int y1, int direction);

void k_draw_lines(void);

void k_draw_pixel(long x,long y,char pcolor);
void k_draw_pixel_ex(long x,long y,char pcolor,UINT page);

void k_draw_pixel_front(long x,long y,char pcolor);
void k_draw_pixel_back(long x,long y,char pcolor);
void k_draw_pixel_D0(long x,long y,char pcolor);



void k_draw_segments(int xc, int yc, int x, int y,int color);
void k_draw_circle(int xc, int yc, int r, int color);
void k_draw_filled_circle(int xc, int yc, int r, int color);
void k_draw_line(int x0, int y0, int x1, int y1,int color);
void k_draw_line_ex(int x0, int y0, int x1, int y1,int color,UINT page);
void k_draw_rect_slow(int left,int top, int right, int bottom, char color);
void k_draw_rect(int left,int top, int right, int bottom, char color,UINT brush,UINT page);
void k_draw_filled_rect(int cx,int cy,int height,int width,int color);

void k_vdraw_filled_rect(int cx,int cy,int height,int width,int color);

void k_paint_brush_rect(long x,long y,int width,int height,BYTE pattern);
void k_paint_brush_at_address(char FAR * pdst,int width,int height,BYTE pattern);


void k_fill_line(int cx,int cy,int width,int color);
void k_fill_bank(int bankId,char fcolor);

int k_font_index(char a);
void k_font_draw(char FAR *arg);
void k_put_font(char outChar,int row,int column,char textC);
void k_put_font_scaled(char outChar,int row,int column,char color,int scale);

int k_put_binary_font_point(LPCHAR fontSet, char outChar,int cx,int cy,char color);
int k_put_binary_variablefont_point(LPCHAR fontSet, char outChar,int cx,int cy,int width,int height,char color);
int k_put_binary_variablefont_point_ex(LPCHAR fontSet, char outChar,int cx,int cy,int width,int height,char color,UINT page);

int k_draw_text(char FAR *text,int row,int col,char color);
int k_draw_text_scaled(char FAR *text,int row,int col,char color,int scale);

int k_put_font_point(char outChar,int cx,int cy,char color);
int k_draw_text_point(LPCSTR text,int x,int y,char color);
int k_draw_text_point_ex(LPCSTR text,int x,int y,char color,UINT page);

int k_draw_text_point_with_font(LPCSTR text,LPCSTR charSet,int x,int y,char color);
int k_draw_text_point_with_font_ex(LPCSTR text,LPCSTR charSet,int x,int y,char color,UINT page);
int k_gui_DrawText(HWND hWnd,LPCSTR text,HFONT charSet,UINT style,PRECT prect,char color,UINT page);
#define DTS_LEFTJUSTIFY	 (0x00)
#define DTS_ELLIPSES	 (0x01)
#define DTS_RIGHTJUSTIFY (0x02)
#define DTS_NOCLIP 		 (0x08)

void k_draw_char_scaled_point(char charCode,int locX,int locY,char color,int scale);

int k_put_draw_text(int row,int col,LPSTR text,char color,char bcolor);
void k_draw_char(char charCode,int row,int column,char color);
void k_draw_fontset(void);

int k_get_font_metrics(FONTMETRIC FAR *metric);

void k_draw_char_scaled(char charCode,int row,int column,char color,int scale);

void k_render_bitmap_info(int fcolor);

// windowing
HANDLE k_create_window(int bx,int by,int bw,int bh,char FAR* title);
void k_window_draw_background(int bx,int by, int bw,int bh,char bcolor);

int k_put_wingadget_point(char iconCode,int cx,int cy,char color);
int k_put_wingadget_point_ex(char gadgetCode,int cx,int cy,char color,UINT page);
int k_gui_DrawWidget(HWND hWnd,UINT gadgetId,PRECT prect,UINT color,UINT page);

int k_put_winicon_point(char iconCode,int cx,int cy,int paletteId,int mode);
int k_put_winicon_point_ex(char iconCode,int cx,int cy,int paletteId,int mode,UINT page);
void k_put_winicon_scaled(char iconCode,int cx,int cy,char paletteId,int mode,int scale);

void k_draw_ui_window(int cx,int cy,int height,int width,char FAR *title,int color,int bgcolor);
void k_vdraw_ui_window(PWINDOW pWin,ULONG style,int cx,int cy,int height,int width,char FAR *title,int color,int bgcolor);
void k_vdraw_ui_window_ex(PWINDOW pWin,ULONG style,int cx,int cy,int height,int width,char FAR *title,int color, int bgcolor,UINT page);



void k_gui_DrawWindow(HWND hWnd,int color, int bgcolor);
void k_vdraw_ui_window_2(PWINDOW pWin,ULONG style,int cx,int cy,int height,int width,char FAR *title,int color, int bgcolor,UINT page);


LPVOID k_gui_get_title_cache(HANDLE hTitle);
HANDLE k_gui_build_title_cache(LPSTR lpstrTitle);


void k_vdma_move_rect(long x,long y,int width,int height,int dx,int dy,unsigned char pcolor,UINT page);
void k_vdma_fill(char FAR * pdst,long size,unsigned char data);
void k_vdma_fill_address(char FAR * pdst,int width,int height,unsigned char data);
void k_vdma_fill_rect(long x,long y,int width,int height,unsigned char data);

#define BITMAP_FRONT   (0x00)
//#define BITMAP_BACK    (0x10)
#define BITMAP_BACK    (0x08)
#define BITMAP_PAGE1   (0x20)
#define BITMAP_PAGE2   (0x30)
#define BITMAP_PAGE3   (0x40)

#define BITMAP_NOBRUSH (0x00)

void k_vdma_fill_rect_ex(long x,long y,int width,int height,unsigned char pcolor,UINT page);
void k_vdma_fill_address_ex(char FAR * pdst,int width,int height,unsigned char data,UINT page);
void k_vdma_copy_address_ex(char FAR * pdst,char FAR * psrc,int width,int height);

int k_point_in_list_depth(int x,int y,PCLICKABLE clickableList,int cSize);
int k_point_in_list(int x,int y,PCLICKABLE clickableList,int cSize);
PMENU k_create_context_menu(int cx,int cy,int width,int height,char FAR **captions,int color, int bgcolor);

PMENU k_create_context_menu_in_window(PWINDOW pWin,UINT selected,UINT unselected,int cx,int cy,int width,int height,char FAR **captions,int color, int bgcolor);
PMENU k_create_context_menu_in_window_ex(PWINDOW pWin,UINT selected,UINT unselected,int cx,int cy,int width,int height,char FAR **captions,char FAR *chrome,int color, int bgcolor);

PMENU k_create_context_menus(PWINDOW pWin,int cx,int cy,int width,int height,PMENUDROPDOWNDATA menus,int color, int bgcolor);
PMENU k_render_context_menu(PMENU menu);
void k_free_context_menu(PMENU pmenu,char fcolor,char bcolor);


PFXNODE k_point_in_nodes(int x,int y);
void k_add_window_hit_node(PCLICKDETECTED pcd);


PWINDOW k_create_ui_window_class(int cx,int cy,int height,int width,LPCHAR title,LPCHAR className,FXWndProc wndProc);


int k_render_wingadget(char gadgetCode,int cx,int cy,char color,OBJECTCLICKED callback);
void k_gadget_title_front_callback(PWINDOW gadgetWindow);
void k_gadget_title_back_callback(PWINDOW gadgetWindow);



//extern void pascal init_sd_card(void);
void sd_card_dir(void);


UINT k_font_getFontHeight(void);
UINT k_font_getFontWidth(void);

//
// official API naming convention functions
//
VOID k_gui_init_mousepointer(BOOL enable);
VOID k_gui_set_mousepointer(UINT index,LPVOID pointerData);
VOID k_set_text_colors(VOID);

VOID k_gui_init_image_cache_slot(VOID);
UINT k_gui_alloc_image_cache_slot(VOID);
VOID k_gui_free_image_cache_slot(UINT slotIndex);
UINT k_gui_set_image_cache(ULONG srcVMARelPage,PRECT prect);
BOOL k_gui_get_image_cache(UINT index,ULONG destVMARelPage,PRECT prect);


#define CHKLIST_MAX 	(6)
extern CLICKABLE FAR clickList[CHKLIST_MAX];
extern PCLICKABLE FAR hitList[CHKLIST_MAX];

extern char FAR buffer[32];
extern char FAR strbuf[32];
extern char FAR spinner[];
extern char FAR titles[3][10];

extern char FAR *version_title;

extern int g_key_index;


extern char FAR *p_message1;
extern char FAR *p_message2;

//extern C256Task tasks[2];
//extern HANDLE consoles[2];

PRECT k_new_RECT(LPCSTR name, int x,int y,int width,int height, int z, int scaler);
PRECTP k_new_RECTP(LPCSTR name, int x,int y,int width,int height);
VOID k_ToRECT(PRECTP prectp,PRECT prect,LPCSTR name);
VOID k_ToRECTP(PRECT pr,PRECTP prectp);



#endif
