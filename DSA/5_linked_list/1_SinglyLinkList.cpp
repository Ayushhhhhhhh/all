#include <iostream>
using namespace std;
struct Node
{
    /* data */
    int data;
    Node *Next;
} *head = NULL;
struct Node *tmp;

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

void deleteHead()
{
    head = head->Next;
}
void deleteTail()
{
    while (tmp->Next->Next != NULL)
    {
        tmp = tmp->Next;
    }
    tmp->Next = NULL;
}
void deleteAt(int index)
{
    int i = 2;
    tmp = head;
    while (i < index)
    {
        tmp = tmp->Next;
        i++;
    }
    tmp->Next = tmp->Next->Next;
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
int main()
{
    insert(3);
    insert(6);
    insert(2);
    insert(3);
    deleteHead();
    display();

    insert(30);
    insert(4, 3);
    deleteTail();
    insert(7, 1);
    deleteAt(3);
    display();
    return 0;
}