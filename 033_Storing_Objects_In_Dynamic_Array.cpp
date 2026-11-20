
#include <iostream>
#include <cstdlib>
using namespace std;

class clsA
{
public:

	// Default Constructor
	clsA() {}

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
	short NumberOfObjects = 5;

	// Allocating a dynamic array
	// of size NumberOfObjects using new keyword

	clsA* arrA = new clsA[NumberOfObjects];

	// Calling the constructor
	// for each index of the array
	for (int i = 0; i < NumberOfObjects; i++) {
		arrA[i] = clsA(i);
	}

	// Printing the contents of the array
	for (int i = 0; i < NumberOfObjects; i++) {
		arrA[i].Print();
	}

	delete[] arrA;

	system("pause>0");
	return 0;
}
