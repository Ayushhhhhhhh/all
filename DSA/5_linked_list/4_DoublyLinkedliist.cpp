#include <iostream>
using namespace std;
struct Node
{
    /* data */
    int data;
    Node *Next;
    Node *Prev;
} *head = NULL;
struct Node *tmp, *tail;

void insert(int item)
{

    struct Node *node;
    node = new Node;
    node->data = item;
    node->Next = NULL;
    node->Prev = NULL;
    if (head == NULL)
    {
        head = node;
        tail = node;
    }
    else
    {
        tail->Next = node;
        node->Prev = tail;
        tail = node;
    }
}
void insertbeg(int item)
{

    struct Node *node;
    node = new Node;
    node->data = item;
    node->Next = NULL;
    node->Prev = NULL;
    if (head == NULL)
    {
        head = node;
        tail = node;
    }
    else
    {
        node->Next = head;
        head->Prev = node;
        head = node;
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
    node->Prev = tmp;
    node->Next = tmp->Next;
    tmp->Next = node;
    node->Next->Prev = node;
}

void deleteHead()
{
    tmp = head;
    head = head->Next;
    head->Prev = NULL;
    free(tmp);
}
void deleteTail()
{
    tmp = tail;
    tail->Prev->Next = NULL;
    free(tmp);
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
    insert(1);
    insert(6);
    insert(2);
    insert(3);
    // deleteHead();
    display();

    // insert(30);
    insert(4, 3);
    // deleteTail();
    //  insert(7, 1);
    deleteAt(0);
    display();
    return 0;
}