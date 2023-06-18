#include "TGdesk_Register_QR.h"

TGdesk_Register_QR::TGdesk_Register_QR( wxWindow* parent )
:
Register_QR( parent )
{

}

void TGdesk_Register_QR::dialogOnOKButtonClick( wxCommandEvent& event )
{
Destroy();
}


void TGdesk_Register_QR::SetImage(std::string s)
{
    s.erase(s.begin(), s.begin()+22);

    wxMemoryBuffer b = wxBase64Decode(s);
    unsigned char image_png[b.GetDataLen()];
    auto p = reinterpret_cast<unsigned char*>(b.GetData());
    memcpy(image_png, p, b.GetDataLen());
    wxBitmap bmp = wxBITMAP_PNG_FROM_DATA(image);
    m_bitmap1->SetBitmap(bmp);
}