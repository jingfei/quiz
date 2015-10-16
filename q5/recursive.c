/* Implement! */
#include <stdio.h>
#include "q5.h"

ListNode *detectCycle(ListNode *head)
{
    if(head->isTrace) return head;
    head->isTrace=1;
    if(head->pNext == NULL) return NULL;
    return detectCycle(head->pNext);
}

int main()
{
    ListNode *head = buildTestcase();
    printf("%s\n", detectCycle(head) ? "yes" : "no");
    return 0;
}

