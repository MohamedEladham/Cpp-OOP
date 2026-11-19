#include <iostream>
#include <string>
using namespace std;

class clsPerson
{
public:

	string FirstName;
	string LastName;
	string FullName()
	{
		return FirstName + " " + LastName;
	}

private:
	short Age = 27;
	float Salary = 5000;

public:
	string AccountNumber;
	string Phone;

	void SayHello(string FullName)
	{
		cout << "Hello " << FullName << " :-) \n";
	}
};

int main()
{
	clsPerson Person1;
	Person1.FirstName = "Mohamed";
	Person1.LastName = "Eladham";
	cout << Person1.FullName() << endl;

	Person1.SayHello(Person1.FullName());
	return 0;
}
