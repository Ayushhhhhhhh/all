#include <iostream>
using namespace std;
struct Node
{
    /* data */
    int data;
    struct Node *Next;
} *head = NULL;
struct Node *tmp;

void inserthead(int item)
{

    struct Node *node;
    node = new Node;
    node->data = item;
    node->Next = head;
    head = node;
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
    inserthead(3);
    inserthead(5);

    display();
    return 0;
}