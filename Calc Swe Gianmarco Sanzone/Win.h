#pragma once
#include "wx/wx.h"
class Win : public wxFrame
{
public:

	Win();
	void OnButtonClicked(wxCommandEvent &event);

	wxDECLARE_EVENT_TABLE();
public:
	//numbers
	wxButton* button0;
	wxButton* button1 = nullptr;
	wxButton* button2 = nullptr;
	wxButton* button3 = nullptr;
	wxButton* button4 = nullptr;
	wxButton* button5 = nullptr;
	wxButton* button6 = nullptr;
	wxButton* button7 = nullptr;
	wxButton* button8 = nullptr;
	wxButton* button9 = nullptr;


	//text box

	wxTextCtrl* txtbox = nullptr;
	



	//operators

	//left hand side
	wxButton* add = nullptr;
	wxButton* subtract = nullptr;
	wxButton* multiply = nullptr;
	wxButton* divide = nullptr;
	

	//right hand side
	wxButton* mod = nullptr;
	wxButton* clear = nullptr;
	wxButton* equals = nullptr;
	wxButton* negative = nullptr;


	//hex,dex,bin

	wxButton* dec = nullptr;
	wxButton* Hex = nullptr;
	wxButton* Bin = nullptr;
};

