#include <bits/stdc++.h>
using namespace std;
class car
{
    int x;
    int y;
    int id;

public:
    car(int id, int x, int y)
    {
        this->id = id;
        this->x = x;
        this->y = y;
    }
    int dist()
    {
        return x * x + y * y;
    }
    void print_details()
    {
        cout << "ID : " << this->id << "| X :  " << this->x << "| Y :  " << this->y << endl;
    }
};
class carComparator
{
public:
    bool operator()(car a, car b)
    {
        return a.dist() > b.dist();
    }
};
priority_queue<car, vector<car>, carComparator> pq;
int main()
{
    int x[] = {3, 15, 1, 9, -1};
    int y[] = {2, 0, 1, 10, 11};
    for (int i = 0; i < 5; i++)
    {
        car c(i, x[i], y[i]);
        pq.push(c);
    }
    while (!pq.empty())
    {
        car c = pq.top();
        c.print_details();
        pq.pop();
    }

    return 0;
}