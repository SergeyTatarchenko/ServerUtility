/***************************************************************
 * Name:      ServerUtilityApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Sergey Tatarchenko
 * Created:   2020-05-28
 * Copyright: Sergey Tatarchenko (https://github.com/SergeyTatarchenko)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#	include "wx/wx.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "ServerUtilityApp.h"


bool ServerUtilityApp::OnInit()
{

    MainWindow *TopFrame = new MainWindow((wxFrame*) NULL, -1, _T("Server Utility v 0.1"));
    TopFrame->SetIcon(wxICON(def)); /*setup application icon*/
    TopFrame->Show();
	SetTopWindow(TopFrame);
    return true;
}


/*
*Handlers for main frame widgets
*/

void MainWindow::MainFileFrogramOut( wxCommandEvent& event )
{
    this->Close(true);
}

void MainWindow::AboutDialogEvent( wxCommandEvent& event )
{
    AboutDialog *dialog = new AboutDialog((wxWindow*) NULL);
    dialog->ShowModal();
}

void AboutDialog::AboutDialogClose( wxCommandEvent& event )
{
    this->Destroy();
}
