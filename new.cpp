#include <iostream>
using namespace std;

int main()
{
    // doubt 1-
    // int arr[] = {1, 2, 3, 4};
    // cout << &arr[0] << endl;
    // cout << &arr[1] << endl;
    // cout << "size of int is " << ((&arr[1]) - (&arr[0])) << endl;
    // why is the answer not 4?
    string str;
    cout << "enter a string : ";
    getline(cin, str);
    cout << str << endl;
}