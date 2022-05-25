#include <iostream>
using namespace std;
struct person
{
    char name[50];
    int age;
    int salary;
};
void display_data(person);

int main()
{
    person laksshay;
    cout << "naam do ";
    cin.get(laksshay.name, 50);
    cout << "age do ";
    cin >> laksshay.age;
    cout << "salary dede ";
    cin >> laksshay.salary;
    display_data(laksshay);
}
void display_data(person p)
{
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary << endl;
}
