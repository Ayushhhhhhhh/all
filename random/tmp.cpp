#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;
struct node *insertbst(struct node *temp, int val)
{
    if (temp == NULL)
    {
        temp = new struct node;
        temp->data = val;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    if (val < temp->data)
    {
        temp->left = insertbst(temp->left, val);
    }
    else if (val > temp->data)
    {
        temp->right = insertbst(temp->right, val);
    }
    return temp;
}
void inorder(struct node *temp)
{
    if (temp == NULL)
    {
        return;
    }
    inorder(temp->left);
    cout << temp->data << "-->";
    inorder(temp->right);
    //	return temp;
}
int main()
{
    root = insertbst(root, 25);
    insertbst(root, 10);
    // cout << root->left->data;
    insertbst(root, 30);
    insertbst(root, 20);
    insertbst(root, 40);
    insertbst(root, 69);
    insertbst(root, 5);
    inorder(root);
    return 0;
}