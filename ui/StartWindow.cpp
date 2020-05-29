///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "StartWindow.h"

///////////////////////////////////////////////////////////////////////////

MainWindowUI::MainWindowUI( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* Sizer1;
	Sizer1 = new wxBoxSizer( wxVERTICAL );

	wxGridSizer* gSizer5;
	gSizer5 = new wxGridSizer( 1, 2, 0, 0 );

	m_button2 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer5->Add( m_button2, 0, wxALL, 5 );


	Sizer1->Add( gSizer5, 1, wxEXPAND, 5 );

	wxGridSizer* gSizer3;
	gSizer3 = new wxGridSizer( 1, 3, 0, 0 );

	Boards = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_SMALL_ICON|wxBORDER_NONE );
	gSizer3->Add( Boards, 0, wxEXPAND, 5 );

	Objects = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	gSizer3->Add( Objects, 0, wxALL|wxEXPAND, 5 );

	Status = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_ICON );
	gSizer3->Add( Status, 0, wxALL|wxEXPAND, 5 );


	Sizer1->Add( gSizer3, 1, wxEXPAND, 5 );


	this->SetSizer( Sizer1 );
	this->Layout();
	MainMenu = new wxMenuBar( 0 );
	MainFileDialog = new wxMenu();
	wxMenuItem* FileDialogItem0;
	FileDialogItem0 = new wxMenuItem( MainFileDialog, wxIDOpenConfig, wxString( wxT("Открыть конфигурацию") ) , wxEmptyString, wxITEM_NORMAL );
	MainFileDialog->Append( FileDialogItem0 );

	wxMenuItem* FileDialogItem1;
	FileDialogItem1 = new wxMenuItem( MainFileDialog, wxIDOpenFile, wxString( wxT("Выход") ) , wxEmptyString, wxITEM_NORMAL );
	MainFileDialog->Append( FileDialogItem1 );

	MainMenu->Append( MainFileDialog, wxT("Файл") );

	MainConfigDialog = new wxMenu();
	wxMenuItem* ConfigDialogItem0;
	ConfigDialogItem0 = new wxMenuItem( MainConfigDialog, wxIDNetworkConfig, wxString( wxT("Настройка сети") ) , wxEmptyString, wxITEM_NORMAL );
	MainConfigDialog->Append( ConfigDialogItem0 );

	wxMenuItem* ConfigDialogItem1;
	ConfigDialogItem1 = new wxMenuItem( MainConfigDialog, wxIDPortSelect, wxString( wxT("Выбрать порт") ) , wxEmptyString, wxITEM_NORMAL );
	MainConfigDialog->Append( ConfigDialogItem1 );

	MainMenu->Append( MainConfigDialog, wxT("Настройки") );

	MainAboutDialog = new wxMenu();
	wxMenuItem* AboutDialogItem0;
	AboutDialogItem0 = new wxMenuItem( MainAboutDialog, wxIDAbout, wxString( wxT("О программе") ) , wxEmptyString, wxITEM_NORMAL );
	MainAboutDialog->Append( AboutDialogItem0 );

	MainMenu->Append( MainAboutDialog, wxT("О программе") );

	this->SetMenuBar( MainMenu );


	this->Centre( wxBOTH );

	// Connect Events
	MainFileDialog->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainWindowUI::MainFileFrogramOut ), this, FileDialogItem1->GetId());
	MainAboutDialog->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainWindowUI::AboutDialogEvent ), this, AboutDialogItem0->GetId());
}

MainWindowUI::~MainWindowUI()
{
	// Disconnect Events

}

AboutDialogUI::AboutDialogUI( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	AboutDialogInfo = new wxStaticText( this, wxID_ANY, wxT("Терминал-конфигуратор "), wxDefaultPosition, wxDefaultSize, 0 );
	AboutDialogInfo->Wrap( -1 );
	bSizer4->Add( AboutDialogInfo, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	AboutDialogVersion = new wxStaticText( this, wxID_ANY, wxT("версия 0.1 "), wxDefaultPosition, wxDefaultSize, 0 );
	AboutDialogVersion->Wrap( -1 );
	bSizer4->Add( AboutDialogVersion, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	AboutDialogOutButton = new wxButton( this, wxIDAboutButton, wxT("Назад"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( AboutDialogOutButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	AboutDialogOutButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialogUI::AboutDialogClose ), NULL, this );
}

AboutDialogUI::~AboutDialogUI()
{
	// Disconnect Events
	AboutDialogOutButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialogUI::AboutDialogClose ), NULL, this );

}
