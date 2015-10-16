#ifndef Q6_H
#define Q6_H

#include <stdlib.h>

typedef struct __LIST_NODE {
    int value;
    struct __LIST_NODE *pNext;
} ListNode;

ListNode* reverseBetween(ListNode *head, int m, int n);
ListNode* buildTestcase()
{
    ListNode *head = (ListNode *) malloc(sizeof(ListNode));
    ListNode *n2 = (ListNode *) malloc(sizeof(ListNode));
    ListNode *n3 = (ListNode *) malloc(sizeof(ListNode));
    ListNode *n4 = (ListNode *) malloc(sizeof(ListNode));
    ListNode *n5 = (ListNode *) malloc(sizeof(ListNode));
    head->pNext = n2;
    n2->pNext = n3;
    n3->pNext = n4;
    n4->pNext = n5;
    n5->pNext = NULL;
    head->value = 1;
    n2->value = 2;
    n3->value = 3;
    n4->value = 4;
    n5->value = 5;
    return head;
}

void printList(ListNode *tmp)
{
    if(tmp==NULL) {
        printf("\b\b->NULL\n");
        return;
    }
    printf("%d->",tmp->value);
    printList(tmp->pNext);
}

#endif
