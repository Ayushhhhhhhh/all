#include <iostream>
using namespace std;
struct Node
{
    /* data */
    int data;
    Node *Next;
} *head = NULL;
struct Node *tmp;

void reverse()
{
    struct Node *prevnode, *currentnode, *nextnode;
    prevnode = 0;
    currentnode = nextnode = head;
    while (nextnode != NULL)
    {
        nextnode = nextnode->Next;
        currentnode->Next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
        /* code */
    }
    head = prevnode;
}

void display()
{
    tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << "->";
        tmp = tmp->Next;
    }
    cout << "NULL" << endl;
}
void insert(int item)
{

    struct Node *node;
    node = new Node;
    node->data = item;
    node->Next = NULL;
    if (head == NULL)
    {
        head = node;
        tmp = node;
    }
    else
    {
        tmp = head;
        while (tmp->Next != NULL)
        {
            tmp = tmp->Next;
        }
        tmp->Next = node;
        tmp = node;
    }
}

void insert(int item, int index)
{
    int i = 1;
    tmp = head;
    while (i < index)
    {
        tmp = tmp->Next;
        i++;
    }
    struct Node *node;
    node = new Node;
    node->data = item;
    node->Next = tmp->Next;
    tmp->Next = node;
}

int main()
{
    insert(3);
    insert(6);
    insert(2);
    insert(3);

    insert(30);
    insert(4, 3);
    insert(7, 1);
    display();

    reverse();
    display();
    return 0;
}