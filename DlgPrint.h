#pragma once
#include "afxwin.h"


// CDlgPrint dialog

class CDlgPrint : public CPrintDialog
{
	DECLARE_DYNAMIC(CDlgPrint)

public:
	CDlgPrint(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDlgPrint();

// Dialog Data
	enum { IDD = IDD_PRINT };

    UINT m_Denominator;
    UINT m_Numerator;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
    void Initialize();
};
