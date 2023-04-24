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

if(login.size()){
auto p = login.find('@');
if(p != std::string::npos){
if(login.find('.', p) != std::string::npos){
p = login.find('@', p+1);
if(p == std::string::npos){

loggedin=true;
Close();
return;
}
}
}
}

loggedin=false;
wxMessageDialog dlg(this, "Niepoprawny adres e-mail.", wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
dlg.ShowModal();
}

void TGdesk_login_dial::regiter_buttonOnButtonClick( wxCommandEvent& event )
{
wxDialog *signup = new TGdesk_register_dial(this);
signup->Show(true);
Disable();
}
