#include "Bfac.h"
#include "wx\wx.h"
#include "Win.h"

Bfac::Bfac()
{
	
}

Bfac::~Bfac()
{
}

void Bfac::butfunction(wxWindow* cup)
{
	
	
	
	 wxButton* add = new wxButton(cup, 10010, "+", wxPoint(0, 110), wxSize(100, 100));

	 wxButton* subtract = new wxButton(cup, 10011, "-", wxPoint(0, 220), wxSize(100, 100));
	 wxButton* multiply = new wxButton(cup, 10012, "*", wxPoint(0, 330), wxSize(100, 100));
	 wxButton* divide = new wxButton(cup, 10013, "/", wxPoint(110, 440), wxSize(100, 100));

	 //Right hand
	 wxButton* mod = new wxButton(cup, 10014, "%", wxPoint(440, 110), wxSize(100, 100));
	 wxButton* equals = new wxButton(cup, 10016, "=", wxPoint(440, 220), wxSize(100, 100));
	 wxButton* negative = new wxButton(cup, 10017, "-x", wxPoint(330, 440), wxSize(100, 100));

	 //bottom
	 wxButton* clear = new wxButton(cup, 10015, "Clear", wxPoint(220, 550), wxSize(100, 100));


	 //BIN HEX AND DEC

	 wxButton* dec = new wxButton(cup, 10018, "Dec", wxPoint(0, 440), wxSize(100, 100));
	 wxButton* Hex = new wxButton(cup, 10019, "HEX", wxPoint(440, 330), wxSize(100, 100));
	 wxButton* Bin = new wxButton(cup, 10020, "BIN", wxPoint(440, 440), wxSize(100, 100));
}

void Bfac::numbers(wxWindow* nub)
{
	
	for (int i = 0; i < 10; i++)
	{
		
		if (i < 3)
		{
			for (int k = 0; k < 3; k++)
			{
				
				wxButton* numb = new wxButton(nub, 10000 + k, std::to_string(k), wxPoint(110 * (k + 1), 110), wxSize(100, 100));
			}
		}
		else if (i < 6 && i >= 3)
		{
			for (int k = 0; k < 3; k++)
			{
				wxButton* numb = new wxButton(nub, 10000 + (k+3), std::to_string(k+3), wxPoint(110 * (k + 1), 220), wxSize(100, 100));
			}
		}
		else
		{
			for (int k = 0; k < 3; k++)
			{
				wxButton* numb = new wxButton(nub, 10000 + (k + 6), std::to_string(k+6), wxPoint(110 * (k + 1), 330), wxSize(100, 100));
			}
		}
	}

	wxButton* numb = new wxButton(nub, 10009, "9", wxPoint(220, 440), wxSize(100, 100));
	
}

void Bfac::BM(wxWindow* tun)
{
	

	butfunction(tun);
	numbers(tun);

}
//{
//	wxButton* but;
//
//	for (int i = 0; i < 22; i++)
//	{
//		//(* but)->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Bfac::OnButtonClick, this);
//		but = new wxButton(/*this, 10001, "0", wxPoint(110, 110), wxSize(100, 100)*/);
//	}
//
//	return but;
//} //OG Button Factory


