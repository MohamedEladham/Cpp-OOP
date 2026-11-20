
#include <iostream>
using namespace std;

class ClsA
{
public:

	static int Fun1()
	{
		return 10;
	}

	int Fun2()
	{
		return 20;
	}
};

int main()
{
	ClsA A1, A2;

	// You can access a static (Method, Variable)
	// By Class or Objects .
	cout << ClsA::Fun1() << endl;

	cout << A1.Fun1() << endl;
	cout << A1.Fun2() << endl;
	return 0;
}
