#include "KompleksanBroj.h"

KompleksanBroj::KompleksanBroj(KompleksanBroj& obj)
{
	this->real = obj.real;
	this->im = obj.im;
	this->vrednost = obj.vrednost;
	SetVrsta("Kompleksan");
}

KompleksanBroj& KompleksanBroj::operator=(KompleksanBroj& obj)
{
	this->real = obj.real;
	this->im = obj.im;
	this->Set_vr();
	return *this;
}

void KompleksanBroj::Print()
{
	Broj::Print();
}

void KompleksanBroj::Set_vr()
{
	this->vrednost = sqrt(real * real + im * im);
}

istream& operator>>(istream& levi, KompleksanBroj& desni)
{
	levi >> desni.im;
	levi >> desni.real;
	desni.Set_vr();
	return levi;
}

ostream& operator<<(ostream& levi, KompleksanBroj& desni)
{
	levi << desni.vrsta << endl;
	levi << desni.vrednost << endl;
	return levi;
}
