#include <iostream>
#include <string>
using namespace std;


class clsPerson
{

	// Only Accessible Inside This Class

	// Note : Private Is By Default

private:

	int Variable1 = 5;
	int Function1()
	{
		return 30;
	}


	// Only Accessible Inside This Class And All Classes That Inherit This Class
protected:
	int Variable2 = 10;
	int Function2()
	{
		return 50;
	}


	// Accessible For Everyone Inside/Outside The Class And Classes That Inherit This Class
public:
	string FirstName;
	string LastName;

	string FullName()
	{
		return FirstName + " " + LastName;
	}

	int Sum()
	{
		return Function1() + Function2() + Variable1 + Variable2;
	}
};


int main()
{
	clsPerson Person1;

	Person1.FirstName = "Mohammed";
	Person1.LastName = "Eladham";
	cout << Person1.FullName() << endl;
	cout << Person1.Sum() << endl;

	return 0;
}
