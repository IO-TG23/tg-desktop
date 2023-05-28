#include "TGdesk_delete_client_form.h"

TGdesk_delete_client_form::TGdesk_delete_client_form( wxWindow* parent )
:
delete_client_form( parent )
{

}

void TGdesk_delete_client_form::add_client_formOnClose( wxCloseEvent& event )
{
Destroy();
GetParent()->Enable();
}

void TGdesk_delete_client_form::add_client_formOnIconize( wxIconizeEvent& event )
{
// TODO: Implement add_client_formOnIconize
}

void TGdesk_delete_client_form::del_buttonOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement del_buttonOnButtonClick
}
