/*
 * FXOS_DOS_SDK.h
 * Created Oct 14, 2021 1:43:24 PM
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
typedef FILE (*FILEOPEN)(LPCSTR,BYTE);
FILE FileOpen(LPCSTR path,BYTE mode);

/*
*
* Name:FileClose
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILECLOSE)(FILE);
HRESULT FileClose(FILE file);

/*
*
* Name:FileRead
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILEREAD)(FILE,void*,UINT,UINT*);
HRESULT FileRead(FILE fp,void* buff,UINT btr,UINT* br);

/*
*
* Name:FileWrite
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILEWRITE)(FILE,const void*,UINT,UINT*);
HRESULT FileWrite(FILE fp,const void* buff,UINT btw,UINT* bw);

/*
*
* Name:FileSeek
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILESEEK)(FILE,FSIZE_t);
HRESULT FileSeek(FILE fp,FSIZE_t ofs);

/*
*
* Name:FileTruncate
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILETRUNCATE)(FILE);
HRESULT FileTruncate(FILE fp);

/*
*
* Name:DirOpen
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef DIRECTORY (*DIROPEN)(LPCSTR);
DIRECTORY DirOpen(LPCSTR path);

/*
*
* Name:DirClose
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*DIRCLOSE)(DIRECTORY);
HRESULT DirClose(DIRECTORY dp);

/*
*
* Name:FileFindFirst
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILEFINDFIRST)(DIRECTORY,FILINFO*,const TCHAR*,const TCHAR*);
HRESULT FileFindFirst(DIRECTORY dp,FILINFO* fno,const TCHAR* path,const TCHAR* pattern);

/*
*
* Name:FileFindNext
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILEFINDNEXT)(DIRECTORY,FILINFO*);
HRESULT FileFindNext(DIRECTORY dp,FILINFO* fno);

/*
*
* Name:DirCreate
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*DIRCREATE)(LPCSTR);
HRESULT DirCreate(LPCSTR path);

/*
*
* Name:FileDelete
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILEDELETE)(LPCSTR);
HRESULT FileDelete(LPCSTR path);

/*
*
* Name:FileRename
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILERENAME)(LPCSTR,LPCSTR);
HRESULT FileRename(LPCSTR path_old,LPCSTR path_new);

/*
*
* Name:FileGetFreeSpace
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*FILEGETFREESPACE)(LPCSTR,DWORD*,FATFS**);
HRESULT FileGetFreeSpace(LPCSTR path,DWORD* nclst,FATFS** fatfs);

/*
*
* Name:VolumeGetLabel
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*VOLUMEGETLABEL)(LPCSTR,TCHAR*,DWORD*);
HRESULT VolumeGetLabel(LPCSTR path,TCHAR* label,DWORD* vsn);

/*
*
* Name:VolumeSetLabel
* Subsystem:DOS
* Description: 
* Arguments: 
*
*/
typedef HRESULT (*VOLUMESETLABEL)(LPCSTR);
HRESULT VolumeSetLabel(LPCSTR label);


#endif