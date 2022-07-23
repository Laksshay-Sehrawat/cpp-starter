#include <iostream>
using namespace std;

int ways_to_nStair(int n, int start = 0)
{
    if (start == n)
    {
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
        cout << "pahuch gaya";
        return;
    }
    return to_destination(start + 1, destination);
}
int main()
{
    to_destination(0, 10);
}