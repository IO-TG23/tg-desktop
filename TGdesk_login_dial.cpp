#include "TGdesk_login_dial.h"

TGdesk_login_dial::TGdesk_login_dial( wxWindow* parent )
:
login_dial( parent )
{

}

void TGdesk_login_dial::login_dialOnClose( wxCloseEvent& event )
{

if(!is_logged())
main->Close();
else
main->Enable();

Destroy();
}

void TGdesk_login_dial::login_fieldOnTextEnter( wxCommandEvent& event )
{
// TODO: Implement login_fieldOnTextEnter
}

void TGdesk_login_dial::login_fieldOnTextMaxLen( wxCommandEvent& event )
{
// TODO: Implement login_fieldOnTextMaxLen
}

void TGdesk_login_dial::passwd_fieldOnTextEnter( wxCommandEvent& event )
{
// TODO: Implement passwd_fieldOnTextEnter
}

void TGdesk_login_dial::passwd_fieldOnTextMaxLen( wxCommandEvent& event )
{
// TODO: Implement passwd_fieldOnTextMaxLen
}

void TGdesk_login_dial::auth_code_fieldOnTextEnter( wxCommandEvent& event )
{
// TODO: Implement auth_code_fieldOnTextEnter
}

void TGdesk_login_dial::auth_code_fieldOnTextMaxLen( wxCommandEvent& event )
{
// TODO: Implement auth_code_fieldOnTextMaxLen
}

void TGdesk_login_dial::login_buttonOnButtonClick( wxCommandEvent& event )
{
std::string login = login_field->GetValue().ToStdString();
std::string psw = passwd_field->GetValue().ToStdString();
std::string code = auth_code_field->GetValue().ToStdString();

if(!mail_check(login)){
loggedin=false;
wxMessageDialog dlg(this, "Niepoprawny adres e-mail.", wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
return;
}

if(psw.size()==0){
loggedin=false;
wxMessageDialog dlg(this, wxT("Musisz podać hasło."), wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
return;
}

// loggedin=true;
{
Backend_API api = Backend_API();
Json::Value response;
bool noErrors = true;
try{
response = api.login(login,psw,code);
} catch (std::exception& e){
noErrors=false;
std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
std::wstring message = converter.from_bytes(e.what());
wxMessageDialog dlg(this, message, wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
}

for(char& c : psw) c='\0';

for(auto m : response["messages"]){
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
wxMessageDialog dlg(this, wxT("Błąd odpowiedzi serwera."), wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
}  else if(noErrors){
loggedin=true;
dynamic_cast<TGdesk_main_frame*>(main)->token = response.asString();
} else {
noErrors=false;
std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
std::wstring message = converter.from_bytes(response.asString());
wxMessageDialog dlg(this, message, wxMessageBoxCaptionStr, wxOK);
dlg.ShowModal();
}

if(!noErrors) return;
// api.~Backend_API();
}
Close();


}

void TGdesk_login_dial::regiter_buttonOnButtonClick( wxCommandEvent& event )
{
wxDialog *signup = new TGdesk_register_dial(this);
signup->Show(true);
Disable();
}





