#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void create_node_end(node *&head, int data)
{
    node *new_node = new node(data);
    if (head->next == NULL)
    {
        head->next = new_node;
        return;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void print_ll(node *&head)
{
    node *temp = head;
    while (temp->next == NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void create_node_head(node *&head, int data)
{
    node *new_node = new node(data);
    new_node->next = head;
    head = new_node;
}
void reverse(node *&head)
{
    node *temp = head;
    // node *free_ptr = head;
    int count = -1;
    while (temp->next != NULL)
    {
        temp = temp->next;
        ++count;
    }
    cout << 50;
    while (count)
    {
        temp->next = head;
        head = head->next;
        temp = temp->next;
        // delete (free_ptr);
        // free_ptr = head;
        count -= 1;
    }
}
int main()
{
    node *head = new node(10);
    create_node_end(head, 12);
    create_node_end(head, 13);
    create_node_end(head, 40);
    create_node_head(head, 69);
    print_ll(head);
    reverse(head);
    print_ll(head);
    return 0;
}