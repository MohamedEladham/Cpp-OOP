
#include <iostream>
#include <string>
using namespace std;

class clsPerson
{
private:
	string _FirstName;
	string _LastName;
	short _Age;

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

	void SetAge(short Age)
	{
		_Age = Age;
	}

	// Property Getters
	string GetFirstName()
	{
		return _FirstName;
	}

	string GetLastName()
	{
		return _LastName;
	}

	string FullName()
	{
		return _FirstName + " " + _LastName;
	}

	short GetAge()
	{
		return _Age;
	}
};

int main()
{
	clsPerson Person1;

	Person1.SetFirstName("Mohammed");
	Person1.SetLastName("Eladham");
	Person1.SetAge(27);

	cout << "First Name: " << Person1.GetFirstName() << endl;
	cout << "Last  Name: " << Person1.GetLastName() << endl;
	cout << "Full  Name: " << Person1.FullName() << endl;
	cout << "Age       : " << Person1.GetAge() << endl;

	return 0;
}
