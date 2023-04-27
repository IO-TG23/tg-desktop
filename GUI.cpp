///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

main_frame::main_frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 128, 48, 28 ) );
	this->Enable( false );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );


	bSizer5->Add( 10, 10, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxVERTICAL );

	logout = new wxButton( this, wxID_ANY, wxT("Wyloguj"), wxDefaultPosition, wxDefaultSize, 0 );
	logout->SetForegroundColour( wxColour( 229, 229, 229 ) );
	logout->SetBackgroundColour( wxColour( 51, 19, 11 ) );

	bSizer25->Add( logout, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer5->Add( bSizer25, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	m_staticText411 = new wxStaticText( this, wxID_ANY, wxT("Nowy pojazd"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText411->Wrap( -1 );
	m_staticText411->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer14->Add( m_staticText411, 1, wxALL|wxEXPAND, 5 );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Dane z pliku"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer14->Add( m_staticText4, 1, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer14, 1, wxEXPAND|wxLEFT, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );

	add_car_button = new wxButton( this, wxID_ANY, wxT("Dodaj"), wxDefaultPosition, wxDefaultSize, 0 );
	add_car_button->SetForegroundColour( wxColour( 229, 229, 229 ) );
	add_car_button->SetBackgroundColour( wxColour( 51, 19, 11 ) );

	bSizer15->Add( add_car_button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	import_button = new wxButton( this, wxID_ANY, wxT("Import"), wxDefaultPosition, wxDefaultSize, 0 );
	import_button->SetForegroundColour( wxColour( 229, 229, 229 ) );
	import_button->SetBackgroundColour( wxColour( 51, 19, 11 ) );

	bSizer15->Add( import_button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer13->Add( bSizer15, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer151;
	bSizer151 = new wxBoxSizer( wxVERTICAL );


	bSizer151->Add( 0, 0, 1, wxEXPAND, 5 );

	export_button = new wxButton( this, wxID_ANY, wxT("Eksport"), wxDefaultPosition, wxDefaultSize, 0 );
	export_button->SetForegroundColour( wxColour( 229, 229, 229 ) );
	export_button->SetBackgroundColour( wxColour( 51, 19, 11 ) );

	bSizer151->Add( export_button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer13->Add( bSizer151, 1, wxEXPAND, 5 );


	bSizer5->Add( bSizer13, 0, wxLEFT, 5 );


	this->SetSizer( bSizer5 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( main_frame::main_frameOnClose ) );
	logout->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::logoutOnButtonClick ), NULL, this );
	add_car_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::add_car_buttonOnButtonClick ), NULL, this );
	import_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::import_buttonOnButtonClick ), NULL, this );
	export_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::export_buttonOnButtonClick ), NULL, this );
}

main_frame::~main_frame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( main_frame::main_frameOnClose ) );
	logout->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::logoutOnButtonClick ), NULL, this );
	add_car_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::add_car_buttonOnButtonClick ), NULL, this );
	import_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::import_buttonOnButtonClick ), NULL, this );
	export_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::export_buttonOnButtonClick ), NULL, this );

}

login_dial::login_dial( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetForegroundColour( wxColour( 30, 11, 6 ) );
	this->SetBackgroundColour( wxColour( 128, 48, 28 ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );


	bSizer2->Add( 0, 15, 0, 0, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("e-mail"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	m_staticText1->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer3->Add( m_staticText1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	login_field = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	login_field->SetForegroundColour( wxColour( 77, 28, 16 ) );
	login_field->SetBackgroundColour( wxColour( 144, 144, 144 ) );
	login_field->SetMinSize( wxSize( 150,-1 ) );

	bSizer3->Add( login_field, 0, wxALL|wxALIGN_BOTTOM, 5 );


	bSizer2->Add( bSizer3, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Hasło"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	m_staticText11->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer31->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	passwd_field = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD|wxTE_PROCESS_ENTER );
	passwd_field->SetForegroundColour( wxColour( 77, 28, 16 ) );
	passwd_field->SetBackgroundColour( wxColour( 144, 144, 144 ) );
	passwd_field->SetMinSize( wxSize( 150,-1 ) );

	bSizer31->Add( passwd_field, 0, wxALL|wxALIGN_BOTTOM, 5 );


	bSizer2->Add( bSizer31, 1, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer2->Add( 0, 20, 0, 0, 5 );

	login_button = new wxButton( this, wxID_ANY, wxT("Zaloguj"), wxDefaultPosition, wxDefaultSize, 0 );
	login_button->SetForegroundColour( wxColour( 229, 229, 229 ) );
	login_button->SetBackgroundColour( wxColour( 50, 19, 11 ) );

	bSizer2->Add( login_button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	regiter_button = new wxButton( this, wxID_ANY, wxT("Utwórz konto"), wxDefaultPosition, wxDefaultSize, 0 );
	regiter_button->SetForegroundColour( wxColour( 229, 229, 229 ) );
	regiter_button->SetBackgroundColour( wxColour( 51, 19, 11 ) );

	bSizer2->Add( regiter_button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer1->Add( bSizer2, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( login_dial::login_dialOnClose ) );
	login_field->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( login_dial::login_fieldOnTextEnter ), NULL, this );
	login_field->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( login_dial::login_fieldOnTextMaxLen ), NULL, this );
	passwd_field->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( login_dial::passwd_fieldOnTextEnter ), NULL, this );
	passwd_field->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( login_dial::passwd_fieldOnTextMaxLen ), NULL, this );
	login_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( login_dial::login_buttonOnButtonClick ), NULL, this );
	regiter_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( login_dial::regiter_buttonOnButtonClick ), NULL, this );
}

login_dial::~login_dial()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( login_dial::login_dialOnClose ) );
	login_field->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( login_dial::login_fieldOnTextEnter ), NULL, this );
	login_field->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( login_dial::login_fieldOnTextMaxLen ), NULL, this );
	passwd_field->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( login_dial::passwd_fieldOnTextEnter ), NULL, this );
	passwd_field->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( login_dial::passwd_fieldOnTextMaxLen ), NULL, this );
	login_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( login_dial::login_buttonOnButtonClick ), NULL, this );
	regiter_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( login_dial::regiter_buttonOnButtonClick ), NULL, this );

}

