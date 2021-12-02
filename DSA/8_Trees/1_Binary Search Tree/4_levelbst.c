#include <stdio.h>
#include <stdlib.h>
#define max 20
int choice, rear = -1, x, i, front = -1;

void dequeue(void);
struct bstNode
{
	int data;
	struct bstNode *left;
	struct bstNode *right;
};
void enqueue(struct bstNode *);
struct bstNode *queue[100];

void LevelOrder(struct bstNode *root)
{
	if (!root)
	{
		printf("EMPTY");
		return;
	}
	else
	{
		enqueue(root);
		while (front >= 0)
		{
			struct bstNode *current = queue[front];
			printf("%d\t", current->data);
			if (current->left)
			{
				enqueue(current->left);
			}
			if (current->right)
			{
				enqueue(current->right);
			}
			dequeue();
			printf("\n");
		}
	}
}
struct bstNode *getnewnode(int data)
{
	struct bstNode *newnode = (struct bstNode *)malloc(sizeof(struct bstNode));
	newnode->data = data;
	newnode->left = newnode->right = NULL;
	return newnode;
}
struct bstNode *insert(struct bstNode *root, int data)
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
int main()
{

	struct bstNode *root = NULL;
	root = insert(root, 45);
	root = insert(root, 36);
	root = insert(root, 23);
	root = insert(root, 36);
	root = insert(root, 23);
	root = insert(root, 15);
	root = insert(root, 54);
	root = insert(root, 63);
	root = insert(root, 90);
	root = insert(root, 21);
	LevelOrder(root);
	return 0;
}
void enqueue(struct bstNode *x)
{
	if (front == -1 && rear == -1)
	{
		front = rear = 0;
		queue[rear] = x;
	}
	else
	{
		rear++;
		queue[rear] = x;
	}
}
void dequeue()
{
	if (front == rear)
	{
		front = rear = -1;
	}
	else
	{
		front++;
	}
}
