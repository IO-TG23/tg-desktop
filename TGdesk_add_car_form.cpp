#include "TGdesk_add_car_form.h"

TGdesk_add_car_form::TGdesk_add_car_form( wxWindow* parent )
:
add_car_form( parent )
{

}

void TGdesk_add_car_form::add_car_formOnClose( wxCloseEvent& event )
{
Destroy();
}

void TGdesk_add_car_form::descrOnText( wxCommandEvent& event )
{
// TODO: Implement descrOnText
}

void TGdesk_add_car_form::backOnButtonClick( wxCommandEvent& event )
{
Close();
}

void TGdesk_add_car_form::enterOnButtonClick( wxCommandEvent& event )
{
wxMessageDialog dlg(this, wxT("Pomyślnie wprowadzono pojazd."), wxMessageBoxCaptionStr, wxOK);
dlg.ShowModal();

Close();
}
