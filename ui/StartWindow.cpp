///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "StartWindow.h"

///////////////////////////////////////////////////////////////////////////

MainWindow::MainWindow( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* Sizer1;
	Sizer1 = new wxBoxSizer( wxVERTICAL );


	this->SetSizer( Sizer1 );
	this->Layout();
	MainMenu = new wxMenuBar( 0 );
	MainFileDialog = new wxMenu();
	wxMenuItem* FileDialogItem0;
	FileDialogItem0 = new wxMenuItem( MainFileDialog, wxID_ANY, wxString( wxT("Открыть конфигурацию") ) , wxEmptyString, wxITEM_NORMAL );
	MainFileDialog->Append( FileDialogItem0 );

	wxMenuItem* FileDialogItem1;
	FileDialogItem1 = new wxMenuItem( MainFileDialog, wxID_ANY, wxString( wxT("Выход") ) , wxEmptyString, wxITEM_NORMAL );
	MainFileDialog->Append( FileDialogItem1 );

	MainMenu->Append( MainFileDialog, wxT("Файл") );

	MainConfigDialog = new wxMenu();
	wxMenuItem* ConfigDialogItem0;
	ConfigDialogItem0 = new wxMenuItem( MainConfigDialog, wxID_ANY, wxString( wxT("Настройка сети") ) , wxEmptyString, wxITEM_NORMAL );
	MainConfigDialog->Append( ConfigDialogItem0 );

	wxMenuItem* ConfigDialogItem1;
	ConfigDialogItem1 = new wxMenuItem( MainConfigDialog, wxID_ANY, wxString( wxT("Выбрать порт") ) , wxEmptyString, wxITEM_NORMAL );
	MainConfigDialog->Append( ConfigDialogItem1 );

	MainMenu->Append( MainConfigDialog, wxT("Настройки") );

	MainAboutDialog = new wxMenu();
	wxMenuItem* AboutDialogItem0;
	AboutDialogItem0 = new wxMenuItem( MainAboutDialog, wxID_ANY, wxString( wxT("О программе") ) , wxEmptyString, wxITEM_NORMAL );
	MainAboutDialog->Append( AboutDialogItem0 );

	MainMenu->Append( MainAboutDialog, wxT("О программе") );

	this->SetMenuBar( MainMenu );


	this->Centre( wxBOTH );
}

MainWindow::~MainWindow()
{
}
