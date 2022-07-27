#include <iostream>
using namespace std;
class employee
{
private:
    // these are the data of each instance of the object
    int salary;
    int internalRank;

public:
    // this is a constructor to the class employee. it must be same as the name of the class. It is executed during the initialisation of the class-instance/ object
    employee(int salary, int internalRank)
    {
        // this is making sure that the salary&internalRank variables are given the value that we have been given as the parameter. (this is a parameterised constructor)
        this->internalRank = internalRank;
        this->salary = salary;
    }
    // this is a method of the class
    void printInfo()
    {
        // this is a method written to print the information onto the screen
        cout << "the salary is : " << salary << endl;
        cout << "the internal rank is : " << internalRank << endl;
    }
};
int main()
{
    employee raman(12000, 25);
    raman.printInfo();
    return 0;
}