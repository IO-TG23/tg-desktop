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

	m_button411 = new wxButton( this, wxID_ANY, wxT("Dodaj"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button411->SetForegroundColour( wxColour( 229, 229, 229 ) );
	m_button411->SetBackgroundColour( wxColour( 51, 19, 11 ) );

	bSizer15->Add( m_button411, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_button4 = new wxButton( this, wxID_ANY, wxT("Import"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button4->SetForegroundColour( wxColour( 229, 229, 229 ) );
	m_button4->SetBackgroundColour( wxColour( 51, 19, 11 ) );

	bSizer15->Add( m_button4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer13->Add( bSizer15, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer151;
	bSizer151 = new wxBoxSizer( wxVERTICAL );


	bSizer151->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button41 = new wxButton( this, wxID_ANY, wxT("Eksport"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button41->SetForegroundColour( wxColour( 229, 229, 229 ) );
	m_button41->SetBackgroundColour( wxColour( 51, 19, 11 ) );

	bSizer151->Add( m_button41, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer13->Add( bSizer151, 1, wxEXPAND, 5 );


	bSizer5->Add( bSizer13, 0, wxLEFT, 5 );


	this->SetSizer( bSizer5 );
	this->Layout();

	this->Centre( wxBOTH );
}

main_frame::~main_frame()
{
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

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Login"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	m_staticText1->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer3->Add( m_staticText1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	m_textCtrl1->SetForegroundColour( wxColour( 77, 28, 16 ) );
	m_textCtrl1->SetBackgroundColour( wxColour( 144, 144, 144 ) );
	m_textCtrl1->SetMinSize( wxSize( 150,-1 ) );

	bSizer3->Add( m_textCtrl1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer3, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Hasło"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	m_staticText11->SetForegroundColour( wxColour( 20, 6, 4 ) );

	bSizer31->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl11 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD|wxTE_PROCESS_ENTER );
	m_textCtrl11->SetForegroundColour( wxColour( 77, 28, 16 ) );
	m_textCtrl11->SetBackgroundColour( wxColour( 144, 144, 144 ) );
	m_textCtrl11->SetMinSize( wxSize( 150,-1 ) );

	bSizer31->Add( m_textCtrl11, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


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
	m_textCtrl1->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( login_dial::m_textCtrl1OnTextEnter ), NULL, this );
	m_textCtrl1->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( login_dial::m_textCtrl1OnTextMaxLen ), NULL, this );
	m_textCtrl11->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( login_dial::m_textCtrl11OnTextEnter ), NULL, this );
	m_textCtrl11->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( login_dial::m_textCtrl11OnTextMaxLen ), NULL, this );
	login_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( login_dial::login_buttonOnButtonClick ), NULL, this );
	regiter_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( login_dial::regiter_buttonOnButtonClick ), NULL, this );
}

login_dial::~login_dial()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( login_dial::login_dialOnClose ) );
	m_textCtrl1->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( login_dial::m_textCtrl1OnTextEnter ), NULL, this );
	m_textCtrl1->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( login_dial::m_textCtrl1OnTextMaxLen ), NULL, this );
	m_textCtrl11->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( login_dial::m_textCtrl11OnTextEnter ), NULL, this );
	m_textCtrl11->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( login_dial::m_textCtrl11OnTextMaxLen ), NULL, this );
	login_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( login_dial::login_buttonOnButtonClick ), NULL, this );
	regiter_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( login_dial::regiter_buttonOnButtonClick ), NULL, this );

}
