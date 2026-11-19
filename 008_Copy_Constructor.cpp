
#include <iostream>
#include <string>
using namespace std;

class clsAddress
{
private:
	string _AddressLine1;
	string _AddressLine2;
	string _POBox;
	string _ZipCode;

public:
	// Constructors
	clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode)
	{
		_AddressLine1 = AddressLine1;
		_AddressLine2 = AddressLine2;
		_POBox = POBox;
		_ZipCode = ZipCode;
	}


	// Copy Constructor

	clsAddress(const clsAddress& Old_Obj)
	{
		_AddressLine1 = Old_Obj._AddressLine1;
		_AddressLine2 = Old_Obj._AddressLine2;
		_POBox = Old_Obj._POBox;
		_ZipCode = Old_Obj._ZipCode;
	}


	void PrintResult()
	{
		cout << "\nAddress Details: \n";
		cout << "-----------------------\n";
		cout << "Address Line1: " << _AddressLine1 << endl;
		cout << "Address Line2: " << _AddressLine2 << endl;
		cout << "PO Box       : " << _POBox << endl;
		cout << "Zip Code     : " << _ZipCode << endl;
		cout << "\n";
	}
};

int main()
{
	clsAddress Address1("Ahmed", "A 333", "1111", "A1152");
	Address1.PrintResult();

	clsAddress Address2 = Address1;
	Address2.PrintResult();
	return 0;
}
