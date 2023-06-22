#ifndef __TGdesk_Register_QR__
#define __TGdesk_Register_QR__

/**
@file
Subclass of Register_QR, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include
#include <wx/base64.h>

/** Implementing Register_QR */
class TGdesk_Register_QR : public Register_QR
{
	protected:
		// Handlers for Register_QR events.
		void dialogOnOKButtonClick( wxCommandEvent& event );
	public:
		/** Constructor */
		TGdesk_Register_QR( wxWindow* parent );
	//// end generated class members
		void SetImage(std::string s);













};

#endif // __TGdesk_Register_QR__
