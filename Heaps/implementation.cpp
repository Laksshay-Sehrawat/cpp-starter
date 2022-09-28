#include <bits/stdc++.h>
using namespace std;
class heap
{
    vector<int> v;
    bool minHeap;
    bool compare(int a, int b)
    {
        if (minHeap)
        {
            return a < b;
        }
        else
        {
            return a > b;
        }
    }
    void heapify(int index)
    {
        int left = 2 * index;
        int right = 2 * index + 1;
        int min_index = index;
        if (left < v.size() && compare(v[left], v[index]))
        {
            min_index = left;
        }
        if (right < v.size() && compare(v[right], v[min_index]))
        {
            min_index = right;
        }
        if (min_index != index)
        {
            swap(v[index], v[min_index]);
            heapify(min_index);
        }
    }

public:
    heap(bool type = true)
    {
        minHeap = type;
        // block the 0th index -
        v.push_back(-1);
    }
    void push(int data)
    {
        v.push_back(data);
        // take that element to restore the heap property
        int index = v.size() - 1;
        while (index > 1 && compare(v[index], v[index / 2]))
        {
            swap(v[index], v[index / 2]);
            index /= 2;
        }
    }
    bool empty()
    {
        return v.size() == 1;
    }
    int top()
    {
        return v[1];
    }
    void print_heap()
    {
        for (int i = 1; i < v.size(); ++i)
        {
            cout << v[i] << " ";
        }
    }
    void pop()
    {
        int last = v.size() - 1;
        swap(v[1], v[last]);
        v.pop_back();
        heapify(1); // we will give it the index of the node from which we will start the heapify method;
    }
};

int main()
{
    heap h = heap(true);
    h.push(1);
    h.push(2);
    h.push(3);
    h.push(17);
    h.push(19);
    h.push(36);
    h.push(7);
    h.push(25);
    h.push(100);
    h.push(0);
    h.print_heap();
    cout << "\n";
    while (!h.empty())
    {
        cout << h.top() << " ";
        h.pop();
    }
    return 0;
}