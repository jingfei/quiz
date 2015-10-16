/* Implement! */
#include <stdio.h>
#include "q3.h"

void flatten(TreeNode *root)
{
    printf("%d - ", root->value);
    if(root->pL) flatten(root->pL);
    if(root->pR) flatten(root->pR);
}

int main()
{
    TreeNode *testcase = buildTestcase();
    flatten(testcase);
    printf("\b\b  \n");
    return 0;
}
