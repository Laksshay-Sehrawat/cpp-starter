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

    return 0;
}