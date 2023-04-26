#ifndef __TGdesk_add_car_form__
#define __TGdesk_add_car_form__

/**
@file
Subclass of add_car_form, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include
#include <wx/msgdlg.h>

/** Implementing add_car_form */
class TGdesk_add_car_form : public add_car_form
{
	protected:
		// Handlers for add_car_form events.
		void add_car_formOnClose( wxCloseEvent& event );
		void descrOnText( wxCommandEvent& event );
		void backOnButtonClick( wxCommandEvent& event );
		void enterOnButtonClick( wxCommandEvent& event );
	public:
		/** Constructor */
		TGdesk_add_car_form( wxWindow* parent );
	//// end generated class members



};

#endif // __TGdesk_add_car_form__