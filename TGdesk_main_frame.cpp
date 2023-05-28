#include "TGdesk_main_frame.h"

TGdesk_main_frame::TGdesk_main_frame( wxWindow* parent )
:
main_frame( parent )
{

}

void TGdesk_main_frame::main_frameOnClose( wxCloseEvent& event )
{
Destroy();
}

void TGdesk_main_frame::logoutOnButtonClick( wxCommandEvent& event )
{
wxDialog *logging = new TGdesk_login_dial(this);
logging->Show(true);
Disable();
}

void TGdesk_main_frame::add_car_buttonOnButtonClick( wxCommandEvent& event )
{
wxFrame *form = new TGdesk_add_car_form(this);
form->Show(true);
Disable();
}

void TGdesk_main_frame::import_buttonOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement import_buttonOnButtonClick
}

void TGdesk_main_frame::add_client_buttonOnButtonClick( wxCommandEvent& event )
{
    wxDialog * form = new TGdesk_add_client_form(this);
    form->Show();
    Disable();
}

void TGdesk_main_frame::import_client_buttonOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement import_client_buttonOnButtonClick
}

void TGdesk_main_frame::export_buttonOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement export_buttonOnButtonClick
}

void TGdesk_main_frame::del_buttonOnButtonClick( wxCommandEvent& event )
{
    wxDialog *form = new TGdesk_delete_client_form(this);
    form->Show();
    Disable();
}

void TGdesk_main_frame::export_client_buttonOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement export_client_buttonOnButtonClick
}
