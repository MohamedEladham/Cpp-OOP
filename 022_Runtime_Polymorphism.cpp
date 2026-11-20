
#include <iostream>
using namespace std;

class clsPerson
{

public:
	virtual void Print()
	{
		cout << "I'm Person. \n";
	}
};

// Hierarchical Inheritance.
class clsEmployee : public clsPerson
{

public:
	void Print()
	{
		cout << "I'm Employee. \n";
	}
};

// Hierarchical Inheritance.
class clsStudent : public clsPerson
{

public:
	void Print()
	{
		cout << "I'm Student. \n";
	}
};

int main()
{
	clsEmployee Employee1;
	clsStudent Student1;

	// UP Casting

	clsPerson* Person1 = &Employee1;
	clsPerson* Person2 = &Student1;

	Person1->Print();
	Person2->Print();

	//system("Pause>0");
	return 0;
}
