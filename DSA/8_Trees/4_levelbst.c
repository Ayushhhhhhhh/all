#include <stdio.h>
#include <stdlib.h>
#define max 20
int x, i;
struct Node
{
	int Data;
	struct Node *Next;
} *front = NULL, *rear = NULL, *tmp, *newnode;
struct bstNode
{
	int data;
	struct Node *left;
	struct Node *right;
};
void enqueue(int);
void dequeue(void);
void display(void);
void LevelOrder(struct bstNode root){
	if(root==NULL){
		return;
	}
	else{
		tmp = front;
		while(tmp){
		enqueue(root);
		
		}
	}
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
int main()
{

	struct bstNode *root = NULL;
	root = insert(root, 45);
	root = insert(root, 36);
	root = insert(root, 23);
	return 0;
}
void enqueue(int x)
{
	tmp = (struct Node *)malloc(sizeof(struct Node));
	if (!tmp)
	{
		printf("\n\tQueue over flow");
	}

	else if (front == NULL && rear == NULL)
	{
		newnode = tmp;
		newnode->Next = NULL;
		newnode->Data = x;
		front = rear = newnode;
	}
	else
	{
		newnode = tmp;
		newnode->Next = NULL;
		printf(" Enter a value to be pushed:");
		scanf("%d", &x);
		newnode->Data = x;
		rear->Next = newnode;
		rear = newnode;
	}
}
void dequeue()
{
	if (front == NULL)
	{
		printf("\n\t queue is under flow");
	}
	else if (front == rear)
	{
		front = rear = NULL;
	}
	else
	{
		printf("\n\t The popped elements is %d", front->Data);
		front = front->Next;
	}
}
void display()
{
	if (front)
	{
		printf("\n The elements in QUEUE \n");
		tmp = front;
		while (tmp)
		{
			printf("%d->", tmp->Data);
			tmp = tmp->Next;
		}
		printf("NULL");
		printf("\n Press Next Choice");
	}
	else
	{
		printf("\n The QUEUE is empty");
	}
}