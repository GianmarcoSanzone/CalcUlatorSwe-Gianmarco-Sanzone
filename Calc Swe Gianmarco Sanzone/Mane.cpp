#include "Mane.h"
#include "Win.h"

wxIMPLEMENT_APP(Mane);

Mane::Mane()
{
}

bool Mane::OnInit()
{
	window = new Win();
	window->Show();
	return true;
}
