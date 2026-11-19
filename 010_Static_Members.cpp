
#include <iostream>
#include <cstdlib>
using namespace std;

class ClsA
{

public:

	int Var;
	static int Counter;

	ClsA()
	{
		Counter++;
	}

	void Print()
	{
		cout << "\nVar     = " << Var << endl;
		cout << "Counter = " << Counter << endl;
	}
};

// Static Variable Initialization Outside The Class
int ClsA::Counter = 0;

int main()
{
	ClsA A1, A2, A3, A4;

	A1.Var = 10;
	A2.Var = 20;
	A3.Var = 30;

	A1.Print();
	A2.Print();
	A3.Print();

	cout << "\nAfter Changing The Static Member Counter In One Object: \n";
	A1.Counter = 500;

	A1.Print();
	A2.Print();
	A3.Print();


	system("Pause>0");
	return 0;
}
