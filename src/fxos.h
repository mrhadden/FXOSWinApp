
#ifndef __FX_OS_
#define __FX_OS_
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "fxtypes.h"

#ifdef USE_FX256_FMX
#pragma message "*** Compiling for FMX!"
#include "fxc256fmx.h"
#elif USE_FX256_U
#pragma message "*** Compiling for Model U!"
#include "fxc256u.h"
#else
#pragma message "*** Compiling for B2!"
#include "fxc256.h"
#endif

#include "fxkernel.h"
#include "fxeventmanager.h"
#include "fxwindowmanager.h"



#endif
