
#include <iostream>
#include <string>
using namespace std;

class clsPerson
{
private:
	short _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:

	// Constructor
	clsPerson(short ID, string FirstName, string LastName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}

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

	void SendEmail(string Subject)
	{
		cout << "\nThe Following Message Send Successfully, To Email: " << _Email << endl;
		cout << "Subject: " << Subject << endl;
	}

	void SendSMS(string TextMessage)
	{
		cout << "\nThe Following Message Send Successfully, To Phone: " << _Phone << endl;
		cout << "Subject: " << TextMessage << endl;
	}

	void Print()
	{
		cout << "\nPerson Info: \n";
		cout << "_______________\n";
		cout << "ID        : " << ID() << endl;
		cout << "First Name: " << FirstName() << endl;
		cout << "Last  Name: " << LastName() << endl;
		cout << "Full  Name: " << FullName() << endl;
		cout << "Email     : " << Email() << endl;
		cout << "Phone     : " << Phone() << endl;
		cout << "_______________\n";
	}
};

class clsEmployee : public clsPerson
{
private:

	string _Title;
	string _Department;
	float  _Salary;

public:

	clsEmployee(short ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary) :
		clsPerson(ID, FirstName, LastName, Email, Phone)
	{
		_Title = Title;
		_Department = Department;
		_Salary = Salary;
	}

	void SetTitle(string Title)
	{
		_Title = Title;
	}

	string Title()
	{
		return _Title;
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

	// Function Overriding
	void Print()
	{
		cout << "\nEmployee Info: \n";
		cout << "_________________\n";
		cout << "ID        : " << ID() << endl;
		cout << "First Name: " << FirstName() << endl;
		cout << "Last  Name: " << LastName() << endl;
		cout << "Full  Name: " << FullName() << endl;
		cout << "Email     : " << Email() << endl;
		cout << "Phone     : " << Phone() << endl;
		cout << "Title     : " << Title() << endl;
		cout << "Department: " << Department() << endl;
		cout << "Salary    : " << Salary() << endl;
		cout << "_________________\n";
	}
};

// Multi Level Inheritance
class clsDeveloper : public clsEmployee
{
private:

	string _MainProgrammingLanguage;

public:

	clsDeveloper(short ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary, string MainProgrammingLanguage) :
		clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Department, Salary)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}

	void SetMainLanguage(string MainProgrammingLanguage)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}

	string MainLanguage()
	{
		return _MainProgrammingLanguage;
	}

	// Function Overriding
	void Print()
	{
		cout << "\nDeveloper Info: \n";
		cout << "_________________\n";
		cout << "ID        : " << ID() << endl;
		cout << "First Name: " << FirstName() << endl;
		cout << "Last  Name: " << LastName() << endl;
		cout << "Full  Name: " << FullName() << endl;
		cout << "Email     : " << Email() << endl;
		cout << "Phone     : " << Phone() << endl;
		cout << "Title     : " << Title() << endl;
		cout << "Department: " << Department() << endl;
		cout << "Salary    : " << Salary() << endl;
		cout << "Main Language: " << MainLanguage() << endl;
		cout << "_________________\n";
	}
};

int main()
{
	clsPerson Person1(33, "Mohammed", "Nasr", "Mo123@gmail.com", "01012345678");
	Person1.Print();
	Person1.SendEmail("Hello Mohammed! ");
	Person1.SendSMS("How Are You? ");
	cout << "_________________________________________________________________\n\n" << endl;

	clsEmployee Employee1(205, "Ashraf", "Ramadan", "Ash2@gmail.com", "01234567891", "A2", "Mansourah", 7500);
	Employee1.Print();
	Employee1.SendEmail("Hello Ashraf! ");
	Employee1.SendSMS("How Are You? ");
	cout << "_________________________________________________________________\n\n" << endl;

	clsDeveloper Developer1(981, "Khalid", "Mohammed", "Kh55@gmail.com", "01098765432", "C3", "Cairo", 9500, "C++");
	Developer1.Print();
	Developer1.SendEmail("Hello Khalid! ");
	Developer1.SendSMS("How Are You? ");
	cout << "_________________________________________________________________\n\n" << endl;

	system("Pause>0");
	return 0;
}
