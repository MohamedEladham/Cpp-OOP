
#include <iostream>
using namespace std;

class clsA
{
private:
	int _Var1;

protected:
	int Var2;

public:
	int Var3;

	// Constructor
	clsA()
	{
		_Var1 = 10;
		Var2 = 20;
		Var3 = 30;
	}

	friend int MySum(clsA A1);	// Friend Function
	//friend int MySum1(clsA A1);
};

int MySum(clsA A1)
{
	return A1._Var1 + A1.Var2 + A1.Var3;
}

int MySum1(clsA A1)
{
	return A1._Var1 + A1.Var2 + A1.Var3;
}

int main()
{
	clsA A1;

	cout << MySum(A1) << endl;

	//system("Pause>0");
	return 0;
}
