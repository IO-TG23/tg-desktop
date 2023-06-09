#ifndef __TGdesk_delete_client_form__
#define __TGdesk_delete_client_form__

/**
@file
Subclass of delete_client_form, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include
#include "Backend_API.h"
#include <locale>
#include <codecvt>
#include <string>
#include <wx/msgdlg.h>
#include <wx/progdlg.h>

#include "TGdesk_main_frame.h"

/** Implementing delete_client_form */
class TGdesk_delete_client_form : public delete_client_form
{
	protected:
		// Handlers for delete_client_form events.
		void add_client_formOnClose( wxCloseEvent& event );
		void add_client_formOnIconize( wxIconizeEvent& event );
		void backOnButtonClick( wxCommandEvent& event );
		void del_buttonOnButtonClick( wxCommandEvent& event );
	public:
		/** Constructor */
		TGdesk_delete_client_form( wxWindow* parent );
	//// end generated class members

	private:
	Backend_API api;
	std::vector<std::string> ids;















};

#endif // __TGdesk_delete_client_form__
