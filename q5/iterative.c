/* Implement! */
#include <stdio.h>
#include "q5.h"

ListNode *detectCycle(ListNode *head)
{
    for(; head!=NULL; head = head->pNext) {
        if(head->isTrace) return head;
        else head->isTrace = 1;
    }
    return NULL;
}

int main()
{
    ListNode *head = buildTestcase();
    printf("%s\n", detectCycle(head) ? "yes" : "no");
    return 0;
}

