#pragma once
#include <iostream>
#include <string>
#include "clsPerson.h"
using namespace std;

class clsEmployee : public clsPerson
{
private:
	string _Department;
	string _Title;
	float _Salary;

public:

	clsEmployee(short ID, string FirstName, string LastName, string Email, string Phone, string Department, string Title, float Salary) :
		clsPerson(ID, FirstName, LastName, Email, Phone)
	{
		_Department = Department;
		_Title = Title;
		_Salary = Salary;
	}

	void SetDepartment(string Department)
	{
		_Department = Department;
	}

	string Department()
	{
		return _Department;
	}

	void SetTitle(string Title)
	{
		_Title = Title;
	}

	string Title()
	{
		return _Title;
	}

	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}

	float Salary()
	{
		return _Salary;
	}

	// Function Overriding
	void Print()
	{
		cout << "\nEmployee Info: \n";
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
		cout << "__________________\n\n";
	}
};