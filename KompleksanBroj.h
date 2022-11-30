#pragma once
#include "Broj.h"
class KompleksanBroj : public Broj
{
private:
	int real, im;

public:
	KompleksanBroj() : Broj("Kompleksan", 0), real(0), im(0) {};
	KompleksanBroj(int x, int y) : real(x), im(y) { SetVrsta("Kompleksan"); Set_vr(); };

	KompleksanBroj(KompleksanBroj& obj);


	KompleksanBroj& operator=(KompleksanBroj& obj);

	friend istream& operator >> (istream& levi, KompleksanBroj& desni);
	friend ostream& operator << (ostream& levi, KompleksanBroj& desni);


	void Print();
	void Set_vr();
};

