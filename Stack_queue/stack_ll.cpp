#include <iostream>
using namespace std;
// push pop peek isfull isempty
class node
{
public:
    int data;
    node *next;
};
node *top = NULL;
void push(int data)
{
    node *newnode = new node();
    newnode->data = data;
    newnode->next = top;
    top = newnode;
}
void display()
{
    node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void pop()
{
    if (top == NULL)
    {
        cout << "underflow" << endl;
        return;
    }
    node *temp = top;
    top = top->next;
    delete temp;
}
int main()
{
    push(10);
    push(20);
    push(40);
    display();
    pop();
    display();
    return 0;
}