#include "CalculatorProcessor.h"
#include <string>
#include <iostream>

CalculatorProcessor* CalculatorProcessor::C_inst = nullptr;

CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	if (C_inst == nullptr)
	{
		C_inst = new CalculatorProcessor();
	}
	return C_inst;
}



float CalculatorProcessor::box(wxTextCtrl* bx) //gets value from box
{
	float nub = stof((std::string)bx->GetValue());
	return nub;
}


void CalculatorProcessor::a(wxTextCtrl* bx) //add
{
	adid = true;
	if (x == 0)
	{
		x = box(bx);
		bx->Clear();
	}

	
	if (equals == true)
	{
		float an = x + y;
		bx->SetValue(std::to_string(an));
	}
	
}

void CalculatorProcessor::m(wxTextCtrl* bx) //multiply
{
	mult = true;
	if (x == 0)
	{
		x = box(bx);
		bx->Clear();
	}

	if (equals == true)
	{
		float an = x * y;
		bx->SetValue(std::to_string(an));
	}
}



void CalculatorProcessor::d(wxTextCtrl* bx) //divide
{
	div = true;
	if (x == 0)
	{
		x = box(bx);
		bx->Clear();
	}

	if (equals == true)
	{
		float an = x/y;
		bx->SetValue(std::to_string(an));
	}
}

void CalculatorProcessor::moad(wxTextCtrl* bx)
{
	md = true;
	if (x == 0)
	{
		x = box(bx);
		bx->Clear();
	}

	if (equals == true)
	{
		float an = (int)x % (int)y;
		bx->SetValue(std::to_string(an));
	}
}

void CalculatorProcessor::min(wxTextCtrl* bx) //minus
{

	sub = true;
	if (x == 0)
	{
		x = box(bx);
		bx->Clear();
	}

	if (equals == true)
	{
		float an = x - y;
		bx->SetValue(std::to_string(an));
	}

}


std::string CalculatorProcessor::ToBinaryString(wxTextCtrl* bx)
{
	float number = box(bx);
	bx->Clear();
	std::string results = "";
	for (int i = 0; i < 16; i++)
	{

		results = std::to_string((int)number % 2) + results;
		number = (int)number / 2;

	}
	bx->AppendText(results);
	return results;
}

std::string CalculatorProcessor::ToHexDecimalString(wxTextCtrl* bx)
{
	int number = stoi((std::string)bx->GetValue());
	std::string results = "";

	while (number > 0)
	{
		int remainder = number % 16;

		if (remainder < 10)
		{
			results = std::to_string(remainder) + results;
		}
		else if (remainder == 10)
		{
			results = "A" + results;
		}
		else if (remainder == 11)
		{
			results = "B" + results;
		}
		else if (remainder == 12)
		{
			results = "C" + results;
		}
		else if (remainder == 13)
		{
			results = "D" + results;
		}
		else if (remainder == 14)
		{
			results = "E" + results;
		}
		else if (remainder == 15)
		{
			results = "F" + results;
		}
		number = number / 16;
	}
	return "0x" + results;

}

void CalculatorProcessor::cl(wxTextCtrl* bx)
{
	bx->SetValue("");
	x = 0;
	y = 0;
}

void CalculatorProcessor::eq(wxTextCtrl* bx)
{
	equals = true;

	y = box(bx);
	if (adid == true)
	{
		a(bx);
		adid = false;
		equals = false;
		x = 0;
		y = 0;
		
	}
	else if (div == true)
	{
		if (y == 0)
		{
			bx->Clear();
			bx->AppendText("ERROR");
			equals = false;
			div = false;
		}
		else
		{
			d(bx);
			equals = false;
			div = false;
			x = 0;
			y = 0;
		}
	}
	else if (mult == true)
	{
		m(bx);
		mult = false;
		equals = false;
		x = 0;
		y = 0;
	}
	else if (sub == true)
	{
		min(bx);
		sub = false;
		equals = false;
		x = 0;
		y = 0;
	}
	else if (md == true)
	{
		if (y == 0)
		{
			bx->Clear();
			bx->AppendText("ERROR");
			equals = false;
			md = false;
			x = 0;
			y = 0;
		}
		else
		{
			d(bx);
			equals = false;
			md = false;
			x = 0;
			y = 0;
		}
	}


}

CalculatorProcessor::CalculatorProcessor()
{

}