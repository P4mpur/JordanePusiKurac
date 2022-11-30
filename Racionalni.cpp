#include "Racionalni.h"

Racionalni::Racionalni(Racionalni& obj)
{
	this->deljenik = obj.deljenik;
	this->delilac = obj.delilac;
	SetVrsta("Racionalan");
	Set_vr();
}

Racionalni& Racionalni::operator=(Racionalni& desni)
{
	this->deljenik = desni.deljenik;
	this->delilac = desni.delilac;
	this->Set_vr();
	this->SetVrsta("Racionalni");
	return *this;
}


void Racionalni::Print()
{
	cout << this->vrsta << endl;
	cout << this->vrednost;
}

void Racionalni::Set_vr()
{
	double n = (double)deljenik / delilac;
	this->vrednost = n;
}

istream& operator>>(istream& levi, Racionalni& desni)
{
	levi >> desni.deljenik;
	levi >> desni.delilac;
	desni.Set_vr();
	return levi;
}

ostream& operator<<(ostream& levi, Racionalni& desni)
{
	levi << desni.vrsta << endl;
	levi << desni.vrednost << endl;
	return levi;

}
