#pragma once
#include "wx\wx.h"

class Bfac
{
public:
	Bfac();
	~Bfac();
	
	void BM(wxWindow* tun);

	void butfunction(wxWindow* plus);
	void numbers(wxWindow* nub);
	/*void OnButtonClick(wxCommandEvent& event);
	void BF(wxWindow* bum);*/

public:
	//wxButton* add = nullptr;
	wxButton* nums = nullptr;
	
};

