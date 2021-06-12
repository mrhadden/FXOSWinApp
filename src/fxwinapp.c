

#include "fxwinapp.h"

static PWINDOW hWndInstance = NULL;

BOOL WinAppWindowProc(PFXOSMESSAGE pMsg);
//
// App Entry
//
VOID FXWinMain(PFXOSMESSAGE pMsg)
{
	PFXPROCESS proc;

	if(pMsg!=NULL)
	{
		proc = GetCurrentProcess();

		switch(pMsg->type)
		{
		case FX_INIT_MESSAGE:
			if(proc!=NULL)
			{
				DebugOut("FXWinApp::FX_INIT_MESSAGE\r\n");

				CreateWindowClassEx("fxWinAppWindowClass",NULL,0,FXWSX_ALWAYS_BACKPLANE,NULL,NULL,NULL,WinAppWindowProc);

				DebugOut("FXWinApp::CreateWindowClassEx\r\n");

				hWndInstance = CreateWindow(FXWS_THICKFRAME | FXWS_CAPTION | FXWS_VISIBLE | FXWS_SYSMENU | FXWS_POPUP,
											"fxWinAppWindowClass",
											"Test Application",
											100,100,
											200,100,
											GetDesktopWindow(),
											NULL,NULL);

				DebugOut("FXWinApp::CreateWindow\r\n");
			}
			break;
		case FX_PROCESS:
			if(hWndInstance == NULL)
			{
				DebugOut("FXWinApp::FX_PROCESS\r\n");
				TerminateProcess(proc->procId);
			}
			break;
		default:
			break;
		}
	}

	return;
}


BOOL WinAppWindowProc(PFXOSMESSAGE pMsg)
{
	PFXPROCESS 	proc;
	PWINDOW 	pWin = NULL;

	if(pMsg!=NULL)
	{
		proc = GetCurrentProcess();

		switch(pMsg->type)
		{
		case FX_CREATE_WINDOW:
			if(proc)
			{
				DebugOut("WinApp::FX_CREATE_WINDOW\r\n");
			}
			return TRUE;
			break;
		case FX_DRAW_WINDOW:
			DebugOut("WinApp::FX_DRAW_WINDOW\r\n");
			/*
			pWin = k_getWindowFromHandle(pMsg->hwnd);
			if(pWin)
			{
				k_vdma_fill_rect_ex(pWin->clientRect.x,
									pWin->clientRect.y,
									pWin->clientRect.width,
									pWin->clientRect.height,
									BRUSHCOLOR(pWin->hBackground),
									pWin->nBitmapLayer);

			}
			*/
			break;
		case FX_LBUTTON_DOWN:
			/*
			pWin = k_getWindowFromHandle(pMsg->hwnd);
			if(pWin)
			{
			}
			*/
			return TRUE;
		default:
			break;
		}
	}

	return DefaultWindowProc(pMsg);
}

