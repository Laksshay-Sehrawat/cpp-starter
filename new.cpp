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
    // // doubt 1-
    // int arr[] = {1, 2, 3, 4};
    // cout << &arr[0] << endl;
    // cout << &arr[1] << endl;
    // cout << "size of int is " << ((&arr[1]) - (&arr[0])) << endl;
    // // why is the answer not 4?
    cout << "Hello"
         << "world";
    ;
    ;
    ;
    ;
    return 0;
}

void move(int n, char src, char des, char aux)
{
    if (n > 1)
    {
        move(n - 1, src, aux, des);
    }
}