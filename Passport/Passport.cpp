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
	SetRecord¹(1991082400026);
	SetDocument¹("000000001");
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
	SetRecord¹(0000000000000);
	SetDocument¹("000000000");
}

Passport::Passport(string surname, string name, string patronymic, string gender, string dateOfBirth, string dateOfExpiry, string nationality, long long record¹, string document¹)
{
	SetSurname(surname);
	SetName(name);
	SetPatronymic(patronymic);
	SetGender(gender);
	SetDateOfBirth(dateOfBirth);
	SetDateOfExpiry(dateOfExpiry);
	SetNationality(nationality);
	SetRecord¹(record¹);
	SetDocument¹(document¹);
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
void Passport::SetRecord¹(long long record¹)
{
	Record¹ = record¹;
}
void Passport::SetDocument¹(string document¹)
{
	Document¹ = document¹;
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
long long Passport::GetRecord¹() const
{
	return Record¹;
}
string Passport::GetDocument¹() const
{
	return Document¹;
}
#pragma endregion

void Passport::Print() const
{
	cout << "Surname - " << Surname << "\n";
	cout << "Name - " << Name << "\n";
	cout << "Patronymic - " << Patronymic << "\n";
	cout << "Gender - " << Gender << "\t\t\t\t" << "Nationality - " << Nationality << "\n";
	cout << "Date of birth - " << DateOfBirth << "\t\t" << "Record No. - " << Record¹ << "\n";
	cout << "Date of expiry - " << DateOfExpiry << "\t\t" << "Document No. - " << Document¹ << "\n";
}
