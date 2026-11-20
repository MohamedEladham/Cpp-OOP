#pragma once
#include <iostream>
#include <string>
using namespace std;

class clsPerson
{
private:
	short _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:

	// Constructor
	clsPerson(short ID, string FirstName, string LastName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}

	// Read Only
	int ID()
	{
		return _ID;
	}

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string FirstName()
	{
		return _FirstName;
	}

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string LastName()
	{
		return _LastName;
	}

	string FullName()
	{
		return _FirstName + " " + _LastName;
	}

	void SetEmail(string Email)
	{
		_Email = Email;
	}

	string Email()
	{
		return _Email;
	}

	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}

	string Phone()
	{
		return _Phone;
	}

	void SendGmail(string Subject, string Body)
	{
		cout << "\nThe Following Message Send Successfully, To Email: " << _Email << endl;
		cout << "Subject: " << Subject << endl;
		cout << "Body   : " << Body << endl;
	}

	void SendSMS(string TextMessage)
	{
		cout << "\nThe Following SMS Send Successfully, To Phone: " << _Phone << endl;
		cout << "Message: " << TextMessage << endl;
	}

	void Print()
	{
		cout << "\nPerson Info: \n";
		cout << "-------------\n";
		cout << "ID        : " << _ID << endl;
		cout << "First Name: " << _FirstName << endl;
		cout << "Last  Name: " << _LastName << endl;
		cout << "Full  Name: " << FullName() << endl;
		cout << "Email     : " << _Email << endl;
		cout << "Phone     : " << _Phone << endl;
		cout << "-------------\n";
	}
};