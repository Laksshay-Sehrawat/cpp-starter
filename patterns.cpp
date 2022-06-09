#include <iostream>
using namespace std;
int main()
{
    int row = 1, n, col = 1;
    cout << "enter a number bb - ";
    // int count = n;
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        while (col <= (row))
        {
            cout << " ";
            col += 1;
        }
        col = 1;
        int count = col + row - 1;
        while (col <= (n - row + 1))
        {
            cout << count;
            count += 1;
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}