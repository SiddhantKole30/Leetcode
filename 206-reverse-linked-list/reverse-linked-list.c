/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode SLL;
struct ListNode* reverseList(struct ListNode* head)
{
    if(head==0 || head->next==0)
    return head;

    SLL *p=head;
    int c=0;
    while(p)
    {
        c++;
        p=p->next;
    }

    int arr[c];
    int index=0;

    p=head;

    while(p)
    {
        arr[index++]=p->val;
        p=p->next;
    }

    int i,j,t;

    for(i=0,j=c-1;i<j;i++,j--)
    {
        t = arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }

    p=head;
    index=0;

    while(p)
    {
        p->val=arr[index++];
        p=p->next;
    }

    return head;
}