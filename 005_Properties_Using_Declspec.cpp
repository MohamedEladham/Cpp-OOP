
#include <iostream>
#include <string>
using namespace std;


class clsEmployee
{
private:
	string _FirstName;
	string _LastName;
	string _PhoneNumber;
	string _Email;
	float  _Salary;
	short  _Age;


public:

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
	string GetFirstName()
	{
		return _FirstName;
	}
	__declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;


	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}
	string GetLastName()
	{
		return _LastName;
	}
	__declspec(property(get = GetLastName, put = SetLastName)) string LastName;


	string GetFullName()
	{
		return _FirstName + " " + _LastName;
	}
	__declspec(property(get = GetFullName)) string FullName;


	void SetPhoneNumber(string PhoneNumber)
	{
		_PhoneNumber = PhoneNumber;
	}
	string GetPhoneNumber()
	{
		return _PhoneNumber;
	}
	__declspec(property(get = GetPhoneNumber, put = SetPhoneNumber)) string PhoneNumber;



	void SetEmail(string Email)
	{
		_Email = Email;
	}
	string GetEmail()
	{
		return _Email;
	}
	__declspec(property(get = GetEmail, put = SetEmail)) string Email;



	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}
	float GetSalary()
	{
		return _Salary;
	}
	__declspec(property(get = GetSalary, put = SetSalary)) float Salary;



	void SetAge(short Age)
	{
		_Age = Age;
	}
	short GetAge()
	{
		return _Age;
	}
	__declspec(property(get = GetAge, put = SetAge)) short Age;
};

int main()
{
	clsEmployee Employee;

	Employee.FirstName = "Mohammed";
	Employee.LastName = "Osama Ahmmed";
	Employee.PhoneNumber = "01200545454";
	Employee.Email = "Mohammed111@gmail.com";
	Employee.Salary = 10000;
	Employee.Age = 27;


	cout << "\n";
	cout << "First Name  : " << Employee.FirstName << endl;
	cout << "Last  Name  : " << Employee.LastName << endl;
	cout << "Full  Name  : " << Employee.FullName << endl;
	cout << "Phone Number: " << Employee.PhoneNumber << endl;
	cout << "Email       : " << Employee.Email << endl;
	cout << "Salary      : " << Employee.Salary << endl;
	cout << "Age         : " << Employee.Age << endl;
	return 0;
}
