#include "TGdesk_add_client_form.h"

TGdesk_add_client_form::TGdesk_add_client_form( wxWindow* parent )
:
add_client_form( parent )
{

}

void TGdesk_add_client_form::add_client_formOnClose( wxCloseEvent& event )
{
Destroy();
GetParent()->Enable();
}

void TGdesk_add_client_form::add_client_formOnIconize( wxIconizeEvent& event )
{
// TODO: Implement add_client_formOnIconize
}

void TGdesk_add_client_form::id_enterOnText( wxCommandEvent& event )
{
// TODO: Implement id_enterOnText
}

void TGdesk_add_client_form::id_enterOnTextEnter( wxCommandEvent& event )
{
// TODO: Implement id_enterOnTextEnter
}

void TGdesk_add_client_form::id_enterOnTextMaxLen( wxCommandEvent& event )
{
// TODO: Implement id_enterOnTextMaxLen
}

void TGdesk_add_client_form::email_enterOnText( wxCommandEvent& event )
{
// TODO: Implement email_enterOnText
}

void TGdesk_add_client_form::email_enterOnTextEnter( wxCommandEvent& event )
{
// TODO: Implement email_enterOnTextEnter
}

void TGdesk_add_client_form::email_enterOnTextMaxLen( wxCommandEvent& event )
{
// TODO: Implement email_enterOnTextMaxLen
}

void TGdesk_add_client_form::add_buttonOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement add_buttonOnButtonClick
}
