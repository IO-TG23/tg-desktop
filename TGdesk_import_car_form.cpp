#include "TGdesk_import_car_form.h"
#include <iostream>
#include <fstream>

using namespace std;

TGdesk_import_car_form::TGdesk_import_car_form( wxWindow* parent ) : import_car_form(parent){ 

}


void TGdesk_import_car_form::import_car_formOnClose( wxCloseEvent& event ){
    GetParent()->Enable();
    Destroy();
}

void TGdesk_import_car_form::import_car_formOnIconize( wxIconizeEvent& event ){

}

void TGdesk_import_car_form::choose_file_buttonOnButtonClick( wxCommandEvent& event ){
    // wxString wildcard = "Excel Files (*.xlsx)|*.xlsx";
    // wxString defaultDir = wxEmptyString;
    // wxString defaultFile = wxEmptyString;

    // wxFileDialog openFileDialog(this, "Open File", defaultDir, defaultFile, wildcard, wxFD_OPEN | wxFD_FILE_MUST_EXIST);

    // if (openFileDialog.ShowModal() == wxID_OK) {
    //     wxString filePath = openFileDialog.GetPath();
    //     std::string selectedFile(filePath.mb_str());
        


    // }

    wxFileDialog fileDialog(this, "Open CSV file", "", "", "CSV files (*.csv)|*.csv", wxFD_OPEN | wxFD_FILE_MUST_EXIST);

    if (fileDialog.ShowModal() == wxID_OK)
    {
        wxString filePath = fileDialog.GetPath();
        wxString fileName = fileDialog.GetFilename();
        std::cout << "Selected file: " << fileName << std::endl;
        std::cout << "Path: " << filePath << std::endl;

        std::cout << "\n\n\n vevevevevev \n\n\n" << std::endl;
        // Use filePath and fileName as needed
        // For example, print the selected file name and path
        using namespace std;
        string text = fileName.ToStdString();
        ifstream ip(text);
        std::ofstream outputFile("test2.csv");

        if (!ip.is_open() && !outputFile.is_open()) std::cout << "ERROR: File Open" << '\n';

        string a;
        string b;
        string c;
        string d;

        while (ip.peek() != EOF) {

            getline(ip, a, ',');
            getline(ip, b, ',');
            getline(ip, c, ',');
            getline(ip, d, '\n');

            std::cout  << a << " " << b << '\n';
            std::cout  << c << '\n';
            std::cout  << d << '\n';
            std::cout << "-------------------" << '\n';

            
            outputFile << a << ",";
            outputFile << b << ",";
            outputFile << c << ",";
            outputFile << d << ",";
            outputFile << "\n";


        }
        outputFile.close();
        ip.close();


        wxMessageBox("Selected file:\n" + fileName + "\n\nPath:\n" + filePath + "\na:" + a + "\nb:" + b + "\nc:" + c + "\nd:" + d, "File Selected", wxOK | wxICON_INFORMATION);
        // Close();
    }
}
