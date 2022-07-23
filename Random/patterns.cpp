#include <iostream>
using namespace std;

int main()
{
    // int row = 1, n, col = 1;
    // cout << "enter a number bb - ";
    // // int count = n;
    // cin >> n;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= (row))
    //     {
    //         cout << " ";
    //         col += 1;
    //     }
    //     col = 1;
    //     int count = col + row - 1;
    //     while (col <= (n - row + 1))
    //     {
    //         cout << count;
    //         count += 1;
    //         col += 1;
    //     }
    //     cout << endl;
    //     row += 1;
    // }
    int rows = 1, n;
    cout << "enter the number of rows";
    cin >> n;
    while (rows <= n)
    {
        int cols = 1;
        while (cols <= (n - rows + 1))
        {
            cout << cols;
            cols += 1;
        }
        cols = 1;
        while (cols <= (rows))
        {
            cout << "*";
            cols += 1;
        }
        cols = 1;
        while (cols <= (rows - 1))
        {
            cout << "*";
            cols += 1;
        }
        cols = 1;
        while (cols <= (n - rows + 1))
        {
            cout << cols;
            cols += 1;
        }
        cout << endl;
        rows += 1;
    }
}
