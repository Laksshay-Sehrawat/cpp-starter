#include <iostream>
using namespace std;

void TOH(int n, char x, char y, char z)
{
    if (n > 0)
    {
        TOH(n - 1, x, z, y);
        cout << "move block from " << x << " to " << y << endl;
        TOH(n - 1, y, x, z);
    }
}

int main()
{
    int n;
    cout << "enter n - ";
    cin >> n;
    TOH(n, 'a', 'b', 'c');
}
