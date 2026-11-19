
#include <iostream>
#include <cstdlib>
using namespace std;

class clsPerson
{

public:

	// This Is Constructor Will Be Called When Object Is Built.

	clsPerson()
	{
		cout << "\nHi, I'm Constructor. \n";
	}



	// This Is Destructor Will Be Called When Object Is Destroyed.

	~clsPerson()
	{
		cout << "\nHi, I'm Destructor. \n";
	}
};

void Fun1()
{
	clsPerson Person;
}

int main()
{
	Fun1();

	system("Pause>0");
	return 0;
}
