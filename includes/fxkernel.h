
#ifndef __FX_KERNEL_
#define __FX_KERNEL_

#include "fxtypes.h"

#define VERSION_MAX_LENGTH	(2)
#define ENDIAN_LITTLE	    (0)
#define ENDIAN_BIG	    	(1)

typedef LPVOID FAR* PFXZEROPAGE;

#define	FXOS_CALLTABLES		(5)

#define	API_CALLTABLE_KERNEL_IDX	(0)
#define	API_CALLTABLE_DOS_IDX		(1)
#define	API_CALLTABLE_GFX_IDX		(2)
#define	API_CALLTABLE_GUI_IDX		(3)
#define API_CALLTABLE_CON_IDX		(4)

VOID _k_initialize_call_table(PFXZEROPAGE pzp,UINT tableType);

#define CALL_KERNEL_API(a)	((PFXZEROPAGE)(ZEROPAGE))->fxos_kernel_api->call_table[a]
#define CALL_DOS_API(a)	    ((PFXZEROPAGE)(ZEROPAGE))->fxos_dos_api->call_table[a]
#define CALL_GFX_API(a)	    ((PFXZEROPAGE)(ZEROPAGE))->fxos_gfx_api->call_table[a]
#define CALL_GUI_API(a)	    ((PFXZEROPAGE)(ZEROPAGE))->fxos_gui_api->call_table[a]
#define CALL_CON_API(a)	    ((PFXZEROPAGE)(ZEROPAGE))->fxos_con_api->call_table[a]



//
//
// Legacy Entries that need to be removed and reference ZP definition
//
//
#define ZP_ENTRY(a)               (((PFXZEROPAGE)ZEROPAGE)->a)


#define FXOS_MOUSE_BYTE		 	  ((char FAR*)ZEROPAGE)
#define FXOS_MOUSE_BYTE_0		  (((char FAR*)ZEROPAGE)[0])
#define FXOS_MOUSE_BYTE_1		  (((char FAR*)ZEROPAGE +  1L)[0])
#define FXOS_MOUSE_BYTE_2		  (((char FAR*)ZEROPAGE +  2L)[0])
#define FXOS_MOUSE_BYTE_T		  (((char FAR*)ZEROPAGE +  3L)[0])
#define FXOS_MOUSE_BYTE_X_L		  (((char FAR*)ZEROPAGE +  4L)[0])
#define FXOS_MOUSE_BYTE_X_H		  (((char FAR*)ZEROPAGE +  5L)[0])
#define FXOS_MOUSE_BYTE_Y_L		  (((char FAR*)ZEROPAGE +  6L)[0])
#define FXOS_MOUSE_BYTE_Y_H		  (((char FAR*)ZEROPAGE +  7L)[0])

#define FXOS_KEY_BYTE 		  	  ((unsigned char FAR*)ZEROPAGE  +  8L)
#define FXOS_KEY_BYTE_0		  	  (((unsigned char FAR*)ZEROPAGE +  8L)[0])
#define FXOS_KEY_BYTE_1		      (((unsigned char FAR*)ZEROPAGE +  9L)[0])
#define FXOS_KEY_BYTE_2		      (((unsigned char FAR*)ZEROPAGE + 10L)[0])

#define FXOS_MOUSE_CTL			  (((unsigned char FAR*)ZEROPAGE + 11L)[0])
#define FXOS_MOUSE_INDEX   		  (((unsigned char FAR*)ZEROPAGE + 12L)[0])
#define FXOS_MOUSE_STATUS		  (((unsigned char FAR*)ZEROPAGE + 13L)[0])


typedef struct _fx_environment
{
	char FAR* variables;
	int reserved1;
	int reserved2;
	int reserved3;
	int reserved4;
}FXENVIRONMENT;
typedef FXENVIRONMENT FAR* PFXENVIRONMENT;

typedef struct _debug_byte_bits
{
    UCHAR bit7 : 1;
    UCHAR bit6 : 1;
    UCHAR bit5 : 1;
    UCHAR bit4 : 1;
    UCHAR bit3 : 1;
    UCHAR bit2 : 1;
    UCHAR bit1 : 1;
    UCHAR bit0 : 1;
}DEBUGBYTEBITS;
typedef DEBUGBYTEBITS FAR* PDEBUGBYTEBITS;


typedef struct _k_segmentheader
{
	BYTE	version_major;
	BYTE	version_minor;
	INT     length;
	LONG	segment_start_addr;
	LONG	segment_end_addr;
	LONG	segment_size;
	LONG	main_entry_addr;
}SEGMENTHEADER;
typedef SEGMENTHEADER FAR* PSEGMENTHEADER;



