#include <iostream>
using namespace std;
class list
{
public:
    struct Node
    {
    public:
        int data;
        Node *Next;
    } *head = NULL, *tail, *tmp;

    void insert(int item)
    {

        struct Node *node;
        node = new Node;
        node->data = item;
        node->Next = NULL;
        if (head == NULL)
        {
            head = node;
            tail = node;
        }
        else
        {

            tail->Next = node;
            tail = node;
        }
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
    void mergeList(list l1, list l2, list merged)
    {
        while (l1.tmp != NULL && l2.tmp != NULL)
        {
            l1.tmp = l1.head;
            l2.tmp = l2.head;
            merged.tmp = merged.head;
            if (l1.tmp == NULL)
            {
                while (l2.tmp != NULL)
                {
                    merged.tmp->data = l2.tmp->data;
                    merged.tmp = merged.tmp->Next;
                    l2.tmp = l2.tmp->Next;
                }
            }
            else if (l2.tmp == NULL)
            {
                while (l1.tmp != NULL)
                    merged.tmp->data = l1.tmp->data;
                merged.tmp = merged.tmp->Next;
                l1.tmp = l1.tmp->Next;
            }
            else if (l1.tmp->data < l2.tmp->data)
            {
                merged.tmp->data = l1.tmp->data;
                merged.tmp = merged.tmp->Next;
                l1.tmp = l1.tmp->Next;
            }
            else if (l1.tmp->data > l2.tmp->data)
            {
                merged.tmp->data = l2.tmp->data;
                merged.tmp = merged.tmp->Next;
                l2.tmp = l2.tmp->Next;
            }
            else if (l1.tmp->data == l2.tmp->data)
            {
                merged.tmp->data = l1.tmp->data;
                merged.tmp = merged.tmp->Next;
                l1.tmp = l1.tmp->Next;
                merged.tmp->data = l2.tmp->data;
                merged.tmp = merged.tmp->Next;
                l2.tmp = l2.tmp->Next;
            }
        }
    }
};

int main()
{
    list l1, l2, merged;
    l1.insert(3);
    l1.insert(24);
    l1.insert(87);
    l2.insert(6);
    l2.insert(34);
    l2.insert(39);
    merged.mergeList(l1, l2, merged);
    merged.display();
    // return 0;
}