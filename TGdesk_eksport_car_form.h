#ifndef __TGdesk_eksport_car_form__
#define __TGdesk_eksport_car_form__

/**
@file
Subclass of eksport_car_form, which is generated by wxFormBuilder.
*/

#include "GUI.h"


#include "Backend_API.h"
#include <string>
#include <locale>
#include <codecvt>
#include <wx/msgdlg.h>
#include <wx/filedlg.h>
#include <wx/progdlg.h>
#include "TGdesk_main_frame.h"

//// end generated include

/** Implementing eksport_car_form */
class TGdesk_eksport_car_form : public eksport_car_form
{
	protected:
		// Handlers for eksport_car_form events.
		void eksport_car_formOnClose( wxCloseEvent& event );
		void eksport_car_formOnIconize( wxIconizeEvent& event );
		void nameOnChar( wxKeyEvent& event );
		void eksport_car_buttonOnButtonClick( wxCommandEvent& event );
	public:
		/** Constructor */
		TGdesk_eksport_car_form( wxWindow* parent );
	//// end generated class members

	private:
	Backend_API api;
	std::vector<std::string> vehiclename;
	std::vector<std::string> description;
	


	

};

#endif // __TGdesk_eksport_car_form__