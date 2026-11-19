
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

	void PrintResult()
	{
		cout << "Address Line1: " << _AddressLine1 << endl;
		cout << "Address Line2: " << _AddressLine2 << endl;
		cout << "PO Box       : " << _POBox << endl;
		cout << "Zip Code     : " << _ZipCode << endl;
	}
};

int main()
{
	clsAddress Address1("Mansourah", "A 333", "1111", "A1152");
	Address1.PrintResult();
	cout << "\n\n\n";
	return 0;
}
