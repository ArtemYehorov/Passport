#include"Passport.h"
#include"ForeignPassport.h"
using namespace std;

int main()
{
	Passport a;
	ForeignPassport b;
	Visa q;
	b.AddVisa(q);
	b.Print();
}