#include "Hello.h"


CMyApp myApp;

/////////////////////////////////////////////////////////////////////////
// CMyApp member functions

BOOL CMyApp::InitInstance()
{
	m_pMainWnd = new CMainWindow;

	m_pMainWnd->ShowWindow(m_nCmdShow);
	m_pMainWnd->UpdateWindow();
	return TRUE;
}

/////////////////////////////////////////////////////////////////////////
// CMainWindow message map and member functions

BEGIN_MESSAGE_MAP(CMainWindow, CFrameWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()

CMainWindow::CMainWindow()
{
	//Create(NULL, _T("TlqV")); 
	/*Create(NULL, _T("TlqV"), WS_OVERLAPPED | WS_CAPTION |
		WS_SYSMENU | WS_MINIMIZEBOX | WS_THICKFRAME);*/
	Create(NULL, _T("TlqV"), WS_OVERLAPPEDWINDOW, CRect(32, 64, 352, 304));
}

void CMainWindow::OnPaint()
{
	CPaintDC dc(this);
	CRect rect;
	GetClientRect(&rect);
	dc.DrawText(_T("M4t_Bi3ct"), -1, &rect,
		DT_SINGLELINE | DT_CENTER | DT_VCENTER);
}
