#ifndef __TGdesk_login_dial__
#define __TGdesk_login_dial__

/**
@file
Subclass of login_dial, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include
#include <wx/msgdlg.h>
#include "TGdesk_register_dial.h"
#include <string>

/** Implementing login_dial */
class TGdesk_login_dial : public login_dial
{
	protected:
		// Handlers for login_dial events.
		void login_dialOnClose( wxCloseEvent& event );
		void login_fieldOnTextEnter( wxCommandEvent& event );
		void login_fieldOnTextMaxLen( wxCommandEvent& event );
		void passwd_fieldOnTextEnter( wxCommandEvent& event );
		void passwd_fieldOnTextMaxLen( wxCommandEvent& event );
		void login_buttonOnButtonClick( wxCommandEvent& event );
		void regiter_buttonOnButtonClick( wxCommandEvent& event );
	public:
		/** Constructor */
		TGdesk_login_dial( wxWindow* parent );
	//// end generated class members


	private:
	bool loggedin = false;

	public:
	bool is_logged() const {return loggedin;}

	static bool mail_check(std::string email){
		if(email.size()){
			auto p = email.find('@');
			if(p != std::string::npos){
				if(email.find('.', p) != std::string::npos){
					p = email.find('@', p+1);
					if(p == std::string::npos){
						return true;
					}
				}
			}
		}

		return false;
	}


















};

#endif // __TGdesk_login_dial__