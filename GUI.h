///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class main_frame
///////////////////////////////////////////////////////////////////////////////
class main_frame : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText411;
		wxStaticText* m_staticText4;
		wxButton* m_button411;
		wxButton* m_button4;
		wxButton* m_button41;

	public:

		main_frame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~main_frame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class login_dial
///////////////////////////////////////////////////////////////////////////////
class login_dial : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textCtrl1;
		wxStaticText* m_staticText11;
		wxTextCtrl* m_textCtrl11;
		wxButton* login_button;
		wxButton* regiter_button;

		// Virtual event handlers, override them in your derived class
		virtual void login_dialOnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void m_textCtrl1OnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrl1OnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrl11OnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrl11OnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void login_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void regiter_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		login_dial( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Logowanie"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP );

		~login_dial();

};

