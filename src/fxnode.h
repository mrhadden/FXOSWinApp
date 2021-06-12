
#ifndef __FX_NODE_
#define __FX_NODE_

#ifdef NOFAR
#define FAR
#else
#define FAR far
#endif

#include "fxtypes.h"

VOID k_deallocate_default(LPCSTR name,LPVOID data);

#define NODELIST_DEF_DEALLOC	 k_deallocate_default
#define NODELIST_NO_DEALLOC	 	(NULL)

typedef void (*FOREACHNODE)(LPVOID ctx,LPVOID pdata);
typedef BOOL (*FOREACHNODEUNTIL)(LPVOID ctx,LPVOID pdata);

#endif
