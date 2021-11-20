#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *getnewnode(int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct Node *insert(struct Node *root, int data)
{
    if (root == NULL)
    {
        root = getnewnode(data);
        printf("\n%d\n", root->data);
    }
    else if (root->data <= data)
    {
        root->right = insert(root->right, data);
    }
    else
    {
        root->left = insert(root->left, data);
    }
    return root;
}
int findMax(struct Node *root)
{
    if (root == NULL)
    {
        printf("Tree is empty!\n");
        return -1;
    }
    else if (root->right == NULL)
    {
        return root->data;
    }
    else
    {
        return findMax(root->right);
    }
}
int findMin(struct Node *root)
{
    if (root == NULL)
    {
        printf("Tree is empty!\n");
        return -1;
    }
    else if (root->left == NULL)
    {
        return root->data;
    }
    else
    {
        return findMin(root->left);
    }
}
int main()
{
    struct Node *root = NULL;
    root = insert(root, 45);
    root = insert(root, 12);
    root = insert(root, 36);
    root = insert(root, 23);
    root = insert(root, 94);
    printf("Max element in the bst is : %d\n", findMax(root));
    printf("Min element in the bst is : %d\n", findMin(root));

    return 0;
}