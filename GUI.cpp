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

add_car_form::add_car_form( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetForegroundColour( wxColour( 144, 144, 144 ) );
	this->SetBackgroundColour( wxColour( 128, 48, 28 ) );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1012 = new wxStaticText( this, wxID_ANY, wxT("Rodzaj mapędu i skrzyni biegów:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1012->Wrap( -1 );
	m_staticText1012->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer17->Add( m_staticText1012, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString drive_typeChoices[] = { wxT("FWD"), wxT("RWD"), wxT("AWD"), wxT("4WD") };
	int drive_typeNChoices = sizeof( drive_typeChoices ) / sizeof( wxString );
	drive_type = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, drive_typeNChoices, drive_typeChoices, 0 );
	drive_type->SetSelection( 0 );
	drive_type->SetForegroundColour( wxColour( 77, 28, 16 ) );
	drive_type->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer17->Add( drive_type, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString gear_boxChoices[] = { wxT("manualna"), wxT("automatyczna"), wxT("półautomatyczna"), wxT("dwusprzęgłowa"), wxEmptyString };
	int gear_boxNChoices = sizeof( gear_boxChoices ) / sizeof( wxString );
	gear_box = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, gear_boxNChoices, gear_boxChoices, 0 );
	gear_box->SetSelection( 0 );
	gear_box->SetForegroundColour( wxColour( 77, 28, 16 ) );
	gear_box->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer17->Add( gear_box, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer15->Add( bSizer17, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1011 = new wxStaticText( this, wxID_ANY, wxT("Lata produkcji:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1011->Wrap( -1 );
	m_staticText1011->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer18->Add( m_staticText1011, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	years = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	years->SetForegroundColour( wxColour( 77, 28, 16 ) );
	years->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer18->Add( years, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer15->Add( bSizer18, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer181;
	bSizer181 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText101 = new wxStaticText( this, wxID_ANY, wxT("Liczba drzwi:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText101->Wrap( -1 );
	m_staticText101->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer181->Add( m_staticText101, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	doors_num = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	doors_num->SetForegroundColour( wxColour( 77, 28, 16 ) );
	doors_num->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer181->Add( doors_num, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText1014 = new wxStaticText( this, wxID_ANY, wxT("Liczba siedzeń:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1014->Wrap( -1 );
	m_staticText1014->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer181->Add( m_staticText1014, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	seat_num = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
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
	cargo->SetForegroundColour( wxColour( 77, 28, 16 ) );
	cargo->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer182->Add( cargo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer15->Add( bSizer182, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1811;
	bSizer1811 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1015 = new wxStaticText( this, wxID_ANY, wxT("Dł. x Szer. x Wys.:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1015->Wrap( -1 );
	m_staticText1015->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer1811->Add( m_staticText1015, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	length = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	length->SetForegroundColour( wxColour( 77, 28, 16 ) );
	length->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer1811->Add( length, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	width = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	width->SetForegroundColour( wxColour( 77, 28, 16 ) );
	width->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer1811->Add( width, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	height = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
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
	axes->SetForegroundColour( wxColour( 77, 28, 16 ) );
	axes->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer1821->Add( axes, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer15->Add( bSizer1821, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1812;
	bSizer1812 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1016 = new wxStaticText( this, wxID_ANY, wxT("Rozstaw kół przód:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1016->Wrap( -1 );
	m_staticText1016->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer1812->Add( m_staticText1016, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	fweels = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fweels->SetForegroundColour( wxColour( 77, 28, 16 ) );
	fweels->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer1812->Add( fweels, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText10141 = new wxStaticText( this, wxID_ANY, wxT("Rozstaw kół tył:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10141->Wrap( -1 );
	m_staticText10141->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer1812->Add( m_staticText10141, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	rweels = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	rweels->SetForegroundColour( wxColour( 77, 28, 16 ) );
	rweels->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer1812->Add( rweels, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer15->Add( bSizer1812, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer18211;
	bSizer18211 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1011111 = new wxStaticText( this, wxID_ANY, wxT("Krótki opis:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1011111->Wrap( -1 );
	m_staticText1011111->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer18211->Add( m_staticText1011111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	descr = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	descr->SetForegroundColour( wxColour( 77, 28, 16 ) );
	descr->SetBackgroundColour( wxColour( 144, 144, 144 ) );

	bSizer18211->Add( descr, 1, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );


	bSizer15->Add( bSizer18211, 1, wxEXPAND, 5 );

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
	descr->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( add_car_form::descrOnText ), NULL, this );
	back->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( add_car_form::backOnButtonClick ), NULL, this );
	enter->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( add_car_form::enterOnButtonClick ), NULL, this );
}

add_car_form::~add_car_form()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( add_car_form::add_car_formOnClose ) );
	descr->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( add_car_form::descrOnText ), NULL, this );
	back->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( add_car_form::backOnButtonClick ), NULL, this );
	enter->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( add_car_form::enterOnButtonClick ), NULL, this );

}