register_dial::register_dial( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetForegroundColour( wxColour( 30, 11, 6 ) );
	this->SetBackgroundColour( wxColour( 128, 48, 28 ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );


	bSizer2->Add( 0, 20, 0, 0, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("e-mail"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	m_staticText1->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer21->Add( m_staticText1, 1, wxALIGN_RIGHT|wxALL, 5 );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Hasło"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	m_staticText11->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer21->Add( m_staticText11, 1, wxALIGN_RIGHT|wxALL, 5 );

	m_staticText111 = new wxStaticText( this, wxID_ANY, wxT("Powtórz hasło"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111->Wrap( -1 );
	m_staticText111->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer21->Add( m_staticText111, 1, wxALIGN_RIGHT|wxALL, 5 );


	bSizer2->Add( bSizer21, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer211;
	bSizer211 = new wxBoxSizer( wxVERTICAL );

	login_field = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	login_field->SetForegroundColour( wxColour( 77, 28, 16 ) );
	login_field->SetBackgroundColour( wxColour( 144, 144, 144 ) );
	login_field->SetMinSize( wxSize( 150,-1 ) );

	bSizer211->Add( login_field, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	passwd_field1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD|wxTE_PROCESS_ENTER );
	passwd_field1->SetForegroundColour( wxColour( 77, 28, 16 ) );
	passwd_field1->SetBackgroundColour( wxColour( 144, 144, 144 ) );
	passwd_field1->SetMinSize( wxSize( 150,-1 ) );

	bSizer211->Add( passwd_field1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	passwd2_field = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD|wxTE_PROCESS_ENTER );
	passwd2_field->SetForegroundColour( wxColour( 77, 28, 16 ) );
	passwd2_field->SetBackgroundColour( wxColour( 144, 144, 144 ) );
	passwd2_field->SetMinSize( wxSize( 150,-1 ) );

	bSizer211->Add( passwd2_field, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer2->Add( bSizer211, 1, wxEXPAND, 5 );


	bSizer1->Add( bSizer2, 1, wxALL, 5 );


	bSizer1->Add( 0, 15, 0, 0, 5 );

	register_button = new wxButton( this, wxID_ANY, wxT("Zarejestruj"), wxDefaultPosition, wxDefaultSize, 0 );
	register_button->SetForegroundColour( wxColour( 229, 229, 229 ) );
	register_button->SetBackgroundColour( wxColour( 50, 19, 11 ) );

	bSizer1->Add( register_button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( register_dial::register_dialOnClose ) );
	this->Connect( wxEVT_ICONIZE, wxIconizeEventHandler( register_dial::register_dialOnIconize ) );
	login_field->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( register_dial::login_fieldOnText ), NULL, this );
	login_field->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( register_dial::login_fieldOnTextEnter ), NULL, this );
	login_field->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( register_dial::login_fieldOnTextMaxLen ), NULL, this );
	passwd_field1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( register_dial::passwd_field1OnText ), NULL, this );
	passwd_field1->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( register_dial::passwd_fieldOnTextEnter ), NULL, this );
	passwd_field1->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( register_dial::passwd_fieldOnTextMaxLen ), NULL, this );
	passwd2_field->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( register_dial::passwd2_fieldOnText ), NULL, this );
	passwd2_field->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( register_dial::passwd2_fieldOnTextEnter ), NULL, this );
	passwd2_field->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( register_dial::passwd2_fieldOnTextMaxLen ), NULL, this );
	register_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( register_dial::register_buttonOnButtonClick ), NULL, this );
}

register_dial::~register_dial()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( register_dial::register_dialOnClose ) );
	this->Disconnect( wxEVT_ICONIZE, wxIconizeEventHandler( register_dial::register_dialOnIconize ) );
	login_field->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( register_dial::login_fieldOnText ), NULL, this );
	login_field->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( register_dial::login_fieldOnTextEnter ), NULL, this );
	login_field->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( register_dial::login_fieldOnTextMaxLen ), NULL, this );
	passwd_field1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( register_dial::passwd_field1OnText ), NULL, this );
	passwd_field1->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( register_dial::passwd_fieldOnTextEnter ), NULL, this );
	passwd_field1->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( register_dial::passwd_fieldOnTextMaxLen ), NULL, this );
	passwd2_field->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( register_dial::passwd2_fieldOnText ), NULL, this );
	passwd2_field->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( register_dial::passwd2_fieldOnTextEnter ), NULL, this );
	passwd2_field->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( register_dial::passwd2_fieldOnTextMaxLen ), NULL, this );
	register_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( register_dial::register_buttonOnButtonClick ), NULL, this );

}
