#include"Passport.h"
#pragma once

class Visa
{
protected:
	string NameOfCountry;
	string Visaissuedate;
	string Visaexpirydate;
public:
	Visa() : Visa("USA", "13.07.2022", "15.05.2023") {}

	Visa(string c, string VI, string VE)
	{
		SetNameOfCountry(c);
		SetVisaissuedate(VI);
		SetVisaexpirydate(VE);
	}

	string GetNameOfCountry() const
	{
		return NameOfCountry;
	}
	string GetVisaissuedate() const
	{
		return Visaissuedate;
	}
	string GetVisaexpirydate() const
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

	friend ostream& operator << (ostream& os, const Visa& original)
	{
		os << "\nName of Country - " << original.NameOfCountry << "\n";
		os << "Visa issue date - " << original.Visaissuedate << "\n";
		os << "Visa expiry date - " << original.Visaexpirydate << "\n";
		return os;
	}

};

class ForeignPassport : public Passport
{
protected:
	vector<Visa> Visas;

public:
	void AddVisa(Visa &a)
	{
		Visas.push_back(a);
	}

	void Print()
	{
		Passport::Print();
		for (int i = 0; i < Visas.size(); i++)
			cout << Visas[i];
	}


};