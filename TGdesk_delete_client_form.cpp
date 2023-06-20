#include "TGdesk_delete_client_form.h"

TGdesk_delete_client_form::TGdesk_delete_client_form( wxWindow* parent )
:
delete_client_form( parent )
{
    Json::Value clients;
    try {
        clients = api.get_clients_list();

        if(clients.isNull()){
            wxMessageDialog dlg(this, wxT("Nie znaleziono klientów."), wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
            dlg.ShowModal();
            Close();
        }

        int s = clients.size();
        wxString emails[s];
        for(int i=0; i<s; ++i){
            if(clients[i]["email"].isNull()){
                emails[i] = clients[i]["id"].asString();
            } else {
                emails[i] = clients[i]["email"].asString();
            }
            ids.push_back(clients[i]["id"].asString());
        }

        client_id->Set(clients.size(), emails);
    } catch (std::exception& e){
        std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
        std::wstring message = converter.from_bytes(e.what());
        wxMessageDialog dlg(this, message, wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
        dlg.ShowModal();
        Close();
    }


}

void TGdesk_delete_client_form::add_client_formOnClose( wxCloseEvent& event )
{

GetParent()->Enable();
Destroy();
}

void TGdesk_delete_client_form::add_client_formOnIconize( wxIconizeEvent& event )
{
// TODO: Implement add_client_formOnIconize
}

void TGdesk_delete_client_form::del_buttonOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement del_buttonOnButtonClick
}
