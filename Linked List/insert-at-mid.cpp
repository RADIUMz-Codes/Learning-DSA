#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertMid(node *&head, int d, int pos)
{
    node *n = new node(d);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;

    while (--pos)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}

void insertAtTail(node *&head, int d)
{
    node *n = new node(d);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data;
        cout << "->";
        head = head->next;
    }
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 1);
    insertAtTail(head, 2);

    insertMid(head, 69, 4);
    print(head);
    return 0;
}