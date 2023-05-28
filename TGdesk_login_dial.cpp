#include "TGdesk_login_dial.h"

TGdesk_login_dial::TGdesk_login_dial( wxWindow* parent )
:
login_dial( parent )
{

}

void TGdesk_login_dial::login_dialOnClose( wxCloseEvent& event )
{
if(!is_logged())
GetParent()->Close();
else
GetParent()->Enable();
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

void TGdesk_login_dial::login_buttonOnButtonClick( wxCommandEvent& event )
{
std::string login = login_field->GetValue().ToStdString();
std::string psw = passwd_field->GetValue().ToStdString();

if(!mail_check(login)){
loggedin=false;
wxMessageDialog dlg(this, "Niepoprawny adres e-mail.", wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
}else if(psw.size()==0){
wxMessageDialog dlg(this, wxT("Musisz podać hasło."), wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
} else {
loggedin=true;
Close();
}

}

void TGdesk_login_dial::regiter_buttonOnButtonClick( wxCommandEvent& event )
{
wxDialog *signup = new TGdesk_register_dial(this);
signup->Show(true);
Disable();
}




















