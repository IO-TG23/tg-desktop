#include <wx/wx.h>


#include <wx/image.h>
#include "TGdesk_login_dial.h"
#include "TGdesk_main_frame.h"

class MyApp : public wxApp {

public:

 virtual bool OnInit();
 virtual int OnExit() {
   
   return 0;
 }

};

IMPLEMENT_APP(MyApp);

bool MyApp::OnInit() 
{
   wxImage::AddHandler(new wxPNGHandler()); /* plus any others needed, e.g. JPG */
   // bin2c_init_IMAGES_HPP();

 wxFrame *mainFrame = new TGdesk_main_frame(NULL);
 mainFrame->Show(true);
 wxDialog *logging = new TGdesk_login_dial(NULL, mainFrame);
 logging->Show(true);
 SetTopWindow(logging);

 return true;
}