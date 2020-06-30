#include <wx/wx.h>

class MFrame : public wxFrame
{
public:
	MFrame() : wxFrame(nullptr, wxID_ANY, "WXFrame") {}
	~MFrame() {}
};

class WXMain : public wxApp
{
public:
	WXMain() {}
	~WXMain() {}
	virtual bool OnInit()
	{
		MFrame* mframe = new MFrame();
		mframe->Show();
		return true;
	}
};

wxIMPLEMENT_APP(WXMain);