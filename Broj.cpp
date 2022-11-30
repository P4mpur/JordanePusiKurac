#include "Broj.h"

void Broj::Set_vr(double broj)
{
	this->vrednost = broj;
}

bool Broj::Uporedi_me(Broj& obj)
{
	if (this->vrednost > obj.vrednost)
	{
		return true;
	}
	return false;
}

void Broj::Print()
{
	cout << vrsta << endl;
	cout << vrednost;
}

Broj& Broj::operator=(Broj& desni)
{
	SetVrsta(desni.vrsta);
	Set_vr(desni.vrednost);
	return *this;
}

istream& operator>>(istream& levi, Broj& desni)
{
	levi >> desni.vrsta;
	levi >> desni.vrednost;
	return levi;
}

ostream& operator <<(ostream& levi, Broj& desni) {
	levi << desni.vrsta << endl;
	levi << desni.vrednost << endl;
	return levi;
}


void Broj::SetVrsta(const char* naziv)
{
	delete this->vrsta;
	int n = strlen(naziv);
	this->vrsta = new char[n];
	strcpy(this->vrsta, naziv);
}

Broj::Broj(Broj& obj)
{
	delete vrsta;
	int l = strlen(obj.vrsta);
	this->vrsta = new char(l);
	strcpy(this->vrsta, obj.vrsta);
	this->vrednost = obj.vrednost;
}
