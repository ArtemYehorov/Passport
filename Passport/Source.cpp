#include"Passport.h"
#include"ForeignPassport.h"
using namespace std;

int main()
{
	Passport a;
	ForeignPassport b;
	Visa q;
	Visa r("Poland","14.07.2022","20.09.2023");
	b.AddVisa(q);
	for (int i = 0; i < 100; i++)
	{
		b.AddVisa(r);
	}
	b.Print();
}