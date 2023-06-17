#include "TGdesk_main_frame.h"

TGdesk_main_frame::TGdesk_main_frame( wxWindow* parent )
:
main_frame( parent )
{

}

void TGdesk_main_frame::main_frameOnClose( wxCloseEvent& event )
{
std::string s = "iVBORw0KGgoAAAANSUhEUgAAANsAAADbAQAAAADM+NntAAAEc0lEQVR4nO2YTa6rOBBGHTFglmzAkrfBzFuCDUDYQNiSZ2wDyRvAMw8Q1afI+5Ge1D2gevgidHXDieK4XPXVVzj599fm/kIb3J2bkh+qfzrfd8dQj2kNS3IPGyxyjK7Z27ysuVT/quHdNWXlvg0mPzrv4jbUPIt7um0SN6xuMMO+k7I2c2pKEqlc2+v/gGzl7LYpbc75sXUv9mSHcvStn9bmHd20Qo5H3abf4bsJOc9h9X9evw/7JuS1t+xAltVPib8iK+RXat6EZ3uM7UF4nt3mWpl1TfdK2QhFSD3ebWPMu2s+XTg7ziHMNkiAHxKkho9zY9vM4p+te9RQjFAzLhcJi7hXbXYWbOXTNWKDIqxAdmwuCgXd6/GGd/td0wBTM9cs9RhjKCksumz+dNtgg3x3H7MkqtA/o7CVT/QvkdkGz9jAn5HwyLv1FApbKZKLEXbUH0fKYVJ8pIxey/qtlftQ/5VmqdsjocrsIy81n9EPNlhWxKw5CZIcrPyMSDILWuHekWueH/7gSLtDi5vF17zY4Om4vb041esjfSRNLu20wbLmTySjUQtUjT1RJSz4o5BuQwLzdMezPQZdlhxxfUeOHJMNlkSktaDnytkGarpUpCiLDbLm2Po+hj2GN1VIL6qNrP5hg1TzxzXUd6EtV6JFAqoOFRs82+1VUWKkiH2EvSVxMkc6WKFwent3uM5NKsxkNErfLFaoZmSMX+NDc8ZKIPNBbBCBf7tA2Q2XZBZpcFKI6GCDdHvXydth0A7niD0/gZveCE9So2KmSBO6PRHibPXvYoMcXa+94lCvR4KvlLW/9NgEyb6SVDJH9VM0PeqvudqpCZ7RPdZwYv2id+2mB9s1718Rugv3mKkVlnWtduO54iMI/Lcj3YdlPVTjHXkh70jbZDXvOivk67mB4SX11EPRQ8jBS54t8NQZhQiRJo5RoI90ZjIlFBtEHrD8DlO2Nh8MmpoUhgxZbPDkdgqy5pk4MWGkZo/E/qeFvQtL5croxBsLLOqqOOF53SYbPLULqZvWeGNSkmdPSNFgg3QheiapfRV3xl8zDVArxQb5epwIln8RtZZFfI8JqmKFEj7osU4SyDweCtWko2YjpFWOHTKc6c8fKkatH0H6Rug+PNtwyTAiJDR8suMl2pkXG0SJB3F9hPMpGhFBuoZXG5RVHVkfdbx+JBqyzvGk5GyDO0qp7o8FsQ+MWegx2/qhQ/ehC++O+fK4AkOhECH/YIixQlUIJhXyevpOFTQQCt0GUTJJmiN0ZnzKLM2VgGKGxPt4amyI0LdKfkXoPtSjSwhPfuuEzTnkb5osNni2tM0wp00TsD369ppcfzbX25CXPruiM9PttWNwNbNYoT57q2gGHf4YEpWdT6dtpNigPnsj464nIqzJsML8OvxwUgaY/KQ64UedhPK1FY8XnOxwRYwPDPszUjHa5XAoYoYDMq/Ph77zhDY96nI2QsFIblrKiVrRvC54wPi16vfhdZ68w5zy84NOKhUnFYoN3n+g/Bf+N/wHayDjGMSmc9AAAAAASUVORK5CYII=";

wxMemoryBuffer b = wxBase64Decode(s);
std::cout <<"Rozmiar " << b.GetBufSize() << std::endl;
Destroy();
}

void TGdesk_main_frame::logoutOnButtonClick( wxCommandEvent& event )
{
wxDialog *logging = new TGdesk_login_dial(this);
logging->Show(true);
Disable();
}

void TGdesk_main_frame::add_car_buttonOnButtonClick( wxCommandEvent& event )
{
wxFrame *form = new TGdesk_add_car_form(this);
form->Show(true);
Disable();
}

void TGdesk_main_frame::import_buttonOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement import_buttonOnButtonClick
}

void TGdesk_main_frame::add_client_buttonOnButtonClick( wxCommandEvent& event )
{
wxDialog * form = new TGdesk_add_client_form(this);
form->Show();
Disable();
}

void TGdesk_main_frame::import_client_buttonOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement import_client_buttonOnButtonClick
}

void TGdesk_main_frame::export_buttonOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement export_buttonOnButtonClick
}

void TGdesk_main_frame::del_buttonOnButtonClick( wxCommandEvent& event )
{
wxDialog *form = new TGdesk_delete_client_form(this);
form->Show();
Disable();
}

void TGdesk_main_frame::export_client_buttonOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement export_client_buttonOnButtonClick
}
