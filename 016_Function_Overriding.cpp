
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

protected:

	int gggg = 10;

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
		cout << "\nPerson Info: \n";
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
		cout << "Last Name : " << LastName() << endl;
		cout << "Full  Name: " << FullName() << endl;
		cout << "Email     : " << Email() << endl;
		cout << "Phone     : " << Phone() << endl;
		cout << "Department: " << Department() << endl;
		cout << "Title     : " << Title() << endl;
		cout << "Salary    : " << Salary() << endl;
		cout << "__________________\n\n";
	}
};

int main()
{
	clsPerson Person1(23, "Khaled", "Mohammed", "Kh@gmail.com", "01012345678");
	Person1.Print();

	clsEmployee Employee1(44, "Osama", "Elsayed", "Os@gmail.com", "01298765432", "Mansourah", "A6", 7500);
	Employee1.Print();

	//system("Pause>0");
	return 0;
}
