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
int height(struct Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    else
    {
        return max(height(root->left), height(root->right) + 1);
    }
}
struct Node *inpre(struct Node *root)
{
    struct Node *curr = root;
    while (curr && curr->right)
    {
        curr = curr->right;
    }
    return curr;
}
struct Node *insucc(struct Node *root)
{
    struct Node *curr = root;
    while (curr && curr->left)
    {
        curr = curr->left;
    }
    return curr;
}
struct Node *delete (struct Node *root, int data)
{

    if (root->data < data)
    {
        root->right = delete (root->right, data);
    }
    else if (root->data > data)
    {
        root->left = delete (root->left, data);
    }
    else
    {
        if (root->left == NULL)
        {
            struct Node *freeptr = root->right;
            free(root);
            return freeptr;
        }
        else if (root->right == NULL)
        {
            struct Node *freeptr = root->left;
            free(root);
            return freeptr;
        }
        else if (height(root->left) > height(root->right))
        {
            struct Node *tmp = inpre(root->left);
            root->data = tmp->data;
            root->left = delete (root->left, tmp->data);
        }
        else
        {
            struct Node *tmp = insucc(root->right);
            root->data = tmp->data;
            root->right = delete (root->right, tmp->data);
        }
        return root;
    }
}
void preOrder(struct Node *root)
{
    if (!root)
        return;
    printf("%d\t", root->data);
    preOrder(root->left);
    preOrder(root->right);
}
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
    printf("Before deleting 36 and 45:\n");
    preOrder(root);
    root = delete (root, 36);
    root = delete (root, 45);
    printf("\nAfter deleting 36 and 45:\n");
    preOrder(root);
    return 0;
}