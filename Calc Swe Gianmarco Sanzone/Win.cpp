#include "Win.h"
#include "wx/wx.h"
#include "Bfac.h"
#include "CalculatorProcessor.h"
#include <vector>
#include <string>

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
EVT_BUTTON(10010, Win::OnButtonClicked)
EVT_BUTTON(10011, Win::OnButtonClicked)
EVT_BUTTON(10012, Win::OnButtonClicked)
EVT_BUTTON(10013, Win::OnButtonClicked)
EVT_BUTTON(10014, Win::OnButtonClicked)
EVT_BUTTON(10015, Win::OnButtonClicked)
EVT_BUTTON(10016, Win::OnButtonClicked)
EVT_BUTTON(10017, Win::OnButtonClicked)
EVT_BUTTON(10018, Win::OnButtonClicked)
EVT_BUTTON(10019, Win::OnButtonClicked)
EVT_BUTTON(10020, Win::OnButtonClicked)
wxEND_EVENT_TABLE()




Win::Win() : wxFrame(nullptr, wxID_ANY, "TI-84 Calculator", wxPoint(200, 200), wxSize(555, 700), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE))
{


	Bfac f;

	//text box
	txtbox = new wxTextCtrl(this, 10022, "", wxPoint(0, 5), wxSize(590, 100));
	txtbox->Disable();

	Win::SetMaxSize(wxSize(555, 700));

	f.BM(this);



}

void Win::OnButtonClicked(wxCommandEvent& event)
{
	
	//txtbox->SetLabel("clicked");

	int ID = event.GetId();

	switch (ID)
	{
	case 10000:

		txtbox->AppendText("0");
		//C_inst->box(txtbox);
		break;

	case 10001:

		txtbox->AppendText("1");

		//C_inst->box(txtbox);
		break;

	case 10002:

		txtbox->AppendText("2");
		//C_inst->box(txtbox);
		break;

	case 10003:

		txtbox->AppendText("3");
		//C_inst->box(txtbox);
		break;

	case 10004:

		txtbox->AppendText("4");
		//C_inst->box(txtbox);
		break;

	case 10005:

		txtbox->AppendText("5");
		//C_inst->box(txtbox);
		break;

	case 10006:

		txtbox->AppendText("6");
		//C_inst->box(txtbox);
		break;

	case 10007:

		txtbox->AppendText("7");
		//C_inst->box(txtbox);
		break;

	case 10008:

		txtbox->AppendText("8");
		//C_inst->box(txtbox);
		break;

	case 10009:

		txtbox->AppendText("9");
		//C_inst->box(txtbox);
		break;

	case 10010:

		txtbox->AppendText("+");
		C_inst->a(txtbox);
		break;
		
	case 10011:

		txtbox->AppendText("-");
		C_inst->min(txtbox);
		break;

	case 10012:

		txtbox->AppendText("*");
		C_inst->m(txtbox);
		break;

	case 10013:

		txtbox->AppendText("/");
		C_inst->d(txtbox);
		break;

	case 10014:

		txtbox->AppendText("%");
		C_inst->moad(txtbox);
		break;

	case 10015:

		txtbox->Clear();
		C_inst->cl(txtbox);
		break;

	case 10016:

		txtbox->AppendText("=");
		C_inst->eq(txtbox);
		break;

	case 10017:

		txtbox->AppendText("-");
		break;

	case 10018:
		txtbox->AppendText(".");
		break;

	case 10019:
		txtbox->SetValue(C_inst->ToHexDecimalString(txtbox));
		break;

	case 10020:
		//txtbox->AppendText("BIN");
		C_inst->ToBinaryString(txtbox);
		break;
	}

	event.Skip();
}