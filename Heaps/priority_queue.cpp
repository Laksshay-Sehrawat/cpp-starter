#include <bits/stdc++.h>
// the header file queue has priority queue in it.
using namespace std;
int main()
{
    // syntax for defining a priority queue (using max heap) -
    //  priority_queue<type, input, comparator> (name of pq)

    // making a max heap priority queue -
    priority_queue<int, vector<int>, less<int>> pq_max;
    // making a min heap priority queue -
    priority_queue<int, vector<int>, greater<int>> pq_min;
    int arr[] = {1, 42, 24, 4, 66, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; ++i)
    {
        pq_max.push(arr[i]);
        pq_min.push(arr[i]);
    }

    for (int i = 0; i < size; ++i)
    {
        cout << pq_max.top() << " ";
        pq_max.pop();
    }
    cout << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << pq_min.top() << " ";
        pq_min.pop();
    }
    return 0;
}