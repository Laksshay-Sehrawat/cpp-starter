#include <iostream>
#define max 10
using namespace std;
// enqueue dequeue pop peek display isempty isfull
//  [ ][ ][ ][ ][ ][ ]
int front = 0, rear = 0;
int arr[max];
void enqueue(int d)
{
    if (rear - front == max - 1)
    {
        cout << "overflow";
        return;
    }
    arr[rear] = d;
    rear++;
}
int dequeue()
{
    if (front - rear == 0)
    {
        cout << "underflow";
    }
    int x = arr[front];
    front++;
    return x;
}
int main()
{
    return 0;
}