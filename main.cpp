#include <wx/wx.h>
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
 wxFrame *mainFrame = new TGdesk_main_frame(NULL);
 mainFrame->Show(true);

 wxDialog *logging = new TGdesk_login_dial(mainFrame);
 logging->Show(true);
 SetTopWindow(logging);

 return true;
}