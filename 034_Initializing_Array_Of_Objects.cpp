
#include <iostream>
#include <cstdlib>

using namespace std;

class clsA
{
public:

	// Parameterized Constructor
	clsA(int value)
	{
		x = value;
	}

	int x;

	void Print()
	{
		cout << "The value of x=" << x << endl;
	}
};

int main()
{

	// Initializing 3 array objects with function calls of
	// parameterized constructor as elements of that array
	clsA obj[] = { clsA(10), clsA(20), clsA(30) };

	// Using Print method for each of the three elements.
	for (int i = 0; i < 3; i++) {
		obj[i].Print();
	}

	system("pause>0");

	return 0;
}
