
#include <iostream>
using namespace std;

class clsA
{
private:
	int _V1;
	int _Fun1()
	{
		return 1;
	}

protected:
	void Fun2()
	{
		cout << "\nFun 2. \n";
	}

public:
	void Fun3()
	{
		cout << "\nFun 3. \n";
	}
};

class clsB : protected clsA
{
protected:
	void Fun4()
	{
		cout << "\nFun 4. \n";
	}

public:

	void Fun5()
	{
		clsA::Fun2();
		Fun3();
		cout << "\nFun 5. \n";
	}

	void Fun6()
	{
		cout << "\nFun 6. \n";
	}
};

class clsC : public clsB
{
protected:
	void Fun7()
	{
		cout << "\nFun 7. \n";
	}

public:

	void Fun8()
	{

	}
};

class clsD : private clsC
{
protected:
	void Fun9()
	{
		cout << "Hi\n";
	}

public:

	void Fun10()
	{

	}
};

int main()
{
	clsC x;

	//system("Pause>0");
	return 0;
}
