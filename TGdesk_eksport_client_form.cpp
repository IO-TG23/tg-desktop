#include "TGdesk_eksport_client_form.h"

TGdesk_eksport_client_form::TGdesk_eksport_client_form( wxWindow* parent )
:
eksport_client_form( parent )
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
            emails[i] = clients[i]["email"].asString();
            email.push_back(clients[i]["email"].asString());
            ids.push_back(clients[i]["id"].asString());
        }

        std::cout << std::endl;

        for(unsigned int i=0; i<ids.size(); ++i){
            std::cout << ids[i] << std::endl;
        }
        std::cout << std::endl;
        for(unsigned int i=0; i<email.size(); ++i){
            std::cout << email[i] << std::endl;
        }

    } catch (std::exception& e){
        std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
        std::wstring message = converter.from_bytes(e.what());
        wxMessageDialog dlg(this, message, wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
        dlg.ShowModal();
        Close();
    }
}

void TGdesk_eksport_client_form::eksport_client_formOnClose( wxCloseEvent& event )
{
GetParent()->Enable();
Destroy();
}

void TGdesk_eksport_client_form::eksport_client_formOnIconize( wxIconizeEvent& event )
{
// TODO: Implement eksport_client_formOnIconize
}

void TGdesk_eksport_client_form::nameOnChar( wxKeyEvent& event )
{
event.Skip();
}

void TGdesk_eksport_client_form::eksport_client_buttonOnButtonClick( wxCommandEvent& event )
{
    std::string filename = name->GetValue().ToStdString();
    std::cout << filename << std::endl;
    filename += ".csv";
    std::ofstream outputFile(filename);
    if (!outputFile.is_open()) std::cout << "ERROR: File Open" << '\n';

    outputFile << "id" << "," << "email" << std::endl;
    for(unsigned int i=0; i<ids.size(); ++i){
        outputFile << ids[i] << "," << email[i] << std::endl;
    }
    outputFile.close();


    Close();
}
