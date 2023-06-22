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
	this->SetSizeHints( wxSize( 500,300 ), wxDefaultSize );
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

	m_staticText411 = new wxStaticText( this, wxID_ANY, wxT("Pojazd"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText411->Wrap( -1 );
	m_staticText411->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer14->Add( m_staticText411, 1, wxALL|wxEXPAND, 5 );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Pojazd z pliku"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer14->Add( m_staticText4, 1, wxALL|wxEXPAND, 5 );

	m_staticText4111 = new wxStaticText( this, wxID_ANY, wxT("Klient"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4111->Wrap( -1 );
	m_staticText4111->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer14->Add( m_staticText4111, 1, wxALL|wxEXPAND, 5 );

	m_staticText41 = new wxStaticText( this, wxID_ANY, wxT("Klient z pliku"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	m_staticText41->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer14->Add( m_staticText41, 1, wxALL|wxEXPAND, 5 );


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

	add_client_button = new wxButton( this, wxID_ANY, wxT("Dodaj"), wxDefaultPosition, wxDefaultSize, 0 );
	add_client_button->SetForegroundColour( wxColour( 229, 229, 229 ) );
	add_client_button->SetBackgroundColour( wxColour( 51, 19, 11 ) );

	bSizer15->Add( add_client_button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	import_client_button = new wxButton( this, wxID_ANY, wxT("Import"), wxDefaultPosition, wxDefaultSize, 0 );
	import_client_button->SetForegroundColour( wxColour( 229, 229, 229 ) );
	import_client_button->SetBackgroundColour( wxColour( 51, 19, 11 ) );

	bSizer15->Add( import_client_button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer13->Add( bSizer15, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer151;
	bSizer151 = new wxBoxSizer( wxVERTICAL );


	bSizer151->Add( 0, 0, 1, wxEXPAND, 5 );

	export_button = new wxButton( this, wxID_ANY, wxT("Eksport"), wxDefaultPosition, wxDefaultSize, 0 );
	export_button->SetForegroundColour( wxColour( 229, 229, 229 ) );
	export_button->SetBackgroundColour( wxColour( 51, 19, 11 ) );

	bSizer151->Add( export_button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	del_button = new wxButton( this, wxID_ANY, wxT("Usuń"), wxDefaultPosition, wxDefaultSize, 0 );
	del_button->SetForegroundColour( wxColour( 229, 229, 229 ) );
	del_button->SetBackgroundColour( wxColour( 51, 19, 11 ) );

	bSizer151->Add( del_button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	export_client_button = new wxButton( this, wxID_ANY, wxT("Eksport"), wxDefaultPosition, wxDefaultSize, 0 );
	export_client_button->SetForegroundColour( wxColour( 229, 229, 229 ) );
	export_client_button->SetBackgroundColour( wxColour( 51, 19, 11 ) );

	bSizer151->Add( export_client_button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


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
	add_client_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::add_client_buttonOnButtonClick ), NULL, this );
	import_client_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::import_client_buttonOnButtonClick ), NULL, this );
	export_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::export_buttonOnButtonClick ), NULL, this );
	del_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::del_buttonOnButtonClick ), NULL, this );
	export_client_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::export_client_buttonOnButtonClick ), NULL, this );
}

main_frame::~main_frame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( main_frame::main_frameOnClose ) );
	logout->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::logoutOnButtonClick ), NULL, this );
	add_car_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::add_car_buttonOnButtonClick ), NULL, this );
	import_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::import_buttonOnButtonClick ), NULL, this );
	add_client_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::add_client_buttonOnButtonClick ), NULL, this );
	import_client_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::import_client_buttonOnButtonClick ), NULL, this );
	export_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::export_buttonOnButtonClick ), NULL, this );
	del_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::del_buttonOnButtonClick ), NULL, this );
	export_client_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_frame::export_client_buttonOnButtonClick ), NULL, this );

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

	bSizer3->Add( m_staticText1, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

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

	bSizer31->Add( m_staticText11, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	passwd_field = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD|wxTE_PROCESS_ENTER );
	passwd_field->SetForegroundColour( wxColour( 77, 28, 16 ) );
	passwd_field->SetBackgroundColour( wxColour( 144, 144, 144 ) );
	passwd_field->SetMinSize( wxSize( 150,-1 ) );

	bSizer31->Add( passwd_field, 0, wxALL|wxALIGN_BOTTOM, 5 );


	bSizer2->Add( bSizer31, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer311;
	bSizer311 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText111 = new wxStaticText( this, wxID_ANY, wxT("Kod:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111->Wrap( -1 );
	m_staticText111->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer311->Add( m_staticText111, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	auth_code_field = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	auth_code_field->SetForegroundColour( wxColour( 77, 28, 16 ) );
	auth_code_field->SetBackgroundColour( wxColour( 144, 144, 144 ) );
	auth_code_field->SetMinSize( wxSize( 150,-1 ) );

	bSizer311->Add( auth_code_field, 0, wxALL|wxALIGN_BOTTOM, 5 );


	bSizer2->Add( bSizer311, 1, wxALIGN_CENTER_HORIZONTAL, 5 );


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
	auth_code_field->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( login_dial::auth_code_fieldOnTextEnter ), NULL, this );
	auth_code_field->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( login_dial::auth_code_fieldOnTextMaxLen ), NULL, this );
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
	auth_code_field->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( login_dial::auth_code_fieldOnTextEnter ), NULL, this );
	auth_code_field->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( login_dial::auth_code_fieldOnTextMaxLen ), NULL, this );
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


	bSizer1->Add( bSizer2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


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

add_client_form::add_client_form( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetForegroundColour( wxColour( 30, 11, 6 ) );
	this->SetBackgroundColour( wxColour( 128, 48, 28 ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );


	bSizer2->Add( 0, 20, 0, 0, 5 );

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Numer id"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	m_staticText1->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer2->Add( m_staticText1, 1, wxALL, 5 );

	id_enter = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	id_enter->SetForegroundColour( wxColour( 77, 28, 16 ) );
	id_enter->SetBackgroundColour( wxColour( 144, 144, 144 ) );
	id_enter->SetMinSize( wxSize( 150,-1 ) );

	bSizer2->Add( id_enter, 0, wxALL, 5 );


	bSizer1->Add( bSizer2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );


	bSizer21->Add( 0, 20, 0, 0, 5 );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("e-mail"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	m_staticText11->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer21->Add( m_staticText11, 1, wxALL, 5 );

	email_enter = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	email_enter->SetForegroundColour( wxColour( 77, 28, 16 ) );
	email_enter->SetBackgroundColour( wxColour( 144, 144, 144 ) );
	email_enter->SetMinSize( wxSize( 150,-1 ) );

	bSizer21->Add( email_enter, 0, wxALL, 5 );


	bSizer1->Add( bSizer21, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer1->Add( 0, 15, 0, 0, 5 );

	add_button = new wxButton( this, wxID_ANY, wxT("Dodaj"), wxDefaultPosition, wxDefaultSize, 0 );
	add_button->SetForegroundColour( wxColour( 229, 229, 229 ) );
	add_button->SetBackgroundColour( wxColour( 50, 19, 11 ) );

	bSizer1->Add( add_button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( add_client_form::add_client_formOnClose ) );
	this->Connect( wxEVT_ICONIZE, wxIconizeEventHandler( add_client_form::add_client_formOnIconize ) );
	id_enter->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( add_client_form::id_enterOnText ), NULL, this );
	id_enter->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( add_client_form::id_enterOnTextEnter ), NULL, this );
	id_enter->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( add_client_form::id_enterOnTextMaxLen ), NULL, this );
	email_enter->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( add_client_form::email_enterOnText ), NULL, this );
	email_enter->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( add_client_form::email_enterOnTextEnter ), NULL, this );
	email_enter->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( add_client_form::email_enterOnTextMaxLen ), NULL, this );
	add_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( add_client_form::add_buttonOnButtonClick ), NULL, this );
}

