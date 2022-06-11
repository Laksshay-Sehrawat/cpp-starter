#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the number for which you need binary representation - ";
    cin >> n;
    int temp = n;
    int power = 0;
    int number = 0;
    while (temp)
    {
        int bit = temp & 1;
        temp = temp >> 1;
        number += (bit * pow(10, power));
        ++power;
    }
    cout << "the number is " << number << endl;
}