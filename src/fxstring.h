
#ifndef __FX_STRING_
#define __FX_STRING_

#include <stdlib.h>
#include <string.h>
#include "fxtypes.h"

typedef struct _fx_string
{
	UINT   size;
	int    pos;
	LPCHAR buffer;
}FXSTRING;
typedef FXSTRING FAR *PFXSTRING;

#endif
