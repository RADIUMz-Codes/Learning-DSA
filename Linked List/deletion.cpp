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
//====function================================================
void insertAtTail(node *&head, int d);
void print(node *head);
void deleteData(node *&head, int d);
void deleteHead(node *&head);
void deleteTail(node *&head);
//====function================================================

int main()
{
    node *head = NULL;
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 69);
    deleteHead(head);
    deleteTail(head);
    print(head);

    return 0;
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

// Delete head
void deleteHead(node *&head)
{
    if (head == NULL)
        return;

    node *n = head->next;
    delete head;
    head = n;
}

// Delete Tail
void deleteTail(node *&head)
{
    if (head == NULL)
        return;

    node *n;
    node*temp = head;
    while (temp->next != NULL)
    {
        n=temp;
        temp =temp->next;
    }
    delete temp;
    n->next =NULL;
}