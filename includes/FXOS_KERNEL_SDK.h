/*
 * FXOS_KERNEL_SDK.h
 * Created Oct 14, 2021 1:43:24 PM
 *
 */

#ifndef FXOS_KERNEL_SDK_H_
#define FXOS_KERNEL_SDK_H_

#include "fxtypes.h"


/*
*
* Name:SendMessage
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*SENDMESSAGE)(LPVOID,MSGTYPE,LPVOID,UINT);
BOOL SendMessage(LPVOID queueName,MSGTYPE msgType,LPVOID pmsgData,UINT size);

/*
*
* Name:SendWindowMessage
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*SENDWINDOWMESSAGE)(HWND,MSGTYPE,LPVOID,UINT);
BOOL SendWindowMessage(HWND hWnd,MSGTYPE msgType,LPVOID pmsgData,UINT size);

/*
*
* Name:SendCommandMessage
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*SENDCOMMANDMESSAGE)(HWND,MSGTYPE,UINT,UINT,ULONG,ULONG);
BOOL SendCommandMessage(HWND hWnd,MSGTYPE msgType,UINT cmdCId,UINT cmdMId,ULONG pData1,ULONG pData2);

/*
*
* Name:SendProcessMessage
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*SENDPROCESSMESSAGE)(PFXPROCESS,MSGTYPE,UINT,UINT,ULONG,ULONG);
BOOL SendProcessMessage(PFXPROCESS process,MSGTYPE msgType,UINT cmdCId,UINT cmdMId,ULONG pData1,ULONG pData2);

/*
*
* Name:RegisterIdleProc
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef HANDLE (*REGISTERIDLEPROC)(FXIDLEPROCESS,UINT);
HANDLE RegisterIdleProc(FXIDLEPROCESS idleProc,UINT resolution);

/*
*
* Name:UnregisterIdleProc
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*UNREGISTERIDLEPROC)(HANDLE);
BOOL UnregisterIdleProc(HANDLE hIdleProc);

/*
*
* Name:RaiseException
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*RAISEEXCEPTION)(LPVOID,ULONG,LPVOID,UINT);
VOID RaiseException(LPVOID ctxId,ULONG errorId,LPVOID exceptionMessage,UINT exMsgSize);

/*
*
* Name:GetProcess
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXPROCESS (*GETPROCESS)(PROCESS_ID);
PFXPROCESS GetProcess(PROCESS_ID procId);

/*
*
* Name:GetProcessByName
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXPROCESS (*GETPROCESSBYNAME)(LPCSTR);
PFXPROCESS GetProcessByName(LPCSTR processName);

/*
*
* Name:GetProcessList
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXPROCESS* (*GETPROCESSLIST)(void);
PFXPROCESS* GetProcessList(VOID);

/*
*
* Name:LaunchProcess
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXPROCESS (*LAUNCHPROCESS)(LPCHAR);
PFXPROCESS LaunchProcess(LPCHAR commandLine);

/*
*
* Name:CreateProcess
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXPROCESS (*CREATEPROCESS)(LPCHAR);
PFXPROCESS CreateProcess(LPCHAR commandLine);

/*
*
* Name:GetCurrentProcess
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXPROCESS (*GETCURRENTPROCESS)(void);
PFXPROCESS GetCurrentProcess(VOID);

/*
*
* Name:ProcessSleep
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*PROCESSSLEEP)(PROCESS_ID);
BOOL ProcessSleep(PROCESS_ID processId);

/*
*
* Name:ProcessTerminate
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*PROCESSTERMINATE)(PROCESS_ID);
BOOL ProcessTerminate(PROCESS_ID processId);

/*
*
* Name:ProcessStart
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*PROCESSSTART)(PROCESS_ID);
BOOL ProcessStart(PROCESS_ID processId);

/*
*
* Name:ProcessWait
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*PROCESSWAIT)(PROCESS_ID,PPROCESS_SIGNAL);
BOOL ProcessWait(PROCESS_ID processId,PPROCESS_SIGNAL signal);

/*
*
* Name:ProcessSignal
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*PROCESSSIGNAL)(PROCESS_ID,UINT);
BOOL ProcessSignal(PROCESS_ID processId,UINT signal);

/*
*
* Name:DebugOut
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGOUT)(char*);
void DebugOut(char* debugString);

/*
*
* Name:DebugNString
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGNSTRING)(char*,int);
void DebugNString(char* debugString,int nsize);

/*
*
* Name:DebugChar
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGCHAR)(char*,UCHAR);
void DebugChar(char* debugString,UCHAR n);

/*
*
* Name:DebugPointer
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGPOINTER)(char*,void*);
void DebugPointer(char* debugString,void* p);

/*
*
* Name:DebugInteger
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGINTEGER)(char*,UINT);
void DebugInteger(char* debugString,UINT n);

/*
*
* Name:DebugHexInteger
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGHEXINTEGER)(char*,UINT);
void DebugHexInteger(char* debugString,UINT n);

/*
*
* Name:DebugIntegerArray
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGINTEGERARRAY)(char*,UINT*,UINT);
void DebugIntegerArray(char* debugString,UINT* n,UINT size);

/*
*
* Name:DebugLong
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGLONG)(char*,ULONG);
void DebugLong(char* debugString,ULONG n);

/*
*
* Name:DebugHex
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGHEX)(LPSTR,UCHAR);
void DebugHex(LPSTR debugString,UCHAR n);

/*
*
* Name:DebugHexChar
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGHEXCHAR)(LPSTR,UCHAR);
void DebugHexChar(LPSTR debugString,UCHAR n);

/*
*
* Name:DebugBits
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGBITS)(LPSTR,UCHAR);
void DebugBits(LPSTR debugString,UCHAR n);

/*
*
* Name:DebugByteArray
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGBYTEARRAY)(char*,BYTE*,ULONG);
void DebugByteArray(char* debugString,BYTE* n,ULONG size);

/*
*
* Name:DebugMessage
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGMESSAGE)(char*,char*);
void DebugMessage(char* debugString,char* message);

/*
*
* Name:DebugStrings
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGSTRINGS)(char*,char*);
void DebugStrings(char* debugString,char* message);

/*
*
* Name:DebugNMessage
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGNMESSAGE)(char*,char*,UINT);
void DebugNMessage(char* debugString,char* message,UINT size);

/*
*
* Name:DebugNStrings
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGNSTRINGS)(char*,char*,UINT);
void DebugNStrings(char* debugString,char* message,UINT size);

/*
*
* Name:DebugRect
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGRECT)(LPCSTR,PRECT);
void DebugRect(LPCSTR message,PRECT prect);

/*
*
* Name:DebugCrLf
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*DEBUGCRLF)(VOID);
VOID DebugCrLf(VOID);

/*
*
* Name:DebugNode
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGNODE)(PFXNODE);
void DebugNode(PFXNODE node);

/*
*
* Name:DebugNodes
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGNODES)(PFXNODE);
void DebugNodes(PFXNODE head);

/*
*
* Name:DebugNodeList
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGNODELIST)(PFXNODELIST,FOREACHNODE);
void DebugNodeList(PFXNODELIST list,FOREACHNODE handler);

/*
*
* Name:DebugNodesData
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*DEBUGNODESDATA)(PFXNODE,FOREACHNODE);
void DebugNodesData(PFXNODE head,FOREACHNODE handler);

/*
*
* Name:DebugStatus
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*DEBUGSTATUS)(VOID);
BOOL DebugStatus(VOID);

/*
*
* Name:DebugOn
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*DEBUGON)(VOID);
VOID DebugOn(VOID);

/*
*
* Name:DebugOff
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*DEBUGOFF)(VOID);
VOID DebugOff(VOID);

/*
*
* Name:GetMilliseconds
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef ULONG (*GETMILLISECONDS)(VOID);
ULONG GetMilliseconds(VOID);

/*
*
* Name:GetRTCHour
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef UINT (*GETRTCHOUR)(void);
UINT GetRTCHour(VOID);

/*
*
* Name:GetRTCMinute
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef UINT (*GETRTCMINUTE)(void);
UINT GetRTCMinute(VOID);

/*
*
* Name:GetRTCSecond
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef UINT (*GETRTCSECOND)(void);
UINT GetRTCSecond(VOID);

/*
*
* Name:GetRTCMonth
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef UINT (*GETRTCMONTH)(void);
UINT GetRTCMonth(VOID);

/*
*
* Name:GetRTCDay
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef UINT (*GETRTCDAY)(void);
UINT GetRTCDay(VOID);

/*
*
* Name:GetRTCYear
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef UINT (*GETRTCYEAR)(void);
UINT GetRTCYear(VOID);

/*
*
* Name:GetRTCCentury
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef UINT (*GETRTCCENTURY)(void);
UINT GetRTCCentury(VOID);

/*
*
* Name:GetFirmwareDateDay
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*GETFIRMWAREDATEDAY)(char*);
void GetFirmwareDateDay(char* buffer);

/*
*
* Name:GetFirmwareDateMonth
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*GETFIRMWAREDATEMONTH)(char*);
void GetFirmwareDateMonth(char* buffer);

/*
*
* Name:GetFirmwareDateYear
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*GETFIRMWAREDATEYEAR)(char*);
void GetFirmwareDateYear(char* buffer);

/*
*
* Name:GetHardwareVersionMajor
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*GETHARDWAREVERSIONMAJOR)(char*);
void GetHardwareVersionMajor(char* buffer);

/*
*
* Name:GetHardwareVersionMinor
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*GETHARDWAREVERSIONMINOR)(char*);
void GetHardwareVersionMinor(char* buffer);

/*
*
* Name:GetHardwareRelease
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*GETHARDWARERELEASE)(char*);
void GetHardwareRelease(char* buffer);

/*
*
* Name:CriticalSectionEnter
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*CRITICALSECTIONENTER)(VOID);
BOOL CriticalSectionEnter(VOID);

/*
*
* Name:CriticalSectionExit
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*CRITICALSECTIONEXIT)(VOID);
VOID CriticalSectionExit(VOID);

/*
*
* Name:MemoryCopy
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPVOID (*MEMORYCOPY)(LPVOID,UINT);
LPVOID MemoryCopy(LPVOID object,UINT size);

/*
*
* Name:MemoryAlloc
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef HANDLE (*MEMORYALLOC)(UINT);
HANDLE MemoryAlloc(UINT size);

/*
*
* Name:MemoryDealloc
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*MEMORYDEALLOC)(HANDLE);
VOID MemoryDealloc(HANDLE handle);

/*
*
* Name:MemoryLock
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPVOID (*MEMORYLOCK)(HANDLE);
LPVOID MemoryLock(HANDLE handle);

/*
*
* Name:MemoryUnlock
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*MEMORYUNLOCK)(HANDLE);
VOID MemoryUnlock(HANDLE handle);

/*
*
* Name:HeapAlloc
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPVOID (*HEAPALLOC)(ULONG);
LPVOID HeapAlloc(ULONG size);

/*
*
* Name:HeapDealloc
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*HEAPDEALLOC)(LPVOID);
VOID HeapDealloc(LPVOID LPVOID1);

/*
*
* Name:SegmentLoad
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef HANDLE (*SEGMENTLOAD)(HANDLE);
HANDLE SegmentLoad(HANDLE handle);

/*
*
* Name:SegmentLock
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPVOID (*SEGMENTLOCK)(HANDLE);
LPVOID SegmentLock(HANDLE handle);

/*
*
* Name:SegmentUnlock
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*SEGMENTUNLOCK)(HANDLE);
BOOL SegmentUnlock(HANDLE handle);

/*
*
* Name:SegmentUnload
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*SEGMENTUNLOAD)(LPVOID);
VOID SegmentUnload(LPVOID segment);

/*
*
* Name:GetSegmentInfo
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPVOID (*GETSEGMENTINFO)(HANDLE);
LPVOID GetSegmentInfo(HANDLE handle);

/*
*
* Name:IPCOpenPort
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PIPCPORT (*IPCOPENPORT)(LPCSTR,BYTE);
PIPCPORT IPCOpenPort(LPCSTR portName,BYTE type);

/*
*
* Name:IPCGetPort
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PIPCPORT (*IPCGETPORT)(LPCSTR);
PIPCPORT IPCGetPort(LPCSTR portName);

/*
*
* Name:IPCClosePort
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*IPCCLOSEPORT)(PIPCPORT);
VOID IPCClosePort(PIPCPORT port);

/*
*
* Name:IPCReadPort
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPVOID (*IPCREADPORT)(PIPCPORT);
LPVOID IPCReadPort(PIPCPORT port);

/*
*
* Name:IPCPeekPort
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPVOID (*IPCPEEKPORT)(PIPCPORT);
LPVOID IPCPeekPort(PIPCPORT port);

/*
*
* Name:IPCWritePort
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef UINT (*IPCWRITEPORT)(PIPCPORT,LPVOID,UINT);
UINT IPCWritePort(PIPCPORT port,LPVOID data,UINT size);

/*
*
* Name:IPCWriteBytePort
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*IPCWRITEBYTEPORT)(PIPCPORT,BYTE);
VOID IPCWriteBytePort(PIPCPORT port,BYTE data);

/*
*
* Name:IPCWriteVerbPort
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*IPCWRITEVERBPORT)(PIPCPORT,BYTE,BYTE);
VOID IPCWriteVerbPort(PIPCPORT port,BYTE data1,BYTE data2);

/*
*
* Name:IPCWriteIntegerPort
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*IPCWRITEINTEGERPORT)(PIPCPORT,UINT);
VOID IPCWriteIntegerPort(PIPCPORT port,UINT data);

/*
*
* Name:IPCWriteLongPort
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*IPCWRITELONGPORT)(PIPCPORT,ULONG);
VOID IPCWriteLongPort(PIPCPORT port,ULONG data);

/*
*
* Name:SetMemoryBlockVirtual
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef HANDLE (*SETMEMORYBLOCKVIRTUAL)(LPVOID,UINT);
HANDLE SetMemoryBlockVirtual(LPVOID memBlock,UINT attr);

/*
*
* Name:SetMemoryBlockUser
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*SETMEMORYBLOCKUSER)(LPVOID,UINT);
BOOL SetMemoryBlockUser(LPVOID memBlock,UINT userId);

/*
*
* Name:QueueInitialize
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*QUEUEINITIALIZE)(PFXQUEUE);
VOID QueueInitialize(PFXQUEUE q);

/*
*
* Name:QueueIsEmpty
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef INT (*QUEUEISEMPTY)(PFXQUEUE);
INT QueueIsEmpty(PFXQUEUE q);

/*
*
* Name:QueueAdd
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*QUEUEADD)(PFXQUEUE,LPVOID);
BOOL QueueAdd(PFXQUEUE q,LPVOID value);

/*
*
* Name:QueueRemove
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPVOID (*QUEUEREMOVE)(PFXQUEUE);
LPVOID QueueRemove(PFXQUEUE q);

/*
*
* Name:QueueAddWithLock
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*QUEUEADDWITHLOCK)(PFXQUEUE,LPVOID);
VOID QueueAddWithLock(PFXQUEUE q,LPVOID value);

/*
*
* Name:QueueRemoveWithLock
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPVOID (*QUEUEREMOVEWITHLOCK)(PFXQUEUE);
LPVOID QueueRemoveWithLock(PFXQUEUE q);

/*
*
* Name:NodesInit
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODESINIT)(BYTE,LPCSTR,LPVOID);
PFXNODE NodesInit(BYTE type,LPCSTR name,LPVOID data);

/*
*
* Name:NodesCreateByName
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODESCREATEBYNAME)(BYTE,LPCSTR,LPVOID,PFXNODE,PFXNODE);
PFXNODE NodesCreateByName(BYTE type,LPCSTR name,LPVOID data,PFXNODE next,PFXNODE last);

/*
*
* Name:NodesCreateById
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODESCREATEBYID)(BYTE,ULONG,LPVOID,PFXNODE,PFXNODE);
PFXNODE NodesCreateById(BYTE type,ULONG objId,LPVOID data,PFXNODE last,PFXNODE next);

/*
*
* Name:NodesCopyNode
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODESCOPYNODE)(PFXNODE);
PFXNODE NodesCopyNode(PFXNODE node);

/*
*
* Name:NodesAddNode
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*NODESADDNODE)(PFXNODE,PFXNODE);
VOID NodesAddNode(PFXNODE head,PFXNODE new);

/*
*
* Name:NodesAddToHead
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*NODESADDTOHEAD)(PFXNODE,PFXNODE);
VOID NodesAddToHead(PFXNODE head,PFXNODE new);

/*
*
* Name:NodesGetType
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODESGETTYPE)(PFXNODE,BYTE);
PFXNODE NodesGetType(PFXNODE head,BYTE type);

/*
*
* Name:NodesGet
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODESGET)(PFXNODE,INT);
PFXNODE NodesGet(PFXNODE head,INT index);

/*
*
* Name:NodesGetName
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODESGETNAME)(PFXNODE,LPCSTR);
PFXNODE NodesGetName(PFXNODE head,LPCSTR name);

/*
*
* Name:NodesGetNameAndType
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODESGETNAMEANDTYPE)(PFXNODE,LPCSTR,BYTE);
PFXNODE NodesGetNameAndType(PFXNODE head,LPCSTR name,BYTE type);

/*
*
* Name:NodesRemoveByName
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODESREMOVEBYNAME)(PFXNODE,LPCSTR);
PFXNODE NodesRemoveByName(PFXNODE head,LPCSTR name);

/*
*
* Name:NodesRemoveNode
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODESREMOVENODE)(PFXNODE,PFXNODE);
PFXNODE NodesRemoveNode(PFXNODE head,PFXNODE targetNode);

/*
*
* Name:NodesRemoveById
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODESREMOVEBYID)(PFXNODE,ULONG);
PFXNODE NodesRemoveById(PFXNODE head,ULONG objId);

/*
*
* Name:NodesGetLast
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODESGETLAST)(PFXNODE);
PFXNODE NodesGetLast(PFXNODE head);

/*
*
* Name:NodeListAlloc
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODELIST (*NODELISTALLOC)(LPCSTR,NodeListDeallocator);
PFXNODELIST NodeListAlloc(LPCSTR listName,NodeListDeallocator deallocator);

/*
*
* Name:NodeListDealloc
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*NODELISTDEALLOC)(PFXNODELIST);
VOID NodeListDealloc(PFXNODELIST nodelist);

/*
*
* Name:NodeListAddByName
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODELISTADDBYNAME)(PFXNODELIST,BYTE,LPCSTR,LPVOID);
PFXNODE NodeListAddByName(PFXNODELIST nodelist,BYTE type,LPCSTR name,LPVOID data);

/*
*
* Name:NodeListAddFirstById
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODELISTADDFIRSTBYID)(PFXNODELIST,BYTE,ULONG,LPVOID);
PFXNODE NodeListAddFirstById(PFXNODELIST list,BYTE type,ULONG objId,LPVOID data);

/*
*
* Name:NodeListAddFirstByName
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODELISTADDFIRSTBYNAME)(PFXNODELIST,BYTE,LPCSTR,LPVOID);
PFXNODE NodeListAddFirstByName(PFXNODELIST list,BYTE type,LPCSTR name,LPVOID data);

/*
*
* Name:NodeListAddById
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODELISTADDBYID)(PFXNODELIST,BYTE,ULONG,LPVOID);
PFXNODE NodeListAddById(PFXNODELIST list,BYTE type,ULONG objId,LPVOID data);

/*
*
* Name:NodeListAddNode
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODELISTADDNODE)(PFXNODELIST,PFXNODE);
PFXNODE NodeListAddNode(PFXNODELIST list,PFXNODE new);

/*
*
* Name:NodeListClear
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODELIST (*NODELISTCLEAR)(PFXNODELIST);
PFXNODELIST NodeListClear(PFXNODELIST nodelist);

/*
*
* Name:NodeListFindByName
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODELISTFINDBYNAME)(PFXNODELIST,LPCSTR);
PFXNODE NodeListFindByName(PFXNODELIST list,LPCSTR name);

/*
*
* Name:NodeListFindById
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODELISTFINDBYID)(PFXNODELIST,ULONG);
PFXNODE NodeListFindById(PFXNODELIST list,ULONG objId);

/*
*
* Name:NodeListFindByType
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODELISTFINDBYTYPE)(PFXNODELIST,BYTE);
PFXNODE NodeListFindByType(PFXNODELIST list,BYTE type);

/*
*
* Name:NodeListGetName
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCSTR (*NODELISTGETNAME)(PFXNODELIST);
LPCSTR NodeListGetName(PFXNODELIST list);

/*
*
* Name:NodeListGetFirst
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODELISTGETFIRST)(PFXNODELIST);
PFXNODE NodeListGetFirst(PFXNODELIST list);

/*
*
* Name:NodeListIsEmpty
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*NODELISTISEMPTY)(PFXNODELIST);
BOOL NodeListIsEmpty(PFXNODELIST list);

/*
*
* Name:NodeListRemoveNode
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODELISTREMOVENODE)(PFXNODELIST,PFXNODE);
PFXNODE NodeListRemoveNode(PFXNODELIST list,PFXNODE targetNode);

/*
*
* Name:NodeListForEach
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*NODELISTFOREACH)(PFXNODE,LPVOID,FOREACHNODE);
VOID NodeListForEach(PFXNODE head,LPVOID ctx,FOREACHNODE each);

/*
*
* Name:NodeListForEachUntil
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODELISTFOREACHUNTIL)(PFXNODE,LPVOID,FOREACHNODEUNTIL);
PFXNODE NodeListForEachUntil(PFXNODE head,LPVOID context,FOREACHNODEUNTIL each);

/*
*
* Name:NodeListForEachType
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*NODELISTFOREACHTYPE)(PFXNODELIST,BYTE,LPVOID,FOREACHNODE);
VOID NodeListForEachType(PFXNODELIST list,BYTE type,LPVOID context,FOREACHNODE each);

/*
*
* Name:NodeListForeachListData
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*NODELISTFOREACHLISTDATA)(PFXNODELIST,LPVOID,FOREACHNODE);
VOID NodeListForeachListData(PFXNODELIST list,LPVOID context,FOREACHNODE each);

/*
*
* Name:NodeListForeachUntilListData
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXNODE (*NODELISTFOREACHUNTILLISTDATA)(PFXNODELIST,LPVOID,FOREACHNODEUNTIL);
PFXNODE NodeListForeachUntilListData(PFXNODELIST list,LPVOID context,FOREACHNODEUNTIL each);

/*
*
* Name:NodeListForeachRemove
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*NODELISTFOREACHREMOVE)(PFXNODELIST,LPVOID,FOREACHNODEUNTIL);
VOID NodeListForeachRemove(PFXNODELIST list,LPVOID context,FOREACHNODEUNTIL checkStatus);

/*
*
* Name:FXStringInit
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXSTRING (*FXSTRINGINIT)(UINT);
PFXSTRING FXStringInit(UINT size);

/*
*
* Name:FXStringNew
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXSTRING (*FXSTRINGNEW)(LPCHAR,UINT);
PFXSTRING FXStringNew(LPCHAR initial,UINT size);

/*
*
* Name:FXStringReinit
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXSTRING (*FXSTRINGREINIT)(PFXSTRING);
PFXSTRING FXStringReinit(PFXSTRING fxstring);

/*
*
* Name:FXStringFree
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef VOID (*FXSTRINGFREE)(PFXSTRING);
VOID FXStringFree(PFXSTRING string);

/*
*
* Name:FXStringLength
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef UINT (*FXSTRINGLENGTH)(PFXSTRING);
UINT FXStringLength(PFXSTRING string);

/*
*
* Name:FXStringSize
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef UINT (*FXSTRINGSIZE)(PFXSTRING);
UINT FXStringSize(PFXSTRING string);

/*
*
* Name:FXStringIndex
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef UINT (*FXSTRINGINDEX)(PFXSTRING);
UINT FXStringIndex(PFXSTRING string);

/*
*
* Name:FXStringAddChar
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCHAR (*FXSTRINGADDCHAR)(PFXSTRING,CHAR);
LPCHAR FXStringAddChar(PFXSTRING string,CHAR c);

/*
*
* Name:FXStringRemoveChar
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef CHAR (*FXSTRINGREMOVECHAR)(PFXSTRING);
CHAR FXStringRemoveChar(PFXSTRING string);

/*
*
* Name:FXStringAddString
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCHAR (*FXSTRINGADDSTRING)(PFXSTRING,LPCHAR);
LPCHAR FXStringAddString(PFXSTRING string,LPCHAR text);

/*
*
* Name:FXStringAddFXString
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef UINT (*FXSTRINGADDFXSTRING)(PFXSTRING,PFXSTRING);
UINT FXStringAddFXString(PFXSTRING string,PFXSTRING text);

/*
*
* Name:FXStringAsString
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCHAR (*FXSTRINGASSTRING)(PFXSTRING);
LPCHAR FXStringAsString(PFXSTRING string);

/*
*
* Name:FXStringCharAt
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef CHAR (*FXSTRINGCHARAT)(PFXSTRING,UINT);
CHAR FXStringCharAt(PFXSTRING string,UINT index);

/*
*
* Name:FXStringCopyToString
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCHAR (*FXSTRINGCOPYTOSTRING)(PFXSTRING);
LPCHAR FXStringCopyToString(PFXSTRING src);

/*
*
* Name:FXStringFromLong
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXSTRING (*FXSTRINGFROMLONG)(ULONG);
PFXSTRING FXStringFromLong(ULONG nLong);

/*
*
* Name:FXStringEquals
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*FXSTRINGEQUALS)(PFXSTRING,LPCHAR);
BOOL FXStringEquals(PFXSTRING string,LPCHAR match);

/*
*
* Name:FXStringAppendInteger
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXSTRING (*FXSTRINGAPPENDINTEGER)(PFXSTRING,UINT);
PFXSTRING FXStringAppendInteger(PFXSTRING string,UINT integer);

/*
*
* Name:FXStringAppendLong
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXSTRING (*FXSTRINGAPPENDLONG)(PFXSTRING,ULONG);
PFXSTRING FXStringAppendLong(PFXSTRING string,ULONG longval);

/*
*
* Name:FXStringAppendHex
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef PFXSTRING (*FXSTRINGAPPENDHEX)(PFXSTRING,BYTE);
PFXSTRING FXStringAppendHex(PFXSTRING string,BYTE byte);

/*
*
* Name:StringStripPadding
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPSTR (*STRINGSTRIPPADDING)(LPSTR);
LPSTR StringStripPadding(LPSTR text);

/*
*
* Name:StringReplacePadding
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPSTR (*STRINGREPLACEPADDING)(LPSTR,CHAR);
LPSTR StringReplacePadding(LPSTR orgText,CHAR replacement);

/*
*
* Name:StringReplacePaddingUntil
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPSTR (*STRINGREPLACEPADDINGUNTIL)(LPSTR,CHAR);
LPSTR StringReplacePaddingUntil(LPSTR orgText,CHAR replacement);

/*
*
* Name:StringByteToHex
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPSTR (*STRINGBYTETOHEX)(UCHAR,char*);
LPSTR StringByteToHex(UCHAR b,char* buffer);

/*
*
* Name:StringByteToDec
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPSTR (*STRINGBYTETODEC)(UCHAR,char*);
LPSTR StringByteToDec(UCHAR b,char* buffer);

/*
*
* Name:StringIntToDec
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPSTR (*STRINGINTTODEC)(UINT,char*);
LPSTR StringIntToDec(UINT b,char* buffer);

/*
*
* Name:StringLongToDec
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPSTR (*STRINGLONGTODEC)(ULONG,char*);
LPSTR StringLongToDec(ULONG b,char* buffer);

/*
*
* Name:StringLongToSize
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPSTR (*STRINGLONGTOSIZE)(ULONG,UINT,char*);
LPSTR StringLongToSize(ULONG b,UINT units,char* bhbuffer);

/*
*
* Name:StringAppendInt
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCHAR (*STRINGAPPENDINT)(LPCHAR,UINT);
LPCHAR StringAppendInt(LPCHAR baseText,UINT integer);

/*
*
* Name:StringfromPointer
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCSTR (*STRINGFROMPOINTER)(LPVOID,LPSTR);
LPCSTR StringfromPointer(LPVOID p,LPSTR bhbuffer);

/*
*
* Name:StringCopyToDelimiter
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCSTR (*STRINGCOPYTODELIMITER)(LPCSTR,CHAR);
LPCSTR StringCopyToDelimiter(LPCSTR text,CHAR marker);

/*
*
* Name:StringFirstIndexOf
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef UINT (*STRINGFIRSTINDEXOF)(LPCSTR,CHAR);
UINT StringFirstIndexOf(LPCSTR text,CHAR marker);

/*
*
* Name:StringLastIndexOf
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef UINT (*STRINGLASTINDEXOF)(LPCSTR,CHAR);
UINT StringLastIndexOf(LPCSTR text,CHAR marker);

/*
*
* Name:StringfromChar
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCSTR (*STRINGFROMCHAR)(CHAR,BYTE,LPSTR);
LPCSTR StringfromChar(CHAR c,BYTE action,LPSTR bhbuffer);

/*
*
* Name:StringItoA
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPSTR (*STRINGITOA)(UINT,char*,int);
LPSTR StringItoA(UINT value,char* result,int base);

/*
*
* Name:StringPad
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCHAR (*STRINGPAD)(char*,char*,char,int);
LPCHAR StringPad(char* dest,char* src,char filler,int width);

/*
*
* Name:StringReverse
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef void (*STRINGREVERSE)(LPSTR,int);
void StringReverse(LPSTR str,int length);

/*
*
* Name:StringConCat
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPSTR (*STRINGCONCAT)(LPSTR,LPCSTR);
LPSTR StringConCat(LPSTR dest,LPCSTR src);

/*
*
* Name:StringCopy
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPSTR (*STRINGCOPY)(LPSTR,LPCSTR);
LPSTR StringCopy(LPSTR dest,LPCSTR src);

/*
*
* Name:StringRTrim
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCHAR (*STRINGRTRIM)(LPCHAR);
LPCHAR StringRTrim(LPCHAR lpText);

/*
*
* Name:StringLTrim
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCHAR (*STRINGLTRIM)(LPCHAR);
LPCHAR StringLTrim(LPCHAR lpText);

/*
*
* Name:StringTrim
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCHAR (*STRINGTRIM)(LPCHAR);
LPCHAR StringTrim(LPCHAR lpText);

/*
*
* Name:StringReplace
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCHAR (*STRINGREPLACE)(LPCSTR,LPCSTR,LPCSTR);
LPCHAR StringReplace(LPCSTR s,LPCSTR old,LPCSTR new);

/*
*
* Name:StringIndexOf
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef INT (*STRINGINDEXOF)(LPCHAR,CHAR);
INT StringIndexOf(LPCHAR chars,CHAR c);

/*
*
* Name:StringEndsWith
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*STRINGENDSWITH)(LPCSTR,LPCSTR);
BOOL StringEndsWith(LPCSTR path,LPCSTR check);

/*
*
* Name:FXStringEndWith
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef BOOL (*FXSTRINGENDWITH)(PFXSTRING,LPCSTR);
BOOL FXStringEndWith(PFXSTRING path,LPCSTR check);

/*
*
* Name:StringToUpper
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCHAR (*STRINGTOUPPER)(LPCHAR);
LPCHAR StringToUpper(LPCHAR orgText);

/*
*
* Name:StringToLower
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCHAR (*STRINGTOLOWER)(LPCHAR);
LPCHAR StringToLower(LPCHAR orgText);

/*
*
* Name:StringDate
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCSTR (*STRINGDATE)(LPCHAR);
LPCSTR StringDate(LPCHAR buffer);

/*
*
* Name:StringLocalTime
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCSTR (*STRINGLOCALTIME)(LPCHAR);
LPCSTR StringLocalTime(LPCHAR buffer);

/*
*
* Name:StringLocalHourMinute
* Subsystem:KERNEL
* Description: 
* Arguments: 
*
*/
typedef LPCSTR (*STRINGLOCALHOURMINUTE)(LPCHAR);
LPCSTR StringLocalHourMinute(LPCHAR buffer);


#endif