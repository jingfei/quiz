/* Implement! */
#include <stdio.h>
#include "q6.h"

ListNode *reverseBetween(ListNode *head, int m, int n)
{
    if(m==n) return head;

    int i=1, trans=0;
    ListNode *tmp1=NULL, *tmp2, *last, *next, *HEAD=head;
    for(; head!=NULL; ++i) {
        if(m-1==i) {
            tmp1=head;
            head=head->pNext;
        } else if(m==i) {
            tmp2=last=head;
            trans=1;
            head=head->pNext;
        } else if(n==i) {
            tmp2->pNext=head->pNext;
            if(tmp1) tmp1->pNext=head;
            else HEAD=head;
            head->pNext=last;
            break;
        } else if(trans) {
            next=head->pNext;
            head->pNext=last;
            last=head;
            head=next;
        } else head=head->pNext;
    }
    return HEAD;
}

int main()
{
    ListNode *head = buildTestcase();
    printList(reverseBetween(head,2,2));
    return 0;
}

