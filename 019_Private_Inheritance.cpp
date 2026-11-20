
#include <iostream>
#include <cstdlib>
using namespace std;


class clsA
{
private:

	int _Var1;
	void _Fun1()
	{
		cout << "Hi, I'm Fun 1. \n";
	}

protected:

	int Var2 = 2;
	void Fun2()
	{
		cout << "Hi, I'm Fun 2. \n";
	}

public:

	int Var3;
	void Fun3()
	{
		cout << "Hi, I'm Fun 3. \n";
	}
};

class clsB : private clsA
{
private:

	int _Var4;
	void _Fun4()
	{
		cout << "Hi, I'm Fun 4. \n";
	}

protected:

	int Var5;
	void Fun5()
	{
		cout << "Hi, I'm Fun 5. \n";
	}

public:

	int Var6;

	void Fun7()
	{
		cout << Var2 << endl;
		Fun2();
		cout << Var3 << endl;
		Fun3();

		cout << "Hi, I'm Fun 7. \n";
	}

	void Fun6()
	{
		cout << clsA::Var2 << endl;
		clsA::Fun2();
		cout << "Hi, I'm Fun 6. \n";
	}
};


class clsC : private clsB
{

public:


};


int main()
{
	clsB B;

	B.Fun6();
	B.Fun7();

	system("Pause>0");
	return 0;
}