#define DRIVER_TYPE_CONSOLE  (0x00)
#define DRIVER_TYPE_MOUSE    (0x01)
#define DRIVER_TYPE_COM1     (0x02)
#define DRIVER_TYPE_COM2     (0x03)
#define DRIVER_TYPE_DIP      (0x04)
#define DRIVER_TYPE_KEYBOARD (0x05)
#define DRIVER_TYPE_SDCARD	 (0x06)
#define DRIVER_TYPE_FD		 (0x07)
#define DRIVER_TYPE_IDE		 (0x08)

#define DRIVER_TYPE_TIM0	 (0x09)
#define DRIVER_TYPE_TIM1	 (0x0A)
#define DRIVER_TYPE_TIM2	 (0x0B)
#define DRIVER_TYPE_SOL		 (0x0C)
#define DRIVER_TYPE_RTC		 (0x0D)
#define DRIVER_TYPE_PS2		 (0x0E)

#define DRIVER_TYPE_SOUND	 (0xA0)

#define DRIVER_TYPE_EXT_0    (0xE0)
#define DRIVER_TYPE_EXT_1    (0xE1)
#define DRIVER_TYPE_EXT_2    (0xE2)
#define DRIVER_TYPE_EXT_3    (0xE3)
#define DRIVER_TYPE_EXT_4    (0xE4)
#define DRIVER_TYPE_EXT_5    (0xE5)
#define DRIVER_TYPE_EXT_6    (0xE6)
#define DRIVER_TYPE_EXT_7    (0xE7)
#define DRIVER_TYPE_EXT_8    (0xE8)
#define DRIVER_TYPE_EXT_9    (0xE9)
#define DRIVER_TYPE_EXT_10   (0xEA)
#define DRIVER_TYPE_EXT_11   (0xEB)
#define DRIVER_TYPE_EXT_13   (0xEC)
#define DRIVER_TYPE_EXT_14   (0xED)
#define DRIVER_TYPE_EXT_15   (0xEE)
#define DRIVER_TYPE_EXT_16   (0xEF)

#define DRIVER_TYPE_EXTENDED (0xF0)
#define DRIVER_TYPE_UNIMPL   (0xFF)

typedef struct _fx_device_driver
{
	CHAR    name[32];
	CHAR    version[16];
	CHAR    hmajor[8];
	CHAR    hminor[8];
	BYTE    type;
	CHAR	designation[6];
	UINT	irq_ctl;
	LPVOID	f_driver_irq;
	LPVOID  driver_context;
	LPVOID  f_driver_load;
	LPVOID  f_driver_read;
	LPVOID  f_driver_write;
	LPVOID  f_driver_unload;
}FX_DEVICE_DRIVER;
typedef FX_DEVICE_DRIVER FAR* PFX_DEVICE_DRIVER;

typedef PFX_DEVICE_DRIVER (*GETDRIVERDEF)(LPCSTR ,LPCSTR );

typedef struct _fx_block_device_driver
{
	CHAR    name[32];
	CHAR    version[16];
	CHAR    hmajor[8];
	CHAR    hminor[8];
	BYTE    type;
	CHAR	designation[6];
	UINT	irq_ctl;
	LPVOID	f_driver_irq;
	LPVOID  driver_context;
	LPVOID  f_driver_load;
	LPVOID  f_driver_read;
	LPVOID  f_driver_write;
	LPVOID  f_driver_unload;
	LPVOID  f_driver_command;
}FX_BLOCK_DEVICE_DRIVER;
typedef FX_BLOCK_DEVICE_DRIVER FAR* PFX_BLOCK_DEVICE_DRIVER;



typedef VOID (*DEVICEDRIVER_IRQ)(VOID);
typedef BOOL (*DEVICEDRIVER_LOAD)(VOID);
typedef UINT (*DEVICEDRIVER_READ)(ULONG offset,LPVOID buffer);
typedef UINT (*DEVICEDRIVER_WRITE)(UINT size,LPVOID buffer);
typedef BOOL (*DEVICEDRIVER_UNLOAD)(VOID);
typedef UINT (*DEVICEDRIVER_COMMAND)(UINT command,LPVOID buffer);

typedef struct _k_irq_chain
{
	DEVICEDRIVER_IRQ handlers[4];
}IRQCHAIN;
typedef IRQCHAIN FAR *PIRQCHAIN;



#endif
