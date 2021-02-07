
// 3DGraphicsAppDlg.h : header file
//

#pragma once
#include "COpenGLControl.h"

// CMy3DGraphicsAppDlg dialog
class CMy3DGraphicsAppDlg : public CDialogEx
{
// Construction
public:
	CMy3DGraphicsAppDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY3DGRAPHICSAPP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	COpenGLControl m_oglWindow;
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
