#include"Passport.h"
#pragma once

class Visa
{
private:
	string NameOfCountry;
	string Visaissuedate;
	string Visaexpirydate;
public:
	Visa()
	{
		SetNameOfCountry("USA");
		SetVisaissuedate("13.07.2022");
		SetVisaexpirydate("15.05.2023");
	}
	Visa(string c, string VI, string VE)
	{
		SetNameOfCountry(c);
		SetVisaissuedate(VI);
		SetVisaexpirydate(VE);
	}

	string GetNameOfCountry()
	{
		return NameOfCountry;
	}
	string GetVisaissuedate()
	{
		return Visaissuedate;
	}
	string GetVisaexpirydate()
	{
		return Visaexpirydate;
	}

	void SetNameOfCountry(string country)
	{
		NameOfCountry = country;
	}
	void SetVisaissuedate(string visaIssue)
	{
		Visaissuedate = visaIssue;
	}
	void SetVisaexpirydate(string visaexp)
	{
		Visaexpirydate = visaexp;
	}
};

class ForeignPassport : public Passport
{
	unsigned int Capasity = 0;
	Visa* Visas = new Visa[Capasity];

public:
	void AddVisa(Visa &a)
	{
		if (Capasity == 0)
		{
			Visas[Capasity] = a;
		}
		else
		{
			Visa* Time = new Visa[Capasity + 1];
			for (int i = 0; i < Capasity; i++)
			{
				Time[i] = Visas[i];
			}
			Time[Capasity] = a;
			delete[] Visas;
			Capasity++;
			Visas = Time;
		}
	}


};