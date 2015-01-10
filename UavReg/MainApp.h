#pragma once

class CMainApp : public CWinApp
{
protected:
	class CMainWnd *m_pMyFrm;

public:
	CMainApp();
	~CMainApp();

protected:
	virtual BOOL InitInstance();

} theApp;
