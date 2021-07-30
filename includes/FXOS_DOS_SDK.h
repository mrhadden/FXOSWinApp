/*
 * FXOS_DOS_SDK.h
 * Created Jul 29, 2021 10:49:43 PM
 *
 */

#ifndef FXOS_DOS_SDK_H_
#define FXOS_DOS_SDK_H_

#include "fxtypes.h"


/*
*
* Name:FileOpen
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILEOPEN)(FIL*,const TCHAR*,BYTE);
HRESULT FileOpen(FIL* fp,const TCHAR* path,BYTE mode);

/*
*
* Name:FileClose
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILECLOSE)(FIL*);
HRESULT FileClose(FIL* fp);

/*
*
* Name:FileRead
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILEREAD)(FIL*,void*,UINT,UINT*);
HRESULT FileRead(FIL* fp,void* buff,UINT btr,UINT* br);

/*
*
* Name:FileWrite
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILEWRITE)(FIL*,const void*,UINT,UINT*);
HRESULT FileWrite(FIL* fp,const void* buff,UINT btw,UINT* bw);

/*
*
* Name:FileSeek
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILESEEK)(FIL*,FSIZE_t);
HRESULT FileSeek(FIL* fp,FSIZE_t ofs);

/*
*
* Name:DirOpen
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*DIROPEN)(DIR*,const TCHAR*);
HRESULT DirOpen(DIR* dp,const TCHAR* path);

/*
*
* Name:DirClose
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*DIRCLOSE)(DIR*);
HRESULT DirClose(DIR* dp);

/*
*
* Name:FileFindFirst
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILEFINDFIRST)(DIR*,FILINFO*,const TCHAR*,const TCHAR*);
HRESULT FileFindFirst(DIR* dp,FILINFO* fno,const TCHAR* path,const TCHAR* pattern);

/*
*
* Name:FileFindNext
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILEFINDNEXT)(DIR*,FILINFO*);
HRESULT FileFindNext(DIR* dp,FILINFO* fno);

/*
*
* Name:DirCreate
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*DIRCREATE)(const TCHAR*);
HRESULT DirCreate(const TCHAR* path);

/*
*
* Name:FileDelete
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILEDELETE)(const TCHAR*);
HRESULT FileDelete(const TCHAR* path);

/*
*
* Name:FileRename
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILERENAME)(const TCHAR*,const TCHAR*);
HRESULT FileRename(const TCHAR* path_old,const TCHAR* path_new);

/*
*
* Name:FileGetFreeSpace
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILEGETFREESPACE)(const TCHAR*,DWORD*,FATFS**);
HRESULT FileGetFreeSpace(const TCHAR* path,DWORD* nclst,FATFS** fatfs);

/*
*
* Name:VolumeGetLabel
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*VOLUMEGETLABEL)(const TCHAR*,TCHAR*,DWORD*);
HRESULT VolumeGetLabel(const TCHAR* path,TCHAR* label,DWORD* vsn);

/*
*
* Name:VolumeSetLabel
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*VOLUMESETLABEL)(const TCHAR*);
HRESULT VolumeSetLabel(const TCHAR* label);


#endif