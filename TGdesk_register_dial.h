#ifndef __TGdesk_register_dial__
#define __TGdesk_register_dial__

/**
@file
Subclass of register_dial, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include
#include <wx/msgdlg.h>
#include <wx/progdlg.h>
#include <locale>
#include <codecvt>
#include <string>
#include "TGdesk_login_dial.h"
#include "Backend_API.h"
#include "TGdesk_Register_QR.h"

/** Implementing register_dial */
class TGdesk_register_dial : public register_dial
{
	protected:
		// Handlers for register_dial events.
		void register_dialOnClose( wxCloseEvent& event );
		void register_dialOnIconize( wxIconizeEvent& event );
		void login_fieldOnText( wxCommandEvent& event );
		void login_fieldOnTextEnter( wxCommandEvent& event );
		void login_fieldOnTextMaxLen( wxCommandEvent& event );
		void passwd_field1OnText( wxCommandEvent& event );
		void passwd_fieldOnTextEnter( wxCommandEvent& event );
		void passwd_fieldOnTextMaxLen( wxCommandEvent& event );
		void passwd2_fieldOnText( wxCommandEvent& event );
		void passwd2_fieldOnTextEnter( wxCommandEvent& event );
		void passwd2_fieldOnTextMaxLen( wxCommandEvent& event );
		void register_buttonOnButtonClick( wxCommandEvent& event );
	public:
		/** Constructor */
		TGdesk_register_dial( wxWindow* parent );
	//// end generated class members

	// protected:
	// 	bool check_passwds(std::string psw1, std::string psw2);








































};

#endif // __TGdesk_register_dial__
