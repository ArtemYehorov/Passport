#include<iostream>
#include <string>
using namespace std;

#pragma once
class Passport
{
	string Surname;
	string Name;
	string Patronymic;
	string Gender;
	string DateOfBirth;
	string DateOfExpiry;
	string Nationality;
	string Record¹;
	string Document¹;

public:

	Passport();

	Passport(string surname, string name, string patronymic, string gender, string dateOfBirth);

	Passport(string surname, string name, string patronymic, string gender, string dateOfBirth, string dateOfExpiry, string nationality, string record¹, string document¹);

	void SetSurname(string surname);
	void SetName(string name);
	void SetPatronymic(string patronymic);
	void SetGender(string gender);
	void SetDateOfBirth(string dateOfbirth);
	void SetDateOfExpiry(string dateOfexpiry);
	void SetNationality(string nationality);
	void SetRecord¹(string record¹);
	void SetDocument¹(string document¹);

	string GetSurname() const;
	string GetName() const;
	string GetPatronymic() const;
	string GetGender() const;
	string GetDateOfBirth() const;
	string GetDateOfExpiry() const;
	string GetNationality() const;
	string GetRecord¹() const;
	string GetDocument¹() const;

	void Print() const;
};

