#ifndef Q5_H
#define Q5_H

#include <stdlib.h>

typedef struct __LIST_NODE {
    int isTrace;
    struct __LIST_NODE *pNext;
} ListNode;
ListNode* detectCycle(ListNode *head);
ListNode* buildTestcase()
{
    ListNode *head = (ListNode *) malloc(sizeof(ListNode));
    ListNode *n2 = (ListNode *) malloc(sizeof(ListNode));
    ListNode *n3 = (ListNode *) malloc(sizeof(ListNode));
    ListNode *n4 = (ListNode *) malloc(sizeof(ListNode));
    ListNode *n5 = (ListNode *) malloc(sizeof(ListNode));
    ListNode *n6 = (ListNode *) malloc(sizeof(ListNode));
    head->isTrace = n2->isTrace = n3->isTrace = n4->isTrace = n5->isTrace = n6->isTrace = 0;
    head->pNext = n6->pNext = n2;
    n2->pNext = n3;
    n3->pNext = n4;
    n4->pNext = n5;
    n5->pNext = n6;
    return head;
}

#endif
