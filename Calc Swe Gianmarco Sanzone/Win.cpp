#include "Win.h"
#include "wx/wx.h"
Win::Win() : wxFrame(nullptr, wxID_ANY, "TI-84 Calculator", wxPoint(200, 200), wxSize(555, 600))
{
	//numbers
	button0 = new wxButton(this, wxID_ANY, "0", wxPoint(110, 110), wxSize(100, 100));
	button1 = new wxButton(this, wxID_ANY, "1", wxPoint(220, 110), wxSize(100, 100));
	button2 = new wxButton(this, wxID_ANY, "2", wxPoint(330, 110), wxSize(100, 100));
	button3 = new wxButton(this, wxID_ANY, "3", wxPoint(110, 220), wxSize(100, 100));
	button4 = new wxButton(this, wxID_ANY, "4", wxPoint(220, 220), wxSize(100, 100));
	button5 = new wxButton(this, wxID_ANY, "5", wxPoint(330, 220), wxSize(100, 100));
	button6 = new wxButton(this, wxID_ANY, "6", wxPoint(110, 330), wxSize(100, 100));
	button7 = new wxButton(this, wxID_ANY, "7", wxPoint(220, 330), wxSize(100, 100));
	button8 = new wxButton(this, wxID_ANY, "8", wxPoint(330, 330), wxSize(100, 100));
	button9 = new wxButton(this, wxID_ANY, "9", wxPoint(220, 440), wxSize(100, 100));



	//text box

	txtbox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0,5), wxSize(590,100));



	//operators

	//left hand
	add = new wxButton(this, wxID_ANY, "+", wxPoint(0, 110), wxSize(100, 100));
	subtract = new wxButton(this, wxID_ANY, "-", wxPoint(0, 220), wxSize(100, 100));
	multiply = new wxButton(this, wxID_ANY, "*", wxPoint(0, 330), wxSize(100, 100));
	divide = new wxButton(this, wxID_ANY, "/", wxPoint(110, 440), wxSize(100, 100));

	//Right hand
	mod = new wxButton(this, wxID_ANY, "%", wxPoint(440, 110), wxSize(100, 100));
	clear = new wxButton(this, wxID_ANY, "Clear", wxPoint(440, 220), wxSize(100, 100));
	equals = new wxButton(this, wxID_ANY, "=", wxPoint(440, 330), wxSize(100, 100));
	negative = new wxButton(this, wxID_ANY, "-x", wxPoint(330, 440), wxSize(100, 100));

}
