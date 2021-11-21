#include <iostream>
using namespace std;
class Node
{
public: /* data */
    int data;
    Node *Next;
} *head = NULL;
struct Node *tmp = head;

void swap(int a, int b)
{
    if (a == b)
        return;
    else
    {
        Node *anode = head, *bnode = head, *prevA = NULL, *prevB = NULL;
        while (anode && anode->data != a)
        {
            prevA = anode;
            anode = anode->Next;
        }
        while (bnode && bnode->data != b)
        {
            prevB = bnode;
            bnode = bnode->Next;
        }
        if (bnode == NULL || anode == NULL)
        {
            cout << "Element Not present!\n";
            return;
        }
        if (prevA != NULL)
        {
            prevA->Next = bnode;
        }
        else
        {
            head = bnode;
        }
        if (prevB != NULL)
        {
            prevB->Next = anode;
        }
        else
        {
            head = anode;
        }
        Node *swaP;
        swaP = anode->Next;
        anode->Next = bnode->Next;
        bnode->Next = swaP;
    }
}
void insert(int item)
{

    Node *node;
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
    insert(30);
    insert(4, 3);
    cout << "List before swap: \n";
    display();
    int a, b;
    cout << "Enter data of node you want to swap :\n";
    cin >> a >> b;
    swap(a, b);
    cout << "List after swap:\n";
    display();

    return 0;
}