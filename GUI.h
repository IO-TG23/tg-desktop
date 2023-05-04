///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/button.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/dialog.h>
#include <wx/choice.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class main_frame
///////////////////////////////////////////////////////////////////////////////
class main_frame : public wxFrame
{
	private:

	protected:
		wxButton* logout;
		wxStaticText* m_staticText411;
		wxStaticText* m_staticText4;
		wxButton* add_car_button;
		wxButton* import_button;
		wxButton* export_button;

		// Virtual event handlers, override them in your derived class
		virtual void main_frameOnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void logoutOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void add_car_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void import_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void export_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		main_frame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Tanie graty"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

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
		wxTextCtrl* login_field;
		wxStaticText* m_staticText11;
		wxTextCtrl* passwd_field;
		wxButton* login_button;
		wxButton* regiter_button;

		// Virtual event handlers, override them in your derived class
		virtual void login_dialOnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void login_fieldOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void login_fieldOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void passwd_fieldOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void passwd_fieldOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void login_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void regiter_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		login_dial( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Logowanie"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP );

		~login_dial();

};

///////////////////////////////////////////////////////////////////////////////
/// Class register_dial
///////////////////////////////////////////////////////////////////////////////
class register_dial : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText1;
		wxStaticText* m_staticText11;
		wxStaticText* m_staticText111;
		wxTextCtrl* login_field;
		wxTextCtrl* passwd_field1;
		wxTextCtrl* passwd2_field;
		wxButton* register_button;

		// Virtual event handlers, override them in your derived class
		virtual void register_dialOnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void register_dialOnIconize( wxIconizeEvent& event ) { event.Skip(); }
		virtual void login_fieldOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void login_fieldOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void login_fieldOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void passwd_field1OnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void passwd_fieldOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void passwd_fieldOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void passwd2_fieldOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void passwd2_fieldOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void passwd2_fieldOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void register_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		register_dial( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Rejestracja"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP );

		~register_dial();

};

///////////////////////////////////////////////////////////////////////////////
/// Class add_car_form
///////////////////////////////////////////////////////////////////////////////
class add_car_form : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText1012;
		wxChoice* drive_type;
		wxChoice* gear_box;
		wxStaticText* m_staticText1011;
		wxTextCtrl* years;
		wxStaticText* m_staticText10112;
		wxTextCtrl* radius;
		wxStaticText* m_staticText10111233;
		wxStaticText* m_staticText101;
		wxTextCtrl* doors_num;
		wxStaticText* m_staticText1014;
		wxTextCtrl* seat_num;
		wxStaticText* m_staticText10111;
		wxTextCtrl* cargo;
		wxStaticText* m_staticText101112;
		wxStaticText* m_staticText1015;
		wxTextCtrl* length;
		wxStaticText* m_staticText1011121;
		wxTextCtrl* width;
		wxStaticText* m_staticText1011122;
		wxTextCtrl* height;
		wxStaticText* m_staticText101111;
		wxTextCtrl* axes;
		wxStaticText* m_staticText1011123;
		wxStaticText* m_staticText1016;
		wxTextCtrl* fweels;
		wxStaticText* m_staticText10111231;
		wxStaticText* m_staticText10141;
		wxTextCtrl* rweels;
		wxStaticText* m_staticText10111232;
		wxStaticText* m_staticText1011111;
		wxTextCtrl* descr;
		wxButton* back;
		wxButton* enter;

		// Virtual event handlers, override them in your derived class
		virtual void add_car_formOnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void yearsOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void radiusOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void doors_numOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void seat_numOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void cargoOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void lengthOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void widthOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void heightOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void axesOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void fweelsOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void rweelsOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void descrOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void backOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void enterOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		add_car_form( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Dodaj pojazd"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,500 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~add_car_form();

};

