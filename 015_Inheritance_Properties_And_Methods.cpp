
#include <iostream>
#include <string>
using namespace std;

class clsPerson
{
private:
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;
	short _ID;

public:

	// constructor
	clsPerson(short ID, string FirstName, string LastName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}

	// Read Only
	int ID()
	{
		return _ID;
	}

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

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

	void SendEmail(string Subject, string Body)
	{
		cout << "\nThe Following Message Send Successfully, To Email: " << _Email << endl;
		cout << "Subject: " << Subject << endl;
		cout << "Body   : " << Body << endl;
	}

	void SendSMS(string TextMessage)
	{
		cout << "\nThe Following SMS Send Successfully, To Phone: " << _Phone << endl;
		cout << "Message: " << TextMessage << endl;
	}

	void Print()
	{
		cout << "\nInfo: \n";
		cout << "-------------\n";
		cout << "ID        : " << _ID << endl;
		cout << "First Name: " << _FirstName << endl;
		cout << "Last  Name: " << _LastName << endl;
		cout << "Full  Name: " << FullName() << endl;
		cout << "Email     : " << _Email << endl;
		cout << "Phone     : " << _Phone << endl;
		cout << "-------------\n";
	}
};

class clsEmployee : public clsPerson
{
private:

	string _Department;
	string _Title;
	float  _Salary;

public:

	clsEmployee(short ID, string FirstName, string LastName, string Email, string Phone, string Department, string Title, float Salary)
		: clsPerson(ID, FirstName, LastName, Email, Phone)
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
};

int main()
{
	clsPerson Person1(23, "Mohammed", "Eladham", "Mo@gmail.com", "01012345678");
	Person1.Print();

	Person1.SendEmail("Hi", "How Are You? ");
	Person1.SendSMS("Hello Mohammed How Are You! ");

	clsEmployee Employee1(44, "Ahmed", "Gamal", "Ga@gmail.com", "01298765432", "Mansourah", "A2", 5600);
	Employee1.Print();
	Employee1.SendEmail("Welcome", "What's UP? ");
	Employee1.SendSMS("Welcome Osama? ");

	return 0;
}
