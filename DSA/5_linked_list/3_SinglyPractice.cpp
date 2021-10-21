#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *Next;
} int main()
{
    struct Node *head = NULL, *node;
    node = new struct Node;
    node->Next = NULL;
    cout << "Enter the data of node:";
    cin >> node->data;

    if (head == NULL)
    {
        head = node;
    }

    cout<<
    return 0;
}