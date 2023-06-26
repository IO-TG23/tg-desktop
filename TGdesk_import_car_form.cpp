#include "TGdesk_import_car_form.h"

TGdesk_import_car_form::TGdesk_import_car_form( wxWindow* parent )
:
import_car_form( parent )
{

}

void TGdesk_import_car_form::import_car_formOnClose( wxCloseEvent& event )
{
GetParent()->Enable();
Destroy();
}

void TGdesk_import_car_form::import_car_formOnIconize( wxIconizeEvent& event )
{
// TODO: Implement import_car_formOnIconize
}

void TGdesk_import_car_form::import_car_buttonOnButtonClick( wxCommandEvent& event )
{

wxFileDialog fileDialog(this, "Open CSV file", "", "", "CSV files (*.csv)|*.csv", wxFD_OPEN | wxFD_FILE_MUST_EXIST);


    if (fileDialog.ShowModal() == wxID_OK)
    {
        wxString filePath = fileDialog.GetPath();
        wxString fileName = fileDialog.GetFilename();
        std::cout << "Selected file: " << fileName << std::endl;
        std::cout << "Path: " << filePath << std::endl;

 
        std::string text = fileName.ToStdString();
        std::ifstream ip(text);
        std::ofstream outputFile("test2.csv");


        

        if (!ip.is_open() && !outputFile.is_open()) std::cout << "ERROR: File Open" << '\n';

        std::string skipLine;
        getline(ip, skipLine);


        

        while (ip.peek() != std::ifstream::traits_type::eof()) {

            getline(ip, name, ',');
            getline(ip, year_b, ',');
            getline(ip, year_e, ',');
            getline(ip, doors_num, ',');
            getline(ip, seat_num, ',');
            getline(ip, cargo, ',');
            getline(ip, length, ',');
            getline(ip, width, ',');
            getline(ip, height, ',');
            getline(ip, axes, ',');
            getline(ip, fweels, ',');
            getline(ip, rweels, ',');
            getline(ip, descr, ',');
            getline(ip, descr_offer, ',');
            getline(ip, gear_box, ',');
            getline(ip, drive_type, ',');
            getline(ip, price, ',');
            getline(ip, email, ',');
            getline(ip, phone_num, '\n');


            std::cout  << name << '\n';
            std::cout  << year_b << ' ';
            std::cout  << year_e << ' ';
            std::cout  << doors_num << ' ';
            std::cout  << seat_num << ' ';
            std::cout  << cargo << ' ';
            std::cout  << length << ' ';
            std::cout  << width << ' ';
            std::cout  << height << ' ';
            std::cout  << axes << ' ';
            std::cout  << fweels << ' ';
            std::cout  << rweels << ' ';
            std::cout  << descr << ' ';
            std::cout  << descr_offer << ' ';
            std::cout  << gear_box << ' ';
            std::cout  << drive_type << ' ';
            std::cout  << price << ' ';
            std::cout  << email << ' ';
            std::cout  << phone_num << '\n';
            std::cout << "-------------------" << '\n';

            
            outputFile << name << ",";
            outputFile << year_b << ",";
            outputFile << year_e << ",";
            outputFile << doors_num << ",";
            outputFile << seat_num << ",";
            outputFile << cargo << ",";
            outputFile << length << ",";
            outputFile << width << ",";
            outputFile << height << ",";
            outputFile << axes << ",";
            outputFile << fweels << ",";
            outputFile << rweels << ",";
            outputFile << descr << ",";
            outputFile << descr_offer << ",";
            outputFile << gear_box << ",";
            outputFile << drive_type << ",";
            outputFile << price << ",";
            outputFile << email << ",";
            outputFile << phone_num;
            outputFile << "\n";



        


        }
   
        outputFile.close();
        ip.close();




    }

    

}


void TGdesk_import_car_form::send_car_buttonOnButtonClick( wxCommandEvent& event )
{
        std::string client_id = dynamic_cast<TGdesk_main_frame*>(GetParent())->token;
        size_t dot_pos = client_id.find_first_of('.');
        client_id.erase(0,dot_pos+1);
        dot_pos = client_id.find_last_of('.');
        client_id.erase(dot_pos);
        
        Backend_API api;
        Json::Value response;
        try{
            response = api.post_offer(dynamic_cast<TGdesk_main_frame*>(GetParent())->token,
            name,
            descr,
            year_b,
            year_e,
            doors_num,
            seat_num,
            cargo,
            length,
            width,
            height,
            axes,
            rweels,
            fweels,
            gear_box,
            drive_type,
            client_id,
            price,
            descr_offer,
            email,
            phone_num);
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
