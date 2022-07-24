#include <iostream>
using namespace std;
void say_name(int n)
{

    if (n == 0)
    {
        return;
    }
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int last_digit = n % 10;
    say_name(n / 10);
    cout << arr[last_digit] << " ";
}
int main()
{
    say_name(160);
}