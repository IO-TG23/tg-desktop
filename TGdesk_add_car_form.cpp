#include "TGdesk_add_car_form.h"

TGdesk_add_car_form::TGdesk_add_car_form( wxWindow* parent )
:
add_car_form( parent )
{

}

void TGdesk_add_car_form::add_car_formOnClose( wxCloseEvent& event )
{
GetParent()->Enable();
Destroy();
}

void TGdesk_add_car_form::yearsOnChar( wxKeyEvent& event )
{
auto c = event.GetKeyCode();
if(is_num(c) || c=='-' || c=='\b') event.Skip(); // years format witch dash and BACKSPACE
else return;
}

void TGdesk_add_car_form::doors_numOnChar( wxKeyEvent& event )
{
auto c = event.GetKeyCode();
if(is_num(c) || c=='\b') event.Skip(); // numbers and BACKSPACE
else return;
}

void TGdesk_add_car_form::seat_numOnChar( wxKeyEvent& event )
{
auto c = event.GetKeyCode();
if(is_num(c) || c=='\b') event.Skip(); // numbers and BACKSPACE
else return;
}

void TGdesk_add_car_form::cargoOnChar( wxKeyEvent& event )
{
auto c = event.GetKeyCode();
if(is_num(c) || c=='\b') event.Skip(); // numbers and BACKSPACE
else return;
}

void TGdesk_add_car_form::lengthOnChar( wxKeyEvent& event )
{
auto c = event.GetKeyCode();
if(is_num(c) || c=='\b') event.Skip(); // numbers and BACKSPACE
else return;
}

void TGdesk_add_car_form::widthOnChar( wxKeyEvent& event )
{
auto c = event.GetKeyCode();
if(is_num(c) || c=='\b') event.Skip(); // numbers and BACKSPACE
else return;
}

void TGdesk_add_car_form::heightOnChar( wxKeyEvent& event )
{
auto c = event.GetKeyCode();
if(is_num(c) || c=='\b') event.Skip(); // numbers and BACKSPACE
else return;
}

void TGdesk_add_car_form::axesOnChar( wxKeyEvent& event )
{
auto c = event.GetKeyCode();
if(is_num(c) || c=='\b') event.Skip(); // numbers and BACKSPACE
else return;
}

void TGdesk_add_car_form::fweelsOnChar( wxKeyEvent& event )
{
auto c = event.GetKeyCode();
if(is_num(c) || c=='\b') event.Skip(); // numbers and BACKSPACE
else return;
}

void TGdesk_add_car_form::rweelsOnChar( wxKeyEvent& event )
{
auto c = event.GetKeyCode();
if(is_num(c) || c=='\b') event.Skip(); // numbers and BACKSPACE
else return;
}

void TGdesk_add_car_form::descrOnChar( wxKeyEvent& event )
{
if(event.GetKeyCode() == '\b') event.Skip();
else if(descr->GetValue().size() >= 100) return;
else event.Skip();
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
empty |= descr->GetValue().size() == 0;

if(empty){
wxMessageDialog dlg(this, wxT("Wypełnij puste pola."), wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
} else {
wxMessageDialog dlg(this, wxT("Pomyślnie wprowadzono pojazd."), wxMessageBoxCaptionStr, wxOK);
dlg.ShowModal();


Close();
}

}
