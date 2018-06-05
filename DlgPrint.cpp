// DlgPrint.cpp : implementation file
//

#include "stdafx.h"
#include "FreePcb.h"
#include "DlgPrint.h"
#include "afxdialogex.h"


// CDlgPrint dialog

IMPLEMENT_DYNAMIC(CDlgPrint, CDialog)

CDlgPrint::CDlgPrint(CWnd* pParent /*=NULL*/)
	: CPrintDialog(FALSE)
    , m_Denominator(1)
    , m_Numerator(1)
{
    //m_pd.Flags |= PD_ENABLEPRINTTEMPLATE;
    //m_pd.lpSetupTemplateName = MAKEINTRESOURCE(IDD_PRINT);
    //m_pd.hInstance = AfxGetInstanceHandle();
}

CDlgPrint::~CDlgPrint()
{
}

void CDlgPrint::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    DDX_Text(pDX, IDC_PRINT_SCALE_DENOMINATOR, m_Denominator);
    DDX_Text(pDX, IDC_PRINT_SCALE_NUMERATOR, m_Numerator);
	DDV_MinMaxUInt(pDX, m_Numerator, 1, 999);
	DDV_MinMaxUInt(pDX, m_Denominator, 1, 999);
}


BEGIN_MESSAGE_MAP(CDlgPrint, CDialog)
END_MESSAGE_MAP()


// CDlgPrint message handlers


void CDlgPrint::Initialize()
{
}
