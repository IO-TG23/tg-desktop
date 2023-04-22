#include "TGdesk_login_dial.h"

TGdesk_login_dial::TGdesk_login_dial( wxWindow* parent )
:
login_dial( parent )
{

}

void TGdesk_login_dial::login_dialOnClose( wxCloseEvent& event )
{
GetParent()->Close();
Destroy();
}

void TGdesk_login_dial::login_fieldOnTextEnter( wxCommandEvent& event )
{
// TODO: Implement login_fieldOnTextEnter
}

void TGdesk_login_dial::login_fieldOnTextMaxLen( wxCommandEvent& event )
{
// TODO: Implement login_fieldOnTextMaxLen
}

void TGdesk_login_dial::passwd_fieldOnTextEnter( wxCommandEvent& event )
{
// TODO: Implement passwd_fieldOnTextEnter
}

void TGdesk_login_dial::passwd_fieldOnTextMaxLen( wxCommandEvent& event )
{
// TODO: Implement passwd_fieldOnTextMaxLen
}

void TGdesk_login_dial::login_buttonOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement login_buttonOnButtonClick
Close();
}

void TGdesk_login_dial::regiter_buttonOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement regiter_buttonOnButtonClick
}
