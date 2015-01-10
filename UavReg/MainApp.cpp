#include "stdafx.h"
#include "MainWnd.h"
#include "MainApp.h"

CMainApp::CMainApp()
	: m_pMyFrm(NULL)
{
}

CMainApp::~CMainApp()
{
	delete m_pMyFrm;
}

BOOL CMainApp::InitInstance(void)
{
	CWinApp::InitInstance();

	LPCTSTR pWndClass = AfxRegisterWndClass(
		CS_VREDRAW | CS_HREDRAW,
		::LoadCursor(NULL, IDC_ARROW),
		(HBRUSH)::GetStockObject(WHITE_BRUSH),
		::LoadIcon(NULL, IDI_APPLICATION));
	LPCTSTR pWndTitle = _T("Fractal - Powered by Devymex");

	m_pMyFrm = new CMainWnd;
	m_pMainWnd = m_pMyFrm;

	m_pMainWnd->CreateEx(
		0,
		pWndClass,
		pWndTitle,
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		NULL,
		NULL);

	m_pMainWnd->ShowWindow(SW_SHOW);
	m_pMainWnd->UpdateWindow();
	return TRUE;
}
