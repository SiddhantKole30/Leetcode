/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode SLL;

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    SLL *p = list1;
    SLL *q = list2;

    SLL dummy;
    SLL *ret = &dummy;

    while(p && q)
    {
        if(p->val <= q->val)
        {
            ret->next = p;
            p = p->next;
        }
        else
        {
            ret->next = q;
            q = q->next;
        }

        ret = ret->next;
    }

    if(p)
        ret->next = p;
    else
        ret->next = q;

    return dummy.next;
}















