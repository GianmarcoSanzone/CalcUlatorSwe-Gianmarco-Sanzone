#include "Win.h"
#include "wx/wx.h"

wxBEGIN_EVENT_TABLE(Win, wxFrame)
EVT_BUTTON(10000, Win::OnButtonClicked)
EVT_BUTTON(10001, Win::OnButtonClicked)
EVT_BUTTON(10002, Win::OnButtonClicked)
EVT_BUTTON(10003, Win::OnButtonClicked)
EVT_BUTTON(10004, Win::OnButtonClicked)
EVT_BUTTON(10005, Win::OnButtonClicked)
EVT_BUTTON(10006, Win::OnButtonClicked)
EVT_BUTTON(10007, Win::OnButtonClicked)
EVT_BUTTON(10008, Win::OnButtonClicked)
EVT_BUTTON(10009, Win::OnButtonClicked)
EVT_BUTTON(10011, Win::OnButtonClicked)
EVT_BUTTON(10012, Win::OnButtonClicked)
EVT_BUTTON(10013, Win::OnButtonClicked)
EVT_BUTTON(10014, Win::OnButtonClicked)
EVT_BUTTON(10015, Win::OnButtonClicked)
EVT_BUTTON(10016, Win::OnButtonClicked)
EVT_BUTTON(10017, Win::OnButtonClicked)
EVT_BUTTON(10018, Win::OnButtonClicked)


wxEND_EVENT_TABLE()

Win::Win() : wxFrame(nullptr, wxID_ANY, "TI-84 Calculator", wxPoint(200, 200), wxSize(555, 600))
{
	//numbers
	button0 = new wxButton(this, 10000, "0", wxPoint(110, 110), wxSize(100, 100));
	button1 = new wxButton(this, 10001, "1", wxPoint(220, 110), wxSize(100, 100));
	button2 = new wxButton(this, 10002, "2", wxPoint(330, 110), wxSize(100, 100));
	button3 = new wxButton(this, 10003, "3", wxPoint(110, 220), wxSize(100, 100));
	button4 = new wxButton(this, 10004, "4", wxPoint(220, 220), wxSize(100, 100));
	button5 = new wxButton(this, 10005, "5", wxPoint(330, 220), wxSize(100, 100));
	button6 = new wxButton(this, 10006, "6", wxPoint(110, 330), wxSize(100, 100));
	button7 = new wxButton(this, 10007, "7", wxPoint(220, 330), wxSize(100, 100));
	button8 = new wxButton(this, 10008, "8", wxPoint(330, 330), wxSize(100, 100));
	button9 = new wxButton(this, 10009, "9", wxPoint(220, 440), wxSize(100, 100));



	//text box

	txtbox = new wxTextCtrl(this, 10010, "", wxPoint(0,5), wxSize(590,100));



	//operators

	//left hand
	add = new wxButton(this, 10011, "+", wxPoint(0, 110), wxSize(100, 100));
	subtract = new wxButton(this, 10012, "-", wxPoint(0, 220), wxSize(100, 100));
	multiply = new wxButton(this, 10013, "*", wxPoint(0, 330), wxSize(100, 100));
	divide = new wxButton(this, 10014, "/", wxPoint(110, 440), wxSize(100, 100));

	//Right hand
	mod = new wxButton(this, 10015, "%", wxPoint(440, 110), wxSize(100, 100));
	clear = new wxButton(this, 10016, "Clear", wxPoint(440, 220), wxSize(100, 100));
	equals = new wxButton(this, 10017, "=", wxPoint(440, 330), wxSize(100, 100));
	negative = new wxButton(this, 10018, "-x", wxPoint(330, 440), wxSize(100, 100));

}

void Win::OnButtonClicked(wxCommandEvent &event)
{
	//txtbox->SetLabel("clicked");

	int ID = event.GetId();

	switch (ID)
	{
		case 10000: 

			txtbox->AppendText("0");
			break;

		case 10001:

			txtbox->AppendText("1");
			break;

		case 10002:

			txtbox->AppendText("2");
			break;

		case 10003:

			txtbox->AppendText("3");
			break;

		case 10004:

			txtbox->AppendText("4");
			break;

		case 10005:

			txtbox->AppendText("5");
			break;

		case 10006:

			txtbox->AppendText("6");
			break;

		case 10007:

			txtbox->AppendText("7");
			break;

		case 10008:

			txtbox->AppendText("8");
			break;

		case 10009:

			txtbox->AppendText("9");
			break;

		case 10011:

			txtbox->AppendText("+");
			break;

		case 10012:

			txtbox->AppendText("-");
			break;

		case 10013:

			txtbox->AppendText("*");
			break;

		case 10014:

			txtbox->AppendText("/");
			break;

		case 10015:

			txtbox->AppendText("%");
			break;

		case 10016:

			txtbox->Clear();
			break;

		case 10017:

			txtbox->AppendText("EQUALS: ");
			break;

		case 10018:

			txtbox->AppendText("-");
			break;
	}

	event.Skip();
}