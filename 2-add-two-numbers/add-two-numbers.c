/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode SLL;

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    SLL *head = NULL;
    SLL *tail = NULL;
    SLL *newnode;

    int sum, carry = 0;

    while(l1 || l2 || carry)
    {
        sum = carry;

        if(l1)
        {
            sum = sum + l1->val;
            l1 = l1->next;
        }

        if(l2)
        {
            sum = sum + l2->val;
            l2 = l2->next;
        }

        newnode = malloc(sizeof(SLL));

        newnode->val = sum % 10;
        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }

        carry = sum / 10;
    }

    return head;
}