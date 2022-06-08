#include <iostream>
using namespace std;
int main()
{
    int row = 1, col = 1, n, var = 1;
    cout << "enter the number of rows - ";
    cin >> n;
    while (row <= n)
    {
        col = 1;
        while (col <= n)
        {
            char ch = 'A' + var - row;
            cout << ch;
            col += 1;
            var += 1;
        }
        cout << endl;
        row += 1;
    }
}