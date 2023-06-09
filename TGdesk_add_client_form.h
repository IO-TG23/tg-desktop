#ifndef __TGdesk_add_client_form__
#define __TGdesk_add_client_form__

/**
@file
Subclass of add_client_form, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include

/** Implementing add_client_form */
class TGdesk_add_client_form : public add_client_form
{
	protected:
		// Handlers for add_client_form events.
		void add_client_formOnClose( wxCloseEvent& event );
		void add_client_formOnIconize( wxIconizeEvent& event );
		void id_enterOnText( wxCommandEvent& event );
		void id_enterOnTextEnter( wxCommandEvent& event );
		void id_enterOnTextMaxLen( wxCommandEvent& event );
		void email_enterOnText( wxCommandEvent& event );
		void email_enterOnTextEnter( wxCommandEvent& event );
		void email_enterOnTextMaxLen( wxCommandEvent& event );
		void add_buttonOnButtonClick( wxCommandEvent& event );
	public:
		/** Constructor */
		TGdesk_add_client_form( wxWindow* parent );
	//// end generated class members



















};

#endif // __TGdesk_add_client_form__
