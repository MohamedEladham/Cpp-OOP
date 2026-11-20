
#include <iostream>
using namespace std;

class clsA
{

public:
	int x;

	void Print()
	{
		cout << "The value of x = " << x << endl;
	}
};

// Object sent by value, any updates will not be reflected
// on the original object.
void Fun1(clsA A1)
{
	A1.x = 100;
}

// Object sent by reference, any updates will be reflected
// on the original object.
void Fun2(clsA& A1)
{
	A1.x = 200;
}

int main()

{
	clsA A1;

	A1.x = 50;
	cout << "\nA.x before calling function1: \n";

	A1.Print();

	// Pass by value, object will not be affected.
	Fun1(A1);
	cout << "\nA.x after calling function1 by value: \n";
	A1.Print();

	// Pass by reference, object will be affected.
	Fun2(A1);
	cout << "\nA.x after calling function2 by reference: \n";
	A1.Print();

	//system("pause>0");
	return 0;
}
