#include "TGdesk_import_client_form.h"

TGdesk_import_client_form::TGdesk_import_client_form( wxWindow* parent ) : import_client_form(parent){ 

}


void TGdesk_import_client_form::import_client_formOnClose( wxCloseEvent& event ){
    GetParent()->Enable();
    Destroy();
}

void TGdesk_import_client_form::import_client_formOnIconize( wxIconizeEvent& event ){

}

void TGdesk_import_client_form::choose_file_buttonOnButtonClick( wxCommandEvent& event ){
    wxString wildcard = "Excel Files (*.xlsx)|*.xlsx";
    wxString defaultDir = wxEmptyString;
    wxString defaultFile = wxEmptyString;

    wxFileDialog openFileDialog(this, "Open File", defaultDir, defaultFile, wildcard, wxFD_OPEN | wxFD_FILE_MUST_EXIST);

    if (openFileDialog.ShowModal() == wxID_OK) {
        wxString filePath = openFileDialog.GetPath();
        std::string selectedFile(filePath.mb_str());
        


    }
}
