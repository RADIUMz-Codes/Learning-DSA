#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

// very very important

void insertHead(Node *&head, int d)
{
    if (head == NULL)
    {
        head = new Node(d);// in 1st we just add data ,address remains NULL,head stores the address of this node
        return;
    }
    Node *n = new Node(d);//new Node is created and initialized with data, address=NULL
    n->next = head;// updating address in next with the address of previous head
    head = n;// updating the address stored in head with the address of current node
}

void print(Node *head)
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
    Node *head = NULL;
    insertHead(head, 3);
    insertHead(head, 1);
    insertHead(head, 9);
    insertHead(head, 5);
    print(head);
    return 0;
}