
#include <iostream>
#include <string>
using namespace std;

// Abstract Class / Interface Class / Contract
class clsMobile
{
public:
	// Pure Virtual Functions
	virtual void Dial(string PhoneNumber) = 0;
	virtual void SendSMS(string Text) = 0;
	virtual void TakePicture() = 0;
};

class clsIPhone : public clsMobile
{

public:

	void Dial(string PhoneNumber)
	{

	}

	void SendSMS(string Text)
	{

	}

	void TakePicture()
	{

	}

	void Print()
	{

	}
};

class clsSamsungNot10 : public clsMobile
{

public:

	void Dial(string PhoneNumber)
	{

	}

	void SendSMS(string Text)
	{

	}

	void TakePicture()
	{

	}
};

int main()
{
	clsIPhone iphone1;
	clsSamsungNot10 Note10;

	//system("Pause>0");
	return 0;
}
