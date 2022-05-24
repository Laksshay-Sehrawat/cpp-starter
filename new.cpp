#include <iostream>
using namespace std;
struct person
{
    int age;
    char name[10];
    int salary;
};

int main()
{
    // doubt 1-
    // int arr[] = {1, 2, 3, 4};
    // cout << &arr[0] << endl;
    // cout << &arr[1] << endl;
    // cout << "size of int is " << ((&arr[1]) - (&arr[0])) << endl;
    // why is the answer not 4?

    // person Laksshay;
    // cout << "enter age - ";
    // cin >> Laksshay.age;
    // cout << "enter name - " << endl;
    // cin.get(Laksshay.name, 30);
    // cout << "age is " << Laksshay.age << " name is " << Laksshay.name;

    // person p1;

    // cout << "Enter Full name: ";
    // cin.get(p1.name, 50);
    // cout << "Enter age: ";
    // cin >> p1.age;

    // cout << "\nDisplaying Information." << endl;
    // cout << "Name: " << p1.name << endl;
    // cout << "Age: " << p1.age << endl;
    int n1, n2;
    cout << "enter number 1 ";
    cin >> n1;
    cout << "enter numbr 2 ";
    cin >> n2;
}