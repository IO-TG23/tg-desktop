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

void TGdesk_add_car_form::radiusOnChar( wxKeyEvent& event )
{
auto c = event.GetKeyCode();
if(is_num(c) || c=='\b' || c=='.' || c==',') event.Skip(); // numbers, decimal point and BACKSPACE
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

std::string client_id = dynamic_cast<TGdesk_main_frame*>(GetParent())->token;
size_t dot_pos = client_id.find_first_of('.');
client_id.erase(0,dot_pos+1);
dot_pos = client_id.find_last_of('.');
client_id.erase(dot_pos);

Backend_API api;
Json::Value response;
try{
response = api.post_offer(dynamic_cast<TGdesk_main_frame*>(GetParent())->token,
name->GetValue().ToStdString(),
descr->GetValue().ToStdString(),
year_b->GetValue().ToStdString(),
year_e->GetValue().ToStdString(),
doors_num->GetValue().ToStdString(),
seat_num->GetValue().ToStdString(),
cargo->GetValue().ToStdString(),
length->GetValue().ToStdString(),
width->GetValue().ToStdString(),
height->GetValue().ToStdString(),
axes->GetValue().ToStdString(),
rweels->GetValue().ToStdString(),
fweels->GetValue().ToStdString(),
gear_box->GetString(gear_box->GetSelection()).ToStdString() == "manualna" ? "manual" : "automatic",
drive_type->GetString(drive_type->GetSelection()).ToStdString(),
client_id,
price->GetValue().ToStdString(),
descr_offer->GetValue().ToStdString(),
email->GetValue().ToStdString(),
phone_num->GetValue().ToStdString()
);
} catch (std::exception& e){
std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
std::wstring message = converter.from_bytes(e.what());
wxMessageDialog dlg(this, message, wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
return;
}

if(!(response["errors"].isNull())){
for(auto m : response["errors"]["appUser"]){
std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
std::wstring message = converter.from_bytes(m.asString());
wxMessageDialog dlg(this, message, wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
}
return;
}

Close();
}

}