/***************************************************************
 * Name:      wxFormBuilder_Dialog_with_wx_pchApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2014-06-04
 * Copyright:  ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "wxFormBuilder_Dialog_with_wx_pchApp.h"
#include "wxFormBuilder_Dialog_with_wx_pchMain.h"

IMPLEMENT_APP(wxFormBuilder_Dialog_with_wx_pchApp);

bool wxFormBuilder_Dialog_with_wx_pchApp::OnInit()
{
    
    wxFormBuilder_Dialog_with_wx_pchDialog* dlg = new wxFormBuilder_Dialog_with_wx_pchDialog(0L);
    dlg->SetIcon(wxICON(aaaa)); // To Set App Icon
    dlg->Show();
    return true;
}
