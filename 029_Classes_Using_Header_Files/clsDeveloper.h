#pragma once
#include <iostream>
#include <string>
#include "clsEmployee.h"
using namespace std;

class clsDeveloper : public clsEmployee
{
private:
	string _MainProgrammingLanguage;

public:

	clsDeveloper(short ID, string FirstName, string LastName, string Email, string Phone, string Department, string Title, float Salary, string MainProgrammingLanguage) :
		clsEmployee(ID, FirstName, LastName, Email, Phone, Department, Title, Salary)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}

	void SetMainLanguage(string MainLanguage)
	{
		_MainProgrammingLanguage = MainLanguage;
	}

	string MainLanguage()
	{
		return _MainProgrammingLanguage;
	}

	// Function Overriding
	void Print()
	{
		cout << "\nDeveloper Info: \n";
		cout << "__________________\n\n";
		cout << "ID        : " << ID() << endl;
		cout << "First Name: " << FirstName() << endl;
		cout << "Last  Name: " << LastName() << endl;
		cout << "Full  Name: " << FullName() << endl;
		cout << "Email     : " << Email() << endl;
		cout << "Phone     : " << Phone() << endl;
		cout << "Department: " << Department() << endl;
		cout << "Title     : " << Title() << endl;
		cout << "Salary    : " << Salary() << endl;
		cout << "Main Language: " << MainLanguage() << endl;
		cout << "__________________\n\n";
	}
};