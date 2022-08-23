#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
node *InsertHead(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
    }
    else
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
    }
}
node *InsertTail(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
    }
    node *temp = head;

    while (temp != NULL)
    {
    }
}
int main()
{
    return 0;
}