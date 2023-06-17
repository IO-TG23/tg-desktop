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
		void yearsOnChar( wxKeyEvent& event );
		void radiusOnChar( wxKeyEvent& event );
		void doors_numOnChar( wxKeyEvent& event );
		void seat_numOnChar( wxKeyEvent& event );
		void cargoOnChar( wxKeyEvent& event );
		void lengthOnChar( wxKeyEvent& event );
		void widthOnChar( wxKeyEvent& event );
		void heightOnChar( wxKeyEvent& event );
		void axesOnChar( wxKeyEvent& event );
		void fweelsOnChar( wxKeyEvent& event );
		void rweelsOnChar( wxKeyEvent& event );
		void descrOnChar( wxKeyEvent& event );
		void backOnButtonClick( wxCommandEvent& event );
		void enterOnButtonClick( wxCommandEvent& event );
	public:
		/** Constructor */
		TGdesk_add_car_form( wxWindow* parent );
	//// end generated class members

	protected:
	static bool is_num(const char c) {return c>='0' && c <='9';}


























};

#endif // __TGdesk_add_car_form__
