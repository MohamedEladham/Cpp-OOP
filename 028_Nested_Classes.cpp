
#include <iostream>
#include <string>
using namespace std;


class clsPerson
{
	class clsAddress
	{
	private:
		string _AddressLine1;
		string _AddressLine2;
		string _City;
		string _Country;

	public:

		clsAddress(string AddressLine1, string AddressLine2, string City, string Country)
		{
			_AddressLine1 = AddressLine1;
			_AddressLine2 = AddressLine2;
			_City = City;
			_Country = Country;
		}

		void SetAddressLine1(string AddressLine1)
		{
			_AddressLine1 = AddressLine1;
		}
		string GetAddressLine1()
		{
			return _AddressLine1;
		}

		void SetAddressLine2(string AddressLine2)
		{
			_AddressLine2 = AddressLine2;
		}
		string GetAddressLine2()
		{
			return _AddressLine2;
		}

		void SetCity(string City)
		{
			_City = City;
		}
		string GetCity()
		{
			return _City;
		}

		void SetCountry(string Country)
		{
			_Country = Country;
		}
		string GetCountry()
		{
			return _Country;
		}

		void Print()
		{
			cout << "\nPerson Address: \n";
			cout << "___________________\n";
			cout << "Address Line1: " << GetAddressLine1() << endl;
			cout << "Address Line2: " << GetAddressLine2() << endl;
			cout << "City         : " << GetCity() << endl;
			cout << "Country      : " << GetCountry() << endl;
			cout << "___________________\n\n";
		}
	};

private:

	string _FullName;

public:

	clsAddress Address;

	clsPerson(string FullName, string AddressLine1, string AddressLine2, string City, string Country)
		: Address(AddressLine1, AddressLine2, City, Country)
	{
		_FullName = FullName;
	}

	void SetFullName(string FullName)
	{
		_FullName = FullName;
	}
	string GetFullName()
	{
		return _FullName;
	}

	void Print()
	{
		cout << "\nPerson Info: \n";
		cout << "___________________\n";
		cout << "FullName     : " << GetFullName() << endl;
		cout << "Address Line1: " << Address.GetAddressLine1() << endl;
		cout << "Address Line2: " << Address.GetAddressLine2() << endl;
		cout << "City         : " << Address.GetCity() << endl;
		cout << "Country      : " << Address.GetCountry() << endl;
		cout << "___________________\n\n";
	}
};

int main()
{
	clsPerson Person1("Mohammed Eladham", "dfsfgfd", "fgdhgfh", "Mansourah", "Egypt");
	Person1.Print();

	cout << "\n____________________________________________________________\n\n";

	Person1.Address.Print();

	//system("Pause>0");
	return 0;
}
