
#include <iostream>
#include <string>
using namespace std;

class clsEmployee
{

public:

    int ID;
    string Name;
    float Salary;

    clsEmployee(int ID, string Name, float Salary)
    {
        this->ID = ID;
        this->Name = Name;
        this->Salary = Salary;
    }

    static void Fun1(clsEmployee Employee1)
    {
        Employee1.Print();
    }

    void Fun2()
    {
        Fun1(*this);
    }

    void Print()
    {
        cout << ID << endl;
        cout << Name << endl;
        cout << Salary << endl;
    }
};

int main()
{
    clsEmployee Employee1(33, "Mohammed", 6000);
    Employee1.Print();
    Employee1.Fun2();

    //system("pause>0");
    return 0;
}
