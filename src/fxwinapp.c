

#include "fxwinapp.h"

//#pragma section CODE=WINAPP,offset $09:0000

/////////////////////////////////////////////////////////////
// OK because calculator is a single instance application
/////////////////////////////////////////////////////////////
static PWINDOW hWndInstance = NULL;
//static PWINDOW hWndInstancePalette = NULL;
//static PWINDOW pTextBox = NULL;

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
				//DebugLong("FXWinApp::FX_INIT_MESSAGE::ProcessId:",(LONG)proc);

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

				/*
				if(hWndInstance == NULL)
				{
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
				else
				{
					//k_debug_long("FXPaletteAccessory::FX_INIT_MESSAGE::EXIT:",p->procId);
					DebugOut("FXWinApp::FX_INIT_MESSAGE::DUPEXIT\r\n");
					TerminateProcess(proc->procId);
				}
				*/
			}
			break;
		case FX_PROCESS:
			if(hWndInstance == NULL)
			{
				//k_debug_long("FXPaletteAccessory::FX_PROCESS::EXIT:",p->procId);
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

