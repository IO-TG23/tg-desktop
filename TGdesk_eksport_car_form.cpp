#include "TGdesk_eksport_car_form.h"

TGdesk_eksport_car_form::TGdesk_eksport_car_form( wxWindow* parent )
:
eksport_car_form( parent )
{
Json::Value cars;
    try{
        cars = api.get_all_cars_list();

        if(cars.isNull()){
            wxMessageDialog dlg(this, wxT("Nie znaleziono pojazdów."), wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
            dlg.ShowModal();
            Close();
        }
       
        int s = cars.size();
        wxString vehiclenames[s];
        for(int i=0; i<s; ++i){
            vehiclenames[i] = cars[i]["vehicleName"].asString();
            vehiclename.push_back(cars[i]["vehicleName"].asString());
            description.push_back(cars[i]["vehicleDescription"].asString());
        }
}
 catch (std::exception& e){
        std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
        std::wstring message = converter.from_bytes(e.what());
        wxMessageDialog dlg(this, message, wxMessageBoxCaptionStr, wxOK|wxICON_ERROR);
        dlg.ShowModal();
        Close();
    }
}
void TGdesk_eksport_car_form::eksport_car_formOnClose( wxCloseEvent& event )
{
GetParent()->Enable();
Destroy();
}

void TGdesk_eksport_car_form::eksport_car_formOnIconize( wxIconizeEvent& event )
{
// TODO: Implement eksport_car_formOnIconize
}

void TGdesk_eksport_car_form::nameOnChar( wxKeyEvent& event )
{
event.Skip();
}

void TGdesk_eksport_car_form::eksport_car_buttonOnButtonClick( wxCommandEvent& event )
{
    std::string filename = name->GetValue().ToStdString();
    std::cout << filename << std::endl;\
    filename += ".csv";


       std::ofstream outputFile(filename);
    if (!outputFile.is_open()) std::cout << "ERROR: File Open" << '\n';

    outputFile << "vehicleName" << "," << "vehicleDescription" << std::endl;
     

    for(unsigned int i=0; i<vehiclename.size(); ++i){
        outputFile << vehiclename[i] << "," << description[i] << std::endl;
    }

    outputFile.close();




    




    Close();
}
