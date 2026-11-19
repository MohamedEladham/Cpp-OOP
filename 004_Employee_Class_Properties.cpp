
#include <iostream>
#include <string>
using namespace std;


class clsEmployee
{
private:

	string _ID = "A192.22.33";
	string _FirstName;
	string _LastName;
	string _Email;
	float  _Salary;
	short  _Age;

public:

	// Property Setters

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	void SetEmail(string Email)
	{
		_Email = Email;
	}

	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}

	void SetAge(short Age)
	{
		_Age = Age;
	}

	// Property Getters


	// Read Only
	string GetID()
	{
		return _ID;
	}


	string GetFirstName()
	{
		return _FirstName;
	}

	string GetLastName()
	{
		return _LastName;
	}

	string GetFullName()
	{
		return _FirstName + " " + _LastName;
	}

	string GetEmail()
	{
		return _Email;
	}

	float GetSalary()
	{
		return _Salary;
	}

	short GetAge()
	{
		return _Age;
	}
};

int main()
{
	clsEmployee Employee1;

	Employee1.SetFirstName("Mohammed");
	Employee1.SetLastName("Ahmmed");
	Employee1.SetAge(27);
	Employee1.SetSalary(7500);
	Employee1.SetEmail("Mohammed123@gmail.com");

	cout << "Employee ID: " << Employee1.GetID() << endl;
	cout << "First Name : " << Employee1.GetFirstName() << endl;
	cout << "Last  Name : " << Employee1.GetLastName() << endl;
	cout << "Full  Name : " << Employee1.GetFullName() << endl;
	cout << "Age        : " << Employee1.GetAge() << endl;
	cout << "Salary     : " << Employee1.GetSalary() << endl;
	cout << "Email      : " << Employee1.GetEmail() << endl;

	return 0;
}
