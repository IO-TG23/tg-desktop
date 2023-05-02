#include "TGdesk_add_car_form.h"

TGdesk_add_car_form::TGdesk_add_car_form( wxWindow* parent )
:
add_car_form( parent )
{

}

void TGdesk_add_car_form::add_car_formOnClose( wxCloseEvent& event )
{
Destroy();
GetParent()->Enable();
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
bool empty = years->GetLineLength(0) == 0;
empty |= doors_num->GetLineLength(0) == 0;
empty |= seat_num->GetLineLength(0) == 0;
empty |= cargo->GetLineLength(0) == 0;
empty |= length->GetLineLength(0) == 0;
empty |= width->GetLineLength(0) == 0;
empty |= height->GetLineLength(0) == 0;
empty |= axes->GetLineLength(0) == 0;
empty |= fweels->GetLineLength(0) == 0;
empty |= rweels->GetLineLength(0) == 0;
empty |= descr->GetLineLength(0) == 0;

if(empty){
    wxMessageDialog dlg(this, wxT("Wypełnij puste pola."), wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
    dlg.ShowModal();
} else {
    wxMessageDialog dlg(this, wxT("Pomyślnie wprowadzono pojazd."), wxMessageBoxCaptionStr, wxOK);
    dlg.ShowModal();


    Close();
}

}
