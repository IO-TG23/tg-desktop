#ifndef __TGdesk_import_car_form__
#define __TGdesk_import_car_form__

/**
@file
Subclass of import_car_form, which is generated by wxFormBuilder.
*/

#include "GUI.h"
#include <wx/filedlg.h>
#include <wx/msgdlg.h>
// #include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "TGdesk_login_dial.h"

//// end generated include

/** Implementing import_car_form */
class TGdesk_import_car_form : public import_car_form
{
	protected:
		// Handlers for import_car_form events.
		void import_car_formOnClose( wxCloseEvent& event );
		void import_car_formOnIconize( wxIconizeEvent& event );
		void import_car_buttonOnButtonClick( wxCommandEvent& event );
		void send_car_buttonOnButtonClick( wxCommandEvent& event );
	public:
		/** Constructor */
		TGdesk_import_car_form( wxWindow* parent );
	//// end generated class members

	protected:
		std::string name;
        std::string year_b;
        std::string year_e;
        std::string doors_num;
        std::string seat_num;
        std::string cargo;
        std::string length;
        std::string width;
        std::string height;
        std::string axes;
        std::string fweels;
        std::string rweels;
        std::string descr;
        std::string descr_offer;
        std::string gear_box;
        std::string drive_type;
        std::string price;
        std::string email;
        std::string phone_num;


};

#endif // __TGdesk_import_car_form__
