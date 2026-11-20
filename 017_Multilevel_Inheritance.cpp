
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

	//clsPerson() {}

	//clsPerson(){}

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

	void SendEmail(string Subject)
	{
		cout << "\nThe Message Send Successfully, To Email: " << _Email << endl;
		cout << "Subject: " << Subject << endl;
	}

	void SendSMS(string TextMessage)
	{
		cout << "\nThe Following SMS Send Successfully, To Phone: " << _Phone << endl;
		cout << "Message: " << TextMessage << endl;
	}

	void Print()
	{
		cout << "\nPerson Info: \n";
		cout << "---------------------\n";
		cout << "ID        : " << _ID << endl;
		cout << "First Name: " << _FirstName << endl;
		cout << "Last  Name: " << _LastName << endl;
		cout << "Full  Name: " << FullName() << endl;
		cout << "Email     : " << _Email << endl;
		cout << "Phone     : " << _Phone << endl;
		cout << "---------------------\n";
	}
};

class clsEmployee : public clsPerson
{
private:

	string _Title;
	string _Department;
	float  _Salary;

public:

	//clsEmployee(){}

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
		cout << "___________________\n";
		cout << "ID        : " << ID() << endl;
		cout << "First Name: " << FirstName() << endl;
		cout << "Last  Name: " << LastName() << endl;
		cout << "Full  Name: " << FullName() << endl;
		cout << "Email     : " << Email() << endl;
		cout << "Phone     : " << Phone() << endl;
		cout << "Title     : " << Title() << endl;
		cout << "Department: " << Department() << endl;
		cout << "Salary    : " << Salary() << endl;
		cout << "___________________\n";
	}
};

class clsDeveloper : public clsEmployee
{
private:

	string _MainProgrammingLanguage;

public:

	//clsDeveloper(){}

	clsDeveloper(short ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary, string MainProgrammingLanguage) :
		clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Department, Salary)
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

	void Print()
	{
		cout << "\nDeveloper Info: \n";
		cout << "___________________\n";
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
		cout << "___________________\n";
	}
};

int main()
{
	clsPerson Person1(33, "Mohammed", "Ahmed", "Mo@gmail.com", "01123456789");
	Person1.Print();
	Person1.SendEmail("How Are You? ");
	Person1.SendSMS("HI MOHAMMED HOW ARE YOU? ");
	cout << "\n_____________________________________________________________________\n\n";

	clsEmployee Employee1(33, "Mohammed", "Ahmed", "Mo@gmail.com", "01234567891", "A2", "Mansourah", 6000);
	Employee1.Print();
	cout << "\n_____________________________________________________________________\n\n";

	clsDeveloper Developer1(33, "Mohammed", "Ahmed", "Mo@gmail.com", "01098765432", "A2", "Mansourah", 6000, "C++");
	Developer1.Print();
	Developer1.SendEmail("How Are You? ");
	cout << "\n_____________________________________________________________________\n\n";

	//system("Pause>0");
	return 0;
}
