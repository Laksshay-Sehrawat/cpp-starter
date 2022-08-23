#include <iostream>
#define max 10
using namespace std;

// stack functions - push pop size isempty peek isfull

// implementations - using arrays, using linkedlist
class stack
{
public:
    int top = -1;
    int arr[max];
    void push(int data)
    {
        if (isfull())
        {
            cout << "stack overflow" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }
    void pop()
    {
        if (top < 0)
        {
            cout << "stack underflow";
            return;
        }
        else
        {
            top--;
        }
    }
    int peek()
    {
        if (isempty())
        {
            cout << "stack empty";
            return -1;
        }
        else
        {
            cout << arr[top] << endl;
        }
    }

private:
    bool isempty()
    {
        return (top == -1);
    }
    bool isfull()
    {
        return (top == max - 1);
    }
};
int main()
{
    stack s;
    for (int i = 0; i < 11; i++)
    {
        s.push(i);
    }
    for (int i = 0; i < 10; i++)
    {
        s.peek();
        s.pop();
    }

    return 0;
}