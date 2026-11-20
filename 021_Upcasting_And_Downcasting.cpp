
#include <iostream>
using namespace std;

class clsPerson
{
protected:
	void Fun1()
	{
		cout << "Hi, I'm Fun 1.\n";
	}

public:
	void Fun2()
	{
		cout << "Hi, I'm Fun 2.\n";
	}
};

// Visibility Mode
class clsEmployee : public clsPerson
{
protected:
	void Fun3()
	{
		cout << "Hi, I'm Fun 3.\n";
	}

public:
	void Fun4()
	{
		cout << "Hi, I'm Fun 4.\n";
	}
};

int main()
{
	clsEmployee Employee1;
	Employee1.Fun2();

	// Upcasting
	clsPerson* Person1 = &Employee1;

	// Daown Casting
	clsEmployee* Employee2 = &Person;	// Error 
	Employee2->Fun4();

	return 0;
}
