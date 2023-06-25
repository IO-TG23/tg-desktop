#include "TGdesk_register_dial.h"

TGdesk_register_dial::TGdesk_register_dial( wxWindow* parent )
:
register_dial( parent )
{

}

void TGdesk_register_dial::register_dialOnClose( wxCloseEvent& event )
{
GetParent()->Enable();
Destroy();
}

void TGdesk_register_dial::register_dialOnIconize( wxIconizeEvent& event )
{
// TODO: Implement register_dialOnIconize
}

void TGdesk_register_dial::login_fieldOnText( wxCommandEvent& event )
{
// TODO: Implement login_fieldOnText
}

void TGdesk_register_dial::login_fieldOnTextEnter( wxCommandEvent& event )
{
// TODO: Implement login_fieldOnTextEnter
}

void TGdesk_register_dial::login_fieldOnTextMaxLen( wxCommandEvent& event )
{
// TODO: Implement login_fieldOnTextMaxLen
}

void TGdesk_register_dial::passwd_field1OnText( wxCommandEvent& event )
{
// TODO: Implement passwd_field1OnText
}

void TGdesk_register_dial::passwd_fieldOnTextEnter( wxCommandEvent& event )
{
// TODO: Implement passwd_fieldOnTextEnter
}

void TGdesk_register_dial::passwd_fieldOnTextMaxLen( wxCommandEvent& event )
{
// TODO: Implement passwd_fieldOnTextMaxLen
}

void TGdesk_register_dial::passwd2_fieldOnText( wxCommandEvent& event )
{
// TODO: Implement passwd2_fieldOnText
}

void TGdesk_register_dial::passwd2_fieldOnTextEnter( wxCommandEvent& event )
{
// TODO: Implement passwd2_fieldOnTextEnter
}

void TGdesk_register_dial::passwd2_fieldOnTextMaxLen( wxCommandEvent& event )
{
// TODO: Implement passwd2_fieldOnTextMaxLen
}

void TGdesk_register_dial::register_buttonOnButtonClick( wxCommandEvent& event )
{

wxProgressDialog a(wxT("Komunikacja z serwerem"), wxT("Oczekiwanie na odpowiedź serwera."), 100, this);
a.Pulse();

if(!TGdesk_login_dial::mail_check(login_field->GetValue().ToStdString())){
wxMessageDialog dlg(this, "Niepoprawny adres e-mail.", wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
return;
}

std::string psw1 = passwd_field1->GetValue().ToStdString();
std::string psw2 = passwd2_field->GetValue().ToStdString();

if(psw1.size()==0 || psw2.size()==0){
wxMessageDialog dlg(this, wxT("Musisz podać hasło."), wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
return;
}

if(psw1 != psw2){
wxMessageDialog dlg(this, wxT("Hasła nie są takie same."), wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
return;
}



Backend_API api;
Json::Value response;
bool noErrors = true;
try{
response = api.sign_up(login_field->GetValue().ToStdString(),psw1,psw2);
} catch (std::exception& e){
noErrors=false;
std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
std::wstring message = converter.from_bytes(e.what());
wxMessageDialog dlg(this, message, wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
}

a.Close();

for(char& c : psw1)
c='\0';
for(char& c : psw2)
c='\0';

for(auto m : response["messages"]){
// std::cout << "1\n";
noErrors = false;
std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
std::wstring message = converter.from_bytes(m.asString());
wxMessageDialog dlg(this, message, wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
}

if(!(response["errors"].isNull())){
for(auto m : response["errors"]["appUser"]){
noErrors = false;
std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
std::wstring message = converter.from_bytes(m.asString());
wxMessageDialog dlg(this, message, wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
}
}

response = response["message"];
if(response.isNull()){
noErrors=false;
wxMessageDialog dlg(this, wxT("Nie otrzymano kodu."), wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
} else if(strncmp(response.asCString(),"data:image/png;base64",21)!=0){
noErrors=false;
std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
std::wstring message = converter.from_bytes(response.asString());
wxMessageDialog dlg(this, message, wxMessageBoxCaptionStr, wxOK);
dlg.ShowModal();
} else if(strncmp(response.asCString(),"data:image/png;base64",21)==0 && noErrors){
TGdesk_Register_QR dlg(this);
dlg.SetImage(response.asCString());
dlg.ShowModal();
}

if(!noErrors) return;


Close();
}
