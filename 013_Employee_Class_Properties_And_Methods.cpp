
#include <iostream>
#include <string>
using namespace std;

class clsEmployee
{
	short _ID;
	float _Salary;
	string _FirstName;
	string _LastName;
	string _Title;
	string _Email;
	string _Phone;
	string _Department;

public:

	clsEmployee(short ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Title = Title;
		_Email = Email;
		_Phone = Phone;
		_Department = Department;
		_Salary = Salary;
	}

	// Read Only
	short ID()
	{
		return _ID;
	}

	// Property Set
	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	// Property Get
	string FirstName()
	{
		return _FirstName;
	}

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string LastName()
	{
		return _LastName;
	}

	string FullName()
	{
		return _FirstName + " " + _LastName;
	}

	void SetTitle(string Title)
	{
		_Title = Title;
	}

	string Title()
	{
		return _Title;
	}

	void SetEmail(string Email)
	{
		_Email = Email;
	}

	string Email()
	{
		return _Email;
	}

	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}

	string Phone()
	{
		return _Phone;
	}

	void SetDepartment(string Department)
	{
		_Department = Department;
	}

	string Department()
	{
		return _Department;
	}

	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}

	float Salary()
	{
		return _Salary;
	}

	void SendEmail(string Subject, string Body)
	{
		cout << "\nThe Following Message Send Successfully, To Email: " << _Email << endl;
		cout << "> Subject: " << Subject << endl;
		cout << "> Body   : " << Body << "\n\n";
	}

	void SendSMS(string TextMessage)
	{
		cout << "\nThe Following SMS Send Successfully, To Phone: " << _Phone << endl;
		cout << "> Message: " << TextMessage << "\n\n";
	}

	void Print()
	{
		cout << "\n\n";
		cout << "Employee Info: \n";
		cout << "_________________\n";
		cout << "ID        : " << _ID << endl;
		cout << "First Name: " << _FirstName << endl;
		cout << "Last  Name: " << _LastName << endl;
		cout << "Full  Name: " << FullName() << endl;
		cout << "Title     : " << _Title << endl;
		cout << "Email     : " << _Email << endl;
		cout << "Phone     : " << _Phone << endl;
		cout << "Department: " << _Department << endl;
		cout << "Salary    : " << _Salary << endl;
	}
};

int main()
{
	clsEmployee Employee1(123, "Mohammed", "Nasr", "Mohammed111@gmail.com", "0214545454", "A3", "Mansourah", 7500);
	Employee1.Print();

	Employee1.SendEmail("Hello", "fff");
	Employee1.SendSMS("Hello Mohammed How Are You!");

	//system("Pause>0");
	return 0;
}
