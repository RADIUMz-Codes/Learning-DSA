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

// very very important

void insertHead(node *&head, int d)
{
    if (head == NULL)
    {
        head = new node(d); // in 1st we just add data ,address remains NULL,head stores the address of this node
        return;
    }
    node *n = new node(d); //new node is created and initialized with data, address=NULL
    n->next = head;        // updating address in next with the address of previous head
    head = n;              // updating the address stored in head with the address of current node
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
    insertHead(head, 3);
    insertHead(head, 1);
    insertHead(head, 9);
    insertHead(head, 5);
    print(head);
    return 0;
}