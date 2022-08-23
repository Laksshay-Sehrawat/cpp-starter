#include <iostream>
using namespace std;

int ways_to_nStair(int n, int start = 0)
{
    if (start == n)
    {
        cout << "destination reached" << endl;
        return 1;
    }
    // recursive relation -
    return ways_to_nStair(n, start + 1);
}
void to_destination(int start, int destination)
{
    cout << "Currently at " << start << " have to go to " << destination << endl;
    if (start == destination)
    {
        cout << "pahuch gaya" << endl;
        return;
    }
    return to_destination(start + 1, destination);
}
int fibb(int n, int start = 0)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
        return 1;
    return fibb(n - 1) + fibb(n - 2);
}
int main()
{
    int n;
    cout << "enter the number till fibb - ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << fibb(i) << " ";
    }
    cout << endl;
}