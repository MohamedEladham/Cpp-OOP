
#include <iostream>
#include <string>
using namespace std;

class clsA
{
private:
	int _Var1;
	string _FirstName;
	string _LastName;

protected:
	int Var2;

public:
	int Var3;

	// Constructor
	clsA()
	{
		_FirstName = "Mohammed";
		_LastName = "Eladham";
		_Var1 = 10;
		Var2 = 20;
		Var3 = 30;
	}

	friend class clsB;	// Friend Class
};

class clsB
{

public:

	void Display(clsA A1)
	{
		cout << "\nValue Of _FirstName: " << A1._FirstName << endl;
		cout << "\nValue Of _LastName : " << A1._LastName << endl;
		cout << "\nValue Of _Var1: " << A1._Var1 << endl;
	}
};

int main()
{
	clsA A1;

	clsB B1;
	B1.Display(A1);

	//system("Pause>0");
	return 0;
}
