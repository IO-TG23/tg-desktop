#ifndef __TGdesk_main_frame__
#define __TGdesk_main_frame__

/**
@file
Subclass of main_frame, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include
#include <memory>
#include "TGdesk_login_dial.h"
#include "TGdesk_add_car_form.h"
#include "TGdesk_add_client_form.h"
#include "TGdesk_delete_client_form.h"

#include "TGdesk_Register_QR.h"

/** Implementing main_frame */
class TGdesk_main_frame : public main_frame
{
	protected:
		// Handlers for main_frame events.
		void main_frameOnClose( wxCloseEvent& event );
		void logoutOnButtonClick( wxCommandEvent& event );
		void add_car_buttonOnButtonClick( wxCommandEvent& event );
		void import_buttonOnButtonClick( wxCommandEvent& event );
		void del_buttonOnButtonClick( wxCommandEvent& event );
		void export_client_buttonOnButtonClick( wxCommandEvent& event );
		void export_buttonOnButtonClick( wxCommandEvent& event );
	public:
		/** Constructor */
		TGdesk_main_frame( wxWindow* parent );
	//// end generated class members

		std::string token;

























































};

#endif // __TGdesk_main_frame__
