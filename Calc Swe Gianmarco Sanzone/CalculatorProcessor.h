#pragma once
#include "wx\wx.h"
#include <vector>
#include<string>
class CalculatorProcessor
{
private:

	static CalculatorProcessor* C_inst; //instance variable	
	CalculatorProcessor();

public:

	static CalculatorProcessor* GetInstance();
	

	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(CalculatorProcessor& other) = delete;



	//std::string GetText()
	//{
	//	return "";
	//}


	std::string ToBinaryString(wxTextCtrl* bx);
	std::string ToHexDecimalString(wxTextCtrl* bx);
	

	//static float multi() { return Get().mult(); }

	std::vector<float> math;
	std::vector<float> add;


	float n;
	bool adid = false;
	bool equals = false;
	bool mult = false;
	bool div = false;
	bool sub = false;
	bool md = false;
	bool clr = false;

	void cl(wxTextCtrl* bx);
	void a(wxTextCtrl* bx);
	void m(wxTextCtrl* bx);
	void min(wxTextCtrl* bx);
	void d(wxTextCtrl* bx);
	void eq(wxTextCtrl* bx);
	void moad(wxTextCtrl* bx);
	
	float box(wxTextCtrl* bx);
	//bool clicked = false;

	float x = 0;
	float y = 0;

};

