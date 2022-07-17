#include<iostream>
#include<vector>
#include<ctime>
#include <string>
using namespace std;

#pragma once
class Passport
{
protected:
	string Surname;
	string Name;
	string Patronymic;
	string Gender;
	string DateOfBirth;
	string DateOfExpiry;
	string Nationality;
	long long Record�;
	string Document�;

public:

	Passport();

	Passport(string surname, string name, string patronymic, string gender, string dateOfBirth);

	Passport(string surname, string name, string patronymic, string gender, string dateOfBirth, string dateOfExpiry, string nationality, long long record�, string document�);

	void SetSurname(string surname);
	void SetName(string name);
	void SetPatronymic(string patronymic);
	void SetGender(string gender);
	void SetDateOfBirth(string dateOfbirth);
	void SetDateOfExpiry(string dateOfexpiry);
	void SetNationality(string nationality);
	void SetRecord�(long long record�);
	void SetDocument�(string document�);

	string GetSurname() const;
	string GetName() const;
	string GetPatronymic() const;
	string GetGender() const;
	string GetDateOfBirth() const;
	string GetDateOfExpiry() const;
	string GetNationality() const;
	long long GetRecord�() const;
	string GetDocument�() const;

	void Print() const;
};

