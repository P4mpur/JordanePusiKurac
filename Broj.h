#pragma once
#include <string.h>
#include <iostream>
#include <math.h>
using namespace std;
class Broj
{
protected:
	char* vrsta;
	double vrednost;
	virtual void Set_vr(double broj);

public:
	Broj() { vrsta = 0; vrednost = 0; };
	Broj(const char* par, double broj) {
		delete this->vrsta;
		int l = strlen(par);
		this->vrsta = new char(l);
		strcpy(this->vrsta, par);
		this->vrednost = broj;
	};
	bool Uporedi_me(Broj& obj);
	virtual double Get_vr() { return this->vrednost; };
	virtual void Print();
	

	~Broj() {};
	Broj& operator=(Broj& desni);

	friend istream& operator >> (istream& levi, Broj& desni);
	friend ostream& operator <<(ostream& levi, Broj& desni);


	void SetVrsta(const char* naziv);


	Broj(Broj& obj);
};

