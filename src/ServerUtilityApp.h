/***************************************************************
 * Name:      ServerUtilityApp.h
 * Purpose:   Defines Application Class
 * Author:    SergeyTatarchenko ()
 * Created:   2020-05-28
 * Copyright: SergeyTatarchenko (https://github.com/SergeyTatarchenko)
 * License:
 **************************************************************/

#ifndef SERVERUTILITYAPP_H
#define SERVERUTILITYAPP_H

#include <wx/app.h>

#include "StartWindow.h"

class ServerUtilityApp : public wxApp
{
public:
	virtual bool OnInit();
};

//wxEvtHandler

class MainWindow : public MainWindowUI
{
    private:

	protected:
        void MainFileFrogramOut( wxCommandEvent& event );
        void AboutDialogEvent( wxCommandEvent& event );

    public:
        using MainWindowUI::MainWindowUI;

};

 class AboutDialog : public AboutDialogUI
 {
     private:
	protected:
	    void AboutDialogClose( wxCommandEvent& event );
    public:
        using AboutDialogUI::AboutDialogUI;

 };
#endif // SERVERUTILITYAPP_H
