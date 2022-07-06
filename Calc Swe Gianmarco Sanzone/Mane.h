#pragma once
#include "wx/wx.h"
class Win;
class Mane : public wxApp
{
public:

	Mane();

public:

	Win* window = nullptr;
	
public:

	virtual bool OnInit();
};

