#pragma once
#include "Broj.h"
class Racionalni : public Broj
{
private: 
	int deljenik, delilac;

public:
	Racionalni() : Broj("racionalni",0), deljenik(0), delilac(0) {};
	Racionalni(int x, int y) : deljenik(x), delilac(y) { Set_vr(); SetVrsta("Racionalan"); };
	Racionalni(Racionalni& obj);

	Racionalni& operator=(Racionalni& desni);

	friend istream& operator>>(istream& levi, Racionalni& desni);
	friend ostream& operator<<(ostream& levi, Racionalni& desni);
	void Print();
	
	void Set_vr();
};