add_client_form::~add_client_form()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( add_client_form::add_client_formOnClose ) );
	this->Disconnect( wxEVT_ICONIZE, wxIconizeEventHandler( add_client_form::add_client_formOnIconize ) );
	id_enter->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( add_client_form::id_enterOnText ), NULL, this );
	id_enter->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( add_client_form::id_enterOnTextEnter ), NULL, this );
	id_enter->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( add_client_form::id_enterOnTextMaxLen ), NULL, this );
	email_enter->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( add_client_form::email_enterOnText ), NULL, this );
	email_enter->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( add_client_form::email_enterOnTextEnter ), NULL, this );
	email_enter->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( add_client_form::email_enterOnTextMaxLen ), NULL, this );
	add_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( add_client_form::add_buttonOnButtonClick ), NULL, this );

}

delete_client_form::delete_client_form( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 600,200 ), wxDefaultSize );
	this->SetForegroundColour( wxColour( 30, 11, 6 ) );
	this->SetBackgroundColour( wxColour( 128, 48, 28 ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Użytkownik"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	m_staticText1->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer2->Add( m_staticText1, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString client_idChoices;
	client_id = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, client_idChoices, 0 );
	client_id->SetSelection( 0 );
	client_id->SetForegroundColour( wxColour( 77, 28, 16 ) );
	client_id->SetBackgroundColour( wxColour( 255, 255, 255 ) );
	client_id->SetMinSize( wxSize( -1,40 ) );
	client_id->SetMaxSize( wxSize( 400,-1 ) );

	bSizer2->Add( client_id, 0, wxALL, 5 );


	bSizer1->Add( bSizer2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Powtórz"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	m_staticText11->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer21->Add( m_staticText11, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	repeat = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	repeat->SetForegroundColour( wxColour( 77, 28, 16 ) );
	repeat->SetBackgroundColour( wxColour( 144, 144, 144 ) );
	repeat->SetMinSize( wxSize( 250,-1 ) );

	bSizer21->Add( repeat, 0, wxALL, 5 );


	bSizer1->Add( bSizer21, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer1->Add( 0, 15, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	del_button = new wxButton( this, wxID_ANY, wxT("Usuń"), wxDefaultPosition, wxDefaultSize, 0 );
	del_button->SetForegroundColour( wxColour( 229, 229, 229 ) );
	del_button->SetBackgroundColour( wxColour( 50, 19, 11 ) );

	bSizer1->Add( del_button, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( delete_client_form::add_client_formOnClose ) );
	this->Connect( wxEVT_ICONIZE, wxIconizeEventHandler( delete_client_form::add_client_formOnIconize ) );
	del_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( delete_client_form::del_buttonOnButtonClick ), NULL, this );
}

delete_client_form::~delete_client_form()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( delete_client_form::add_client_formOnClose ) );
	this->Disconnect( wxEVT_ICONIZE, wxIconizeEventHandler( delete_client_form::add_client_formOnIconize ) );
	del_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( delete_client_form::del_buttonOnButtonClick ), NULL, this );

}

