#include "TGdesk_register_dial.h"

TGdesk_register_dial::TGdesk_register_dial( wxWindow* parent )
:
register_dial( parent )
{

}

void TGdesk_register_dial::register_dialOnClose( wxCloseEvent& event )
{
GetParent()->Enable();
Destroy();
}

void TGdesk_register_dial::register_dialOnIconize( wxIconizeEvent& event )
{
// TODO: Implement register_dialOnIconize
}

void TGdesk_register_dial::login_fieldOnText( wxCommandEvent& event )
{
// TODO: Implement login_fieldOnText
}

void TGdesk_register_dial::login_fieldOnTextEnter( wxCommandEvent& event )
{
// TODO: Implement login_fieldOnTextEnter
}

void TGdesk_register_dial::login_fieldOnTextMaxLen( wxCommandEvent& event )
{
// TODO: Implement login_fieldOnTextMaxLen
}

void TGdesk_register_dial::passwd_field1OnText( wxCommandEvent& event )
{
// TODO: Implement passwd_field1OnText
}

void TGdesk_register_dial::passwd_fieldOnTextEnter( wxCommandEvent& event )
{
// TODO: Implement passwd_fieldOnTextEnter
}

void TGdesk_register_dial::passwd_fieldOnTextMaxLen( wxCommandEvent& event )
{
// TODO: Implement passwd_fieldOnTextMaxLen
}

void TGdesk_register_dial::passwd2_fieldOnText( wxCommandEvent& event )
{
// TODO: Implement passwd2_fieldOnText
}

void TGdesk_register_dial::passwd2_fieldOnTextEnter( wxCommandEvent& event )
{
// TODO: Implement passwd2_fieldOnTextEnter
}

void TGdesk_register_dial::passwd2_fieldOnTextMaxLen( wxCommandEvent& event )
{
// TODO: Implement passwd2_fieldOnTextMaxLen
}

void TGdesk_register_dial::register_buttonOnButtonClick( wxCommandEvent& event )
{
Close();
}
