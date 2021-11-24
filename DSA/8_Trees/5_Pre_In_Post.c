#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *getnewnode(int);
struct Node *insert(struct Node *, int);
// data->left->right
void preOrder(struct Node *);
// left->data->right
void inOrder(struct Node *);
// left->right->data
void postOrder(struct Node *);

int main()
{
    struct Node *root = NULL;
    root = insert(root, 45);
    root = insert(root, 36);
    root = insert(root, 23);
    root = insert(root, 15);
    root = insert(root, 54);
    root = insert(root, 63);
    root = insert(root, 90);
    root = insert(root, 21);
    printf("\nPre Order\n");
    preOrder(root);
    printf("\nIn Order\n");
    inOrder(root);
    printf("\npost Order\n");
    postOrder(root);
    return 0;
}
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
        printf("%d\t", root->data);
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

void preOrder(struct Node *root)
{
    if (!root)
        return;
    printf("%d\t", root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(struct Node *root)
{
    if (!root)
        return;
    inOrder(root->left);
    printf("%d\t", root->data);
    inOrder(root->right);
}
void postOrder(struct Node *root)
{
    if (!root)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d\t", root->data);
}