add_car_form::add_car_form( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 600,700 ), wxDefaultSize );
	this->SetForegroundColour( wxColour( 144, 144, 144 ) );
	this->SetBackgroundColour( wxColour( 128, 48, 28 ) );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer184;
	bSizer184 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText10113 = new wxStaticText( this, wxID_ANY, wxT("Nazwa:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10113->Wrap( -1 );
	m_staticText10113->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer184->Add( m_staticText10113, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	name = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 250,-1 ), 0 );
	name->SetForegroundColour( wxColour( 77, 28, 16 ) );
	name->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer184->Add( name, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer15->Add( bSizer184, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1012 = new wxStaticText( this, wxID_ANY, wxT("Rodzaj napędu i skrzyni biegów:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1012->Wrap( -1 );
	m_staticText1012->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer17->Add( m_staticText1012, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString drive_typeChoices[] = { wxT("FWD"), wxT("RWD"), wxT("AWD"), wxT("4WD") };
	int drive_typeNChoices = sizeof( drive_typeChoices ) / sizeof( wxString );
	drive_type = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, drive_typeNChoices, drive_typeChoices, 0 );
	drive_type->SetSelection( 0 );
	drive_type->SetForegroundColour( wxColour( 77, 28, 16 ) );
	drive_type->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	bSizer17->Add( drive_type, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString gear_boxChoices[] = { wxT("manualna"), wxT("automatyczna"), wxT("półautomatyczna"), wxT("dwusprzęgłowa") };
	int gear_boxNChoices = sizeof( gear_boxChoices ) / sizeof( wxString );
	gear_box = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, gear_boxNChoices, gear_boxChoices, 0 );
	gear_box->SetSelection( 0 );
	gear_box->SetForegroundColour( wxColour( 77, 28, 16 ) );
	gear_box->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	bSizer17->Add( gear_box, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer15->Add( bSizer17, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1011 = new wxStaticText( this, wxID_ANY, wxT("Lata produkcji:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1011->Wrap( -1 );
	m_staticText1011->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer18->Add( m_staticText1011, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	year_b = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 120,-1 ), 0 );
	#ifdef __WXGTK__
	if ( !year_b->HasFlag( wxTE_MULTILINE ) )
	{
	year_b->SetMaxLength( 4 );
	}
	#else
	year_b->SetMaxLength( 4 );
	#endif
	year_b->SetForegroundColour( wxColour( 77, 28, 16 ) );
	year_b->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer18->Add( year_b, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText10114 = new wxStaticText( this, wxID_ANY, wxT("-"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10114->Wrap( -1 );
	m_staticText10114->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer18->Add( m_staticText10114, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	year_e = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 120,-1 ), 0 );
	#ifdef __WXGTK__
	if ( !year_e->HasFlag( wxTE_MULTILINE ) )
	{
	year_e->SetMaxLength( 4 );
	}
	#else
	year_e->SetMaxLength( 4 );
	#endif
	year_e->SetForegroundColour( wxColour( 77, 28, 16 ) );
	year_e->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer18->Add( year_e, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer15->Add( bSizer18, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer181;
	bSizer181 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText101 = new wxStaticText( this, wxID_ANY, wxT("Liczba drzwi:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText101->Wrap( -1 );
	m_staticText101->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer181->Add( m_staticText101, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	doors_num = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !doors_num->HasFlag( wxTE_MULTILINE ) )
	{
	doors_num->SetMaxLength( 1 );
	}
	#else
	doors_num->SetMaxLength( 1 );
	#endif
	doors_num->SetForegroundColour( wxColour( 77, 28, 16 ) );
	doors_num->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer181->Add( doors_num, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText1014 = new wxStaticText( this, wxID_ANY, wxT("Liczba siedzeń:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1014->Wrap( -1 );
	m_staticText1014->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer181->Add( m_staticText1014, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	seat_num = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !seat_num->HasFlag( wxTE_MULTILINE ) )
	{
	seat_num->SetMaxLength( 1 );
	}
	#else
	seat_num->SetMaxLength( 1 );
	#endif
	seat_num->SetForegroundColour( wxColour( 77, 28, 16 ) );
	seat_num->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer181->Add( seat_num, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer15->Add( bSizer181, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer182;
	bSizer182 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText10111 = new wxStaticText( this, wxID_ANY, wxT("Pojemość bagażnika:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10111->Wrap( -1 );
	m_staticText10111->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer182->Add( m_staticText10111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	cargo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !cargo->HasFlag( wxTE_MULTILINE ) )
	{
	cargo->SetMaxLength( 7 );
	}
	#else
	cargo->SetMaxLength( 7 );
	#endif
	cargo->SetForegroundColour( wxColour( 77, 28, 16 ) );
	cargo->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer182->Add( cargo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText101112 = new wxStaticText( this, wxID_ANY, wxT("l"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText101112->Wrap( -1 );
	m_staticText101112->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer182->Add( m_staticText101112, 0, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer15->Add( bSizer182, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1811;
	bSizer1811 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1015 = new wxStaticText( this, wxID_ANY, wxT("Dł. x Szer. x Wys. [mm]:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1015->Wrap( -1 );
	m_staticText1015->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer1811->Add( m_staticText1015, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	length = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !length->HasFlag( wxTE_MULTILINE ) )
	{
	length->SetMaxLength( 4 );
	}
	#else
	length->SetMaxLength( 4 );
	#endif
	length->SetForegroundColour( wxColour( 77, 28, 16 ) );
	length->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer1811->Add( length, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText1011121 = new wxStaticText( this, wxID_ANY, wxT("x"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1011121->Wrap( -1 );
	m_staticText1011121->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer1811->Add( m_staticText1011121, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	width = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !width->HasFlag( wxTE_MULTILINE ) )
	{
	width->SetMaxLength( 4 );
	}
	#else
	width->SetMaxLength( 4 );
	#endif
	width->SetForegroundColour( wxColour( 77, 28, 16 ) );
	width->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer1811->Add( width, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText1011122 = new wxStaticText( this, wxID_ANY, wxT("x"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1011122->Wrap( -1 );
	m_staticText1011122->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer1811->Add( m_staticText1011122, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	height = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !height->HasFlag( wxTE_MULTILINE ) )
	{
	height->SetMaxLength( 4 );
	}
	#else
	height->SetMaxLength( 4 );
	#endif
	height->SetForegroundColour( wxColour( 77, 28, 16 ) );
	height->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer1811->Add( height, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer15->Add( bSizer1811, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1821;
	bSizer1821 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText101111 = new wxStaticText( this, wxID_ANY, wxT("Rozstaw osi:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText101111->Wrap( -1 );
	m_staticText101111->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer1821->Add( m_staticText101111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	axes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !axes->HasFlag( wxTE_MULTILINE ) )
	{
	axes->SetMaxLength( 4 );
	}
	#else
	axes->SetMaxLength( 4 );
	#endif
	axes->SetForegroundColour( wxColour( 77, 28, 16 ) );
	axes->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer1821->Add( axes, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText1011123 = new wxStaticText( this, wxID_ANY, wxT("mm"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1011123->Wrap( -1 );
	m_staticText1011123->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer1821->Add( m_staticText1011123, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxRIGHT, 5 );


	bSizer15->Add( bSizer1821, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1812;
	bSizer1812 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1016 = new wxStaticText( this, wxID_ANY, wxT("Rozstaw kół przód:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1016->Wrap( -1 );
	m_staticText1016->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer1812->Add( m_staticText1016, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	fweels = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !fweels->HasFlag( wxTE_MULTILINE ) )
	{
	fweels->SetMaxLength( 4 );
	}
	#else
	fweels->SetMaxLength( 4 );
	#endif
	fweels->SetForegroundColour( wxColour( 77, 28, 16 ) );
	fweels->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer1812->Add( fweels, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText10111231 = new wxStaticText( this, wxID_ANY, wxT("mm"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10111231->Wrap( -1 );
	m_staticText10111231->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer1812->Add( m_staticText10111231, 0, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer1812->Add( 10, 0, 0, 0, 5 );

	m_staticText10141 = new wxStaticText( this, wxID_ANY, wxT("Rozstaw kół tył:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10141->Wrap( -1 );
	m_staticText10141->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer1812->Add( m_staticText10141, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	rweels = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !rweels->HasFlag( wxTE_MULTILINE ) )
	{
	rweels->SetMaxLength( 4 );
	}
	#else
	rweels->SetMaxLength( 4 );
	#endif
	rweels->SetForegroundColour( wxColour( 77, 28, 16 ) );
	rweels->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer1812->Add( rweels, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText10111232 = new wxStaticText( this, wxID_ANY, wxT("mm"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10111232->Wrap( -1 );
	m_staticText10111232->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer1812->Add( m_staticText10111232, 0, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer15->Add( bSizer1812, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer18211;
	bSizer18211 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1011111 = new wxStaticText( this, wxID_ANY, wxT("Opis pojazdu:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1011111->Wrap( -1 );
	m_staticText1011111->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer18211->Add( m_staticText1011111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	descr = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_NO_VSCROLL );
	descr->SetForegroundColour( wxColour( 77, 28, 16 ) );
	descr->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer18211->Add( descr, 1, wxALL|wxEXPAND, 5 );


	bSizer15->Add( bSizer18211, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer18212;
	bSizer18212 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1011112 = new wxStaticText( this, wxID_ANY, wxT("Cena:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1011112->Wrap( -1 );
	m_staticText1011112->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer18212->Add( m_staticText1011112, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	price = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	price->SetForegroundColour( wxColour( 77, 28, 16 ) );
	price->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer18212->Add( price, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer15->Add( bSizer18212, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer18121;
	bSizer18121 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText10161 = new wxStaticText( this, wxID_ANY, wxT("Telefon:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10161->Wrap( -1 );
	m_staticText10161->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer18121->Add( m_staticText10161, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	phone_num = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	phone_num->SetForegroundColour( wxColour( 77, 28, 16 ) );
	phone_num->SetBackgroundColour( wxColour( 144, 144, 144 ) );
	phone_num->SetMinSize( wxSize( 150,-1 ) );

	bSizer18121->Add( phone_num, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer18121->Add( 10, 0, 0, 0, 5 );

	m_staticText101411 = new wxStaticText( this, wxID_ANY, wxT("e-mail:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText101411->Wrap( -1 );
	m_staticText101411->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer18121->Add( m_staticText101411, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	email = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	email->SetForegroundColour( wxColour( 77, 28, 16 ) );
	email->SetBackgroundColour( wxColour( 144, 144, 144 ) );
	email->SetMinSize( wxSize( 150,-1 ) );

	bSizer18121->Add( email, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer15->Add( bSizer18121, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer182111;
	bSizer182111 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText10111111 = new wxStaticText( this, wxID_ANY, wxT("Opis oferty:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10111111->Wrap( -1 );
	m_staticText10111111->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer182111->Add( m_staticText10111111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	descr_offer = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_NO_VSCROLL );
	descr_offer->SetForegroundColour( wxColour( 77, 28, 16 ) );
	descr_offer->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer182111->Add( descr_offer, 1, wxALL|wxEXPAND, 5 );


	bSizer15->Add( bSizer182111, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxHORIZONTAL );

	back = new wxButton( this, wxID_ANY, wxT("Cofnij"), wxDefaultPosition, wxDefaultSize, 0 );
	back->SetForegroundColour( wxColour( 229, 229, 229 ) );
	back->SetBackgroundColour( wxColour( 50, 19, 11 ) );

	bSizer37->Add( back, 0, wxALL, 5 );

	enter = new wxButton( this, wxID_ANY, wxT("Wprowadź"), wxDefaultPosition, wxDefaultSize, 0 );
	enter->SetForegroundColour( wxColour( 229, 229, 229 ) );
	enter->SetBackgroundColour( wxColour( 50, 19, 11 ) );

	bSizer37->Add( enter, 0, wxALL, 5 );


	bSizer15->Add( bSizer37, 1, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer15 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( add_car_form::add_car_formOnClose ) );
	name->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::nameOnChar ), NULL, this );
	year_b->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::year_bOnChar ), NULL, this );
	year_e->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::year_eOnChar ), NULL, this );
	doors_num->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::doors_numOnChar ), NULL, this );
	seat_num->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::seat_numOnChar ), NULL, this );
	cargo->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::cargoOnChar ), NULL, this );
	length->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::lengthOnChar ), NULL, this );
	width->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::widthOnChar ), NULL, this );
	height->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::heightOnChar ), NULL, this );
	axes->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::axesOnChar ), NULL, this );
	fweels->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::fweelsOnChar ), NULL, this );
	rweels->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::rweelsOnChar ), NULL, this );
	descr->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::descrOnChar ), NULL, this );
	price->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::priceOnChar ), NULL, this );
	phone_num->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::phone_numOnChar ), NULL, this );
	email->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::emailOnChar ), NULL, this );
	descr_offer->Connect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::descr_offerOnChar ), NULL, this );
	back->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( add_car_form::backOnButtonClick ), NULL, this );
	enter->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( add_car_form::enterOnButtonClick ), NULL, this );
}

add_car_form::~add_car_form()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( add_car_form::add_car_formOnClose ) );
	name->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::nameOnChar ), NULL, this );
	year_b->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::year_bOnChar ), NULL, this );
	year_e->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::year_eOnChar ), NULL, this );
	doors_num->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::doors_numOnChar ), NULL, this );
	seat_num->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::seat_numOnChar ), NULL, this );
	cargo->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::cargoOnChar ), NULL, this );
	length->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::lengthOnChar ), NULL, this );
	width->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::widthOnChar ), NULL, this );
	height->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::heightOnChar ), NULL, this );
	axes->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::axesOnChar ), NULL, this );
	fweels->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::fweelsOnChar ), NULL, this );
	rweels->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::rweelsOnChar ), NULL, this );
	descr->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::descrOnChar ), NULL, this );
	price->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::priceOnChar ), NULL, this );
	phone_num->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::phone_numOnChar ), NULL, this );
	email->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::emailOnChar ), NULL, this );
	descr_offer->Disconnect( wxEVT_CHAR, wxKeyEventHandler( add_car_form::descr_offerOnChar ), NULL, this );
	back->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( add_car_form::backOnButtonClick ), NULL, this );
	enter->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( add_car_form::enterOnButtonClick ), NULL, this );

}

Register_QR::Register_QR( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxVERTICAL );

	label = new wxStaticText( this, wxID_ANY, wxT("Przesłano zgłoszenie. Zeskanuj kod do logowania:"), wxDefaultPosition, wxDefaultSize, 0 );
	label->Wrap( -1 );
	bSizer31->Add( label, 0, wxALL, 5 );

	m_bitmap1 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap1->SetMinSize( wxSize( -1,300 ) );

	bSizer31->Add( m_bitmap1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	dialog = new wxStdDialogButtonSizer();
	dialogOK = new wxButton( this, wxID_OK );
	dialog->AddButton( dialogOK );
	dialog->Realize();

	bSizer31->Add( dialog, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer31 );
	this->Layout();
	bSizer31->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	dialogOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Register_QR::dialogOnOKButtonClick ), NULL, this );
}

Register_QR::~Register_QR()
{
	// Disconnect Events
	dialogOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Register_QR::dialogOnOKButtonClick ), NULL, this );

}
