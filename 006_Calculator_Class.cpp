
#include <iostream>
#include <string>
using namespace std;

class clsCalculator
{
private:
	float _Result = 0;
	float _LastNumber = 0;
	string _LastOperation = "";
	float _PreviousResult = 0;

public:

	void Clear()
	{
		_LastOperation = "Clear";
		_PreviousResult = 0;
		_LastNumber = 0;
		_Result = 0;
	}

	void Add(float Number)
	{
		_LastOperation = "Adding";
		_LastNumber = Number;
		_PreviousResult = _Result;
		_Result += Number;
	}

	void Subtract(float Number)
	{
		_LastOperation = "Subtracting";
		_LastNumber = Number;
		_PreviousResult = _Result;
		_Result -= Number;
	}

	void Divide(float Number)
	{
		_LastNumber = Number;

		if (Number == 0)
		{
			_LastOperation = "Division By Zero";
			_LastNumber = 0;
			_PreviousResult = _Result;
			return;
		}

		_LastOperation = "Dividing";
		_PreviousResult = _Result;
		_Result /= Number;
	}

	void Multiply(float Number)
	{
		_LastOperation = "Multiplying";
		_LastNumber = Number;
		_PreviousResult = _Result;
		_Result *= Number;
	}

	void CancelLastOperation()
	{
		_LastOperation = "Cancelling Last Operation";
		_LastNumber = 0;
		_Result = _PreviousResult;
	}

	void PrintResult()
	{
		cout << "Result After " << _LastOperation << " " << _LastNumber << " Is: " << _Result << endl;
	}
};

int main()
{
	clsCalculator Calculator;

	Calculator.Clear();

	Calculator.Add(10);
	Calculator.PrintResult();

	Calculator.Add(100);
	Calculator.PrintResult();

	Calculator.Subtract(20);
	Calculator.PrintResult();

	Calculator.Divide(0);
	Calculator.PrintResult();

	Calculator.Divide(2);
	Calculator.PrintResult();

	Calculator.Multiply(3);
	Calculator.PrintResult();

	Calculator.CancelLastOperation();
	Calculator.PrintResult();

	Calculator.Clear();
	Calculator.PrintResult();

	return 0;
}
