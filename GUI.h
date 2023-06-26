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
#include <wx/statbmp.h>

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
		wxStaticText* m_staticText4111;
		wxStaticText* m_staticText41;
		wxButton* add_car_button;
		wxButton* import_button;
		wxButton* del_button;
		wxButton* export_client_button;
		wxButton* export_button;

		// Virtual event handlers, override them in your derived class
		virtual void main_frameOnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void logoutOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void add_car_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void import_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void del_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void export_client_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
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
		wxStaticText* m_staticText111;
		wxTextCtrl* auth_code_field;
		wxButton* login_button;
		wxButton* regiter_button;

		// Virtual event handlers, override them in your derived class
		virtual void login_dialOnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void login_fieldOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void login_fieldOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void passwd_fieldOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void passwd_fieldOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void auth_code_fieldOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void auth_code_fieldOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
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
/// Class add_client_form
///////////////////////////////////////////////////////////////////////////////
class add_client_form : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText1;
		wxTextCtrl* id_enter;
		wxStaticText* m_staticText11;
		wxTextCtrl* email_enter;
		wxButton* add_button;

		// Virtual event handlers, override them in your derived class
		virtual void add_client_formOnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void add_client_formOnIconize( wxIconizeEvent& event ) { event.Skip(); }
		virtual void id_enterOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void id_enterOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void id_enterOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void email_enterOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void email_enterOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void email_enterOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void add_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		add_client_form( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Dodaj klienta"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP );

		~add_client_form();

};

///////////////////////////////////////////////////////////////////////////////
/// Class delete_client_form
///////////////////////////////////////////////////////////////////////////////
class delete_client_form : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText1;
		wxChoice* client_id;
		wxStaticText* m_staticText11;
		wxTextCtrl* repeat;
		wxButton* back;
		wxButton* del_button;

		// Virtual event handlers, override them in your derived class
		virtual void add_client_formOnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void add_client_formOnIconize( wxIconizeEvent& event ) { event.Skip(); }
		virtual void backOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void del_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		delete_client_form( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Usuń klienta"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 246,134 ), long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP );

		~delete_client_form();

};

///////////////////////////////////////////////////////////////////////////////
/// Class add_car_form
///////////////////////////////////////////////////////////////////////////////
class add_car_form : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText10113;
		wxTextCtrl* name;
		wxStaticText* m_staticText1012;
		wxChoice* drive_type;
		wxChoice* gear_box;
		wxStaticText* m_staticText1011;
		wxTextCtrl* year_b;
		wxStaticText* m_staticText10114;
		wxTextCtrl* year_e;
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
		wxStaticText* m_staticText1011112;
		wxTextCtrl* price;
		wxStaticText* m_staticText10161;
		wxTextCtrl* phone_num;
		wxStaticText* m_staticText101411;
		wxTextCtrl* email;
		wxStaticText* m_staticText10111111;
		wxTextCtrl* descr_offer;
		wxButton* back;
		wxButton* enter;

		// Virtual event handlers, override them in your derived class
		virtual void add_car_formOnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void nameOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void year_bOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void year_eOnChar( wxKeyEvent& event ) { event.Skip(); }
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
		virtual void priceOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void phone_numOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void emailOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void descr_offerOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void backOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void enterOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		add_car_form( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Dodaj pojazd"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,500 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~add_car_form();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Register_QR
///////////////////////////////////////////////////////////////////////////////
class Register_QR : public wxDialog
{
	private:

	protected:
		wxStaticText* label;
		wxStaticBitmap* m_bitmap1;
		wxStdDialogButtonSizer* dialog;
		wxButton* dialogOK;

		// Virtual event handlers, override them in your derived class
		virtual void dialogOnOKButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		Register_QR( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Przesłano"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~Register_QR();

};


///////////////////////////////////////////////////////////////////////////////
/// Class import_car_form
///////////////////////////////////////////////////////////////////////////////
class import_car_form : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText1;
		wxButton* import_car_button;
		wxButton* send_car_button;

		// Virtual event handlers, override them in your derived class
		virtual void import_car_formOnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void import_car_formOnIconize( wxIconizeEvent& event ) { event.Skip(); }
		virtual void import_car_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void send_car_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		import_car_form( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Dodaj pojazd"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,300 ), long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP );

		~import_car_form();

};



///////////////////////////////////////////////////////////////////////////////
/// Class eksport_car_form
///////////////////////////////////////////////////////////////////////////////
class eksport_car_form : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText1;
		wxStaticText* m_staticText10113;
		wxTextCtrl* name;
		wxButton* eksport_car_button;

		// Virtual event handlers, override them in your derived class
		virtual void eksport_car_formOnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void eksport_car_formOnIconize( wxIconizeEvent& event ) { event.Skip(); }
		virtual void nameOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void eksport_car_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		eksport_car_form( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Eksport pojazdu"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 400,300 ), long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP );

		~eksport_car_form();

};



///////////////////////////////////////////////////////////////////////////////
/// Class eksport_client_form
///////////////////////////////////////////////////////////////////////////////
class eksport_client_form : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText1;
		wxStaticText* m_staticText10113;
		wxTextCtrl* name;
		wxButton* eksport_client_button;

		// Virtual event handlers, override them in your derived class
		virtual void eksport_client_formOnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void eksport_client_formOnIconize( wxIconizeEvent& event ) { event.Skip(); }
		virtual void nameOnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void eksport_client_buttonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		eksport_client_form( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Eksport klientów"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 400,300 ), long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP );

		~eksport_client_form();

};