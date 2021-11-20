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
    newnode->left = newnode->right = NULL;
    return newnode;
}
struct Node *insert(struct Node *root, int data)
{
    if (root == NULL)
    {
        root = getnewnode(data);
        printf("%d\n", root->data);
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
int max(int a, int b)
{
    return a > b ? a : b;
}
int findHeight(struct Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    else
    {
        return max(findHeight(root->left), findHeight(root->right) + 1);
    }
}
int main()
{
    struct Node *root = NULL;
    root = insert(root, 45);
    root = insert(root, 36);
    root = insert(root, 23);
    root = insert(root, 15);
    root = insert(root, 54);
    root = insert(root, 22);
    root = insert(root, 90);
    root = insert(root, 66);
    root = insert(root, 213);
    printf("Height of the Tree is : %d\n", findHeight(root));
    return 0;
}