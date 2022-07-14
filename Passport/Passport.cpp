#include "Passport.h"

#pragma region Constructors
Passport::Passport()
{
	SetSurname("Tkachenko");
	SetName("Mariana");
	SetPatronymic("Ivanivna");
	SetGender("F");
	SetDateOfBirth("24.08.1991");
	SetDateOfExpiry("13.12.2025");
	SetNationality("UKR");
	SetRecord�(1991082400026);
	SetDocument�("000000001");
}

Passport::Passport(string surname, string name, string patronymic, string gender, string dateOfBirth)
{
	SetSurname(surname);
	SetName(name);
	SetPatronymic(patronymic);
	SetGender(gender);
	SetDateOfBirth(dateOfBirth);
	SetDateOfExpiry("0");
	SetNationality("0");
	SetRecord�(0000000000000);
	SetDocument�("000000000");
}

Passport::Passport(string surname, string name, string patronymic, string gender, string dateOfBirth, string dateOfExpiry, string nationality, long long record�, string document�)
{
	SetSurname(surname);
	SetName(name);
	SetPatronymic(patronymic);
	SetGender(gender);
	SetDateOfBirth(dateOfBirth);
	SetDateOfExpiry(dateOfExpiry);
	SetNationality(nationality);
	SetRecord�(record�);
	SetDocument�(document�);
}
#pragma endregion

#pragma region Setters
void Passport::SetSurname(string surname)
{
	Surname = surname;
}
void Passport::SetName(string name)
{
	Name = name;
}
void Passport::SetPatronymic(string patronymic)
{
	Patronymic = patronymic;
}
void Passport::SetGender(string gender)
{
	Gender = gender;
}
void Passport::SetDateOfBirth(string dateOfbirth)
{
	DateOfBirth = dateOfbirth;
}
void Passport::SetDateOfExpiry(string dateOfexpiry)
{
	DateOfExpiry = dateOfexpiry;
}
void Passport::SetNationality(string nationality)
{
	Nationality = nationality;
}
void Passport::SetRecord�(long long record�)
{
	Record� = record�;
}
void Passport::SetDocument�(string document�)
{
	Document� = document�;
}
#pragma endregion

#pragma region Getters
string Passport::GetSurname() const
{
	return Surname;
}
string Passport::GetName() const
{
	return Name;
}
string Passport::GetPatronymic() const
{
	return Patronymic;
}
string Passport::GetGender() const
{
	return Gender;
}
string Passport::GetDateOfBirth() const
{
	return DateOfBirth;
}
string Passport::GetDateOfExpiry() const
{
	return DateOfExpiry;
}
string Passport::GetNationality() const
{
	return Nationality;
}
long long Passport::GetRecord�() const
{
	return Record�;
}
string Passport::GetDocument�() const
{
	return Document�;
}
#pragma endregion

void Passport::Print() const
{
	cout << "Surname - " << Surname << "\n";
	cout << "Name - " << Name << "\n";
	cout << "Patronymic - " << Patronymic << "\n";
	cout << "Gender - " << Gender << "\t\t\t\t" << "Nationality - " << Nationality << "\n";
	cout << "Date of birth - " << DateOfBirth << "\t\t" << "Record No. - " << Record� << "\n";
	cout << "Date of expiry - " << DateOfExpiry << "\t\t" << "Document No. - " << Document� << "\n";
}
