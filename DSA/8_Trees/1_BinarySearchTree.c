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
        printf("\n%d\n", root->data);
    }
    else if (root->data <= data)dfx
    {
        root->right = insert(root->right, data);
    }
    else
    {
        root->left = insert(root->left, data);
    }
    return root;
}
int main()
{
    struct Node *root = NULL;
    root = insert(root, 45);
    root = insert(root, 36);
    root = insert(root, 23);

    printf("%d", root->left->data);
    return 0;
}