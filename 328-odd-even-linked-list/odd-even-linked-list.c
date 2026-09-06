/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode SLL;
struct ListNode* oddEvenList(struct ListNode* head)
{
    SLL *p=head;
    int c=0;
    while(p)
    {
        c++;
        p=p->next;
    }

    if(c<=2)
    return head;

    int *arr=(int*)malloc(sizeof(int)*c);
    int index=0;

    p=head;
    SLL *q=head->next;
    c=0;

    while(p)
    {
        arr[index++]=p->val;
        if(p->next==0)
        break;
        p=p->next->next;
    }

    while(q)
    {
        arr[index++]=q->val;
        if(q->next==0)
        break;
        q=q->next->next;
    }

    p=head;
    index=0;

    while(p)
    {
        p->val=arr[index++];
        p=p->next;
    }

    free(arr);

    return head;


}















