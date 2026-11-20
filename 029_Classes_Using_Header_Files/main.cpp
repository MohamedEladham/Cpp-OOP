#include <iostream>
#include "clsPerson.h"
#include "clsEmployee.h"
#include "clsDeveloper.h"
using namespace std;

int main()
{
	clsPerson Person1(33, "Mohammed", "Nasr", "MO111@gmail.com", "01065432198");
	Person1.Print();

	cout << "\n_______________________________________________________\n";

	clsEmployee Employee1(25, "Nader", "Ashraf", "NA22@gmail.com", "01173649285", "A2", "Mansourah", 7000);
	Employee1.Print();

	clsDeveloper Developer1(25, "Nader", "Ashraf", "NA22@gmail.com", "01246813579", "A2", "Mansourah", 7000, "C++");
	Developer1.Print();

	//system("Pause>0");
	return 0;
}