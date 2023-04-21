#include "TGdesk_login_dial.h"

TGdesk_login_dial::TGdesk_login_dial( wxWindow* parent )
:
login_dial( parent )
{

}

void TGdesk_login_dial::login_dialOnClose( wxCloseEvent& event )
{
    GetParent()->Close();
}

void TGdesk_login_dial::m_textCtrl1OnTextEnter( wxCommandEvent& event )
{
// TODO: Implement m_textCtrl1OnTextEnter
}

void TGdesk_login_dial::m_textCtrl1OnTextMaxLen( wxCommandEvent& event )
{
// TODO: Implement m_textCtrl1OnTextMaxLen
}

void TGdesk_login_dial::m_textCtrl11OnTextEnter( wxCommandEvent& event )
{
// TODO: Implement m_textCtrl11OnTextEnter
}

void TGdesk_login_dial::m_textCtrl11OnTextMaxLen( wxCommandEvent& event )
{
// TODO: Implement m_textCtrl11OnTextMaxLen
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
