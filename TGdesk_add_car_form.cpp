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

void TGdesk_add_car_form::nameOnChar( wxKeyEvent& event )
{
event.Skip();
}

void TGdesk_add_car_form::year_bOnChar( wxKeyEvent& event )
{
auto c = event.GetKeyCode();
if(is_num(c) || c=='\b') event.Skip(); // years format witch dash and BACKSPACE
else return;
}

void TGdesk_add_car_form::year_eOnChar( wxKeyEvent& event )
{
auto c = event.GetKeyCode();
if(is_num(c) || c=='\b') event.Skip(); // years format witch dash and BACKSPACE
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
if(is_num(c) || c=='-' || c=='\b') event.Skip(); // years format witch dash and BACKSPACE
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
else if(descr->GetValue().size() >= 150) return;
else event.Skip();
}

void TGdesk_add_car_form::priceOnChar( wxKeyEvent& event )
{
static char c;
if(c=='\b')
dot=price->GetValue().rfind('.')!=wxString::npos || price->GetValue().rfind(',')!=wxString::npos;

c = event.GetKeyCode();

if(is_num(c) || c=='\b')event.Skip();
else if(c==',' || c=='.'){
    if(dot) return;
    else{
        dot = true;
        event.Skip();
    }
}
else return;
}

void TGdesk_add_car_form::phone_numOnChar( wxKeyEvent& event )
{
auto c = event.GetKeyCode();
if(is_num(c) || c=='\b'){
if(phone_num->GetValue().size()<9 || c=='\b')
event.Skip(); // years format witch dash and BACKSPACE
else
return;
}
else return;
}

void TGdesk_add_car_form::emailOnChar( wxKeyEvent& event )
{
event.Skip();
}

void TGdesk_add_car_form::descr_offerOnChar( wxKeyEvent& event )
{
if(event.GetKeyCode() == '\b') event.Skip();
else if(descr->GetValue().size() >= 300) return;
else event.Skip();

}

void TGdesk_add_car_form::backOnButtonClick( wxCommandEvent& event )
{
Close();
}

void TGdesk_add_car_form::enterOnButtonClick( wxCommandEvent& event )
{
bool empty = year_b->GetLineLength(0) == 0;
empty |= year_e->GetLineLength(0) == 0;
empty |= name->GetLineLength(0) == 0;
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
empty |= descr_offer->GetValue().size() == 0;
empty |= price->GetValue().size() == 0;
empty |= email->GetValue().size() == 0;
empty |= phone_num->GetValue().size() == 0;

if(empty){
wxMessageDialog dlg(this, wxT("Wypełnij puste pola."), wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
} else if(TGdesk_login_dial::mail_check(email->GetValue().ToStdString()) == false){
wxMessageDialog dlg(this, wxT("Błędny email."), wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
} else {
wxMessageDialog dlg(this, wxT("Pomyślnie wprowadzono pojazd."), wxMessageBoxCaptionStr, wxOK);
dlg.ShowModal();


Close();
}

}
