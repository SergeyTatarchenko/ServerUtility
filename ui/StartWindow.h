///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/button.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/listctrl.h>
#include <wx/listbox.h>
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

#define wxIDOpenConfig 1000
#define wxIDOpenFile 1001
#define wxIDNetworkConfig 1002
#define wxIDPortSelect 1003
#define wxIDAbout 1004
#define wxIDAboutButton 1005

///////////////////////////////////////////////////////////////////////////////
/// Class MainWindowUI
///////////////////////////////////////////////////////////////////////////////
class MainWindowUI : public wxFrame
{
	private:

	protected:
		wxButton* m_button2;
		wxListCtrl* Boards;
		wxListBox* Objects;
		wxListCtrl* Status;
		wxMenuBar* MainMenu;
		wxMenu* MainFileDialog;
		wxMenu* MainConfigDialog;
		wxMenu* MainAboutDialog;

		// Virtual event handlers, overide them in your derived class
		virtual void MainFileFrogramOut( wxCommandEvent& event ) { event.Skip(); }
		virtual void AboutDialogEvent( wxCommandEvent& event ) { event.Skip(); }


	public:

		MainWindowUI( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Server Utility"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 598,218 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainWindowUI();

};

///////////////////////////////////////////////////////////////////////////////
/// Class AboutDialogUI
///////////////////////////////////////////////////////////////////////////////
class AboutDialogUI : public wxDialog
{
	private:

	protected:
		wxStaticText* AboutDialogInfo;
		wxStaticText* AboutDialogVersion;
		wxButton* AboutDialogOutButton;

		// Virtual event handlers, overide them in your derived class
		virtual void AboutDialogClose( wxCommandEvent& event ) { event.Skip(); }


	public:

		AboutDialogUI( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 198,110 ), long style = wxDEFAULT_DIALOG_STYLE );
		~AboutDialogUI();

};

