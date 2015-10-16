#ifndef Q3_H
#define Q3_H

typedef struct __TREE_NODE {
    int value;
    struct __TREE_NODE *pL, *pR;
} TreeNode;
void flatten(TreeNode *root);
TreeNode* buildTestcase()
{
    TreeNode *root = (TreeNode *) malloc(sizeof(TreeNode));
    root->value = 1;
    TreeNode *n2 = (TreeNode *) malloc(sizeof(TreeNode));
    TreeNode *n3 = (TreeNode *) malloc(sizeof(TreeNode));
    TreeNode *n4 = (TreeNode *) malloc(sizeof(TreeNode));
    TreeNode *n5 = (TreeNode *) malloc(sizeof(TreeNode));
    TreeNode *n6 = (TreeNode *) malloc(sizeof(TreeNode));
    n2->value = 2;
    n3->value = 3;
    n4->value = 4;
    n5->value = 5;
    n6->value = 6;
    root->pL = n2;
    root->pR = n5;
    n2->pL = n3;
    n2->pR = n4;
    n5->pR = n6;
    n3->pL = n3->pR = n4->pL = n4->pR = n5->pL = n6->pL = n6->pR = NULL;
    return root;
}

#endif
