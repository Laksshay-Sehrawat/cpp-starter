#include <bits/stdc++.h>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int reverse(int *num)
{
    int result = 0;
    while ((*num) > 0)
    {
        result = (result * 10) + ((*num) % 10);
        (*num) /= 10;
    }
    return result;
}
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        int num1 = 0, num2 = 0, sum = 0, carry = 0;

        while (temp1 != nullptr)
        {
            num1 = (num1 * 10) + temp1->val;
            temp1 = temp1->next;
        }
        while (temp2 != NULL)
        {
            num2 = (num2 * 10) + temp2->val;
            temp2 = temp2->next;
        }
        reverse(&num1);
        reverse(&num2);
        sum = num1 + num2;
        ListNode *l3 = new ListNode(sum % 10);
        ListNode *temp = l3;
        sum /= 10;
        while (sum > 0)
        {
            ListNode *new_node = new ListNode(sum % 10);
            temp->next = new_node;
            temp = new_node;
            sum /= 10;
        }
        return l3;
    }
};