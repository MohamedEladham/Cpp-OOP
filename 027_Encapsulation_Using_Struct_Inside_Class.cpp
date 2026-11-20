
#include <iostream>
#include <string>
using namespace std;

class clsPerson
{
private:

	struct stAddress
	{
		string _FullName;
		string _AddressLine1;
		string _Phone;
		string _City;
		string _Country;
	};
	stAddress Address;

public:

	clsPerson(string FullName, string AddressLine1, string Phone, string City, string Country)
	{
		Address._FullName = FullName;
		Address._AddressLine1 = AddressLine1;
		Address._Phone = Phone;
		Address._City = City;
		Address._Country = Country;
	}


	void SetFullName(string FullName)
	{
		Address._FullName = FullName;
	}
	string FullName()
	{
		return Address._FullName;
	}


	void SetAddressLine1(string AddressLine1)
	{
		Address._AddressLine1 = AddressLine1;
	}
	string AddressLine1()
	{
		return Address._AddressLine1;
	}

	void SetPhone(string Phone)
	{
		Address._Phone = Phone;
	}
	string Phone()
	{
		return Address._Phone;
	}

	void SetCity(string City)
	{
		Address._City = City;
	}
	string City()
	{
		return Address._City;
	}

	void SetCountry(string Country)
	{
		Address._Country = Country;
	}
	string Country()
	{
		return Address._Country;
	}

	void Print()
	{
		cout << "\nPerson Info: \n";
		cout << "Full Name: " << FullName() << endl;
		cout << "Address  : " << AddressLine1() << endl;
		cout << "Phone    : " << Phone() << endl;
		cout << "City     : " << City() << endl;
		cout << "Country  : " << Country() << endl;
	}
};

int main()
{
	clsPerson Person1("Mohammed Eladham", "A150", "01087654321", "Mansourah", "Egypt");
	Person1.Print();

	//system("Pause>0");
	return 0;
}
