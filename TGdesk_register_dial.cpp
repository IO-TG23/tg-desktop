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

    wxMessageDialog dlg(this, wxT("Przesłano zgłoszenie."), wxMessageBoxCaptionStr, wxOK);
    dlg.ShowModal();

    Close();
}


// bool TGdesk_register_dial::check_passwds(std::string psw1, std::string psw2){
//     if(psw1.size() == 0) return false;
// }