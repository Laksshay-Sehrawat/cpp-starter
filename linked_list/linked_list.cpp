#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next = NULL;
    // void AddNode(node *head){
    //     head->data = data;
    // }
};
void print_ll_recursively(node *head)
{
    if (head == NULL)
    {
        cout << "null" << endl;
        return;
    }
    cout << head->data << "->";
    return print_ll_recursively(head->next);
}
void print_ll_iteratively(node *head)
{
    cout << "iteratively printing linked list" << endl;
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "null\n\n"
         << endl;
}
void delete_node(node *head, int key)
{
    node *temp = head;
    node *prev = NULL;
    if (temp != NULL && temp->data == key)
    {
        head = temp->next; // Changed head
        delete temp;       // free old head
        return;
    }
    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;

        // Unlink the node from linked list
        prev->next = temp->next;

        // Free memory
        delete temp;
    }
}
int main()
{
    // head->NULL second->NULL third->NULL

    node *head = NULL;
    node *second = NULL;
    node *third = NULL;

    // here we have dynamically assigned memory in heap to all the pointers
    head = new node();
    second = new node();
    third = new node();

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
    cout << "\n\nrecursively printing linked list\n";
    print_ll_recursively(head);
    print_ll_iteratively(head);
    delete_node(head, 20);
    print_ll_recursively(head);
    return 0;
}