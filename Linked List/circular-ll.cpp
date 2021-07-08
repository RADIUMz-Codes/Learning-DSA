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


void insertHead(node *&head,int d)
{
    node*n=new node(d);
    node *temp=head;

    if(head==NULL)
    {
        head=n;
        head->next=head;

        return;
    }

    while( temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}


void print(node *head)
{
    node *temp= head;
    if(head!=NULL)
    {
        while(temp->next !=head)
        {
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<temp->data;
    }

}

int main()
{
    node*head=NULL;
    insertHead(head,5);
    insertHead(head,15);
    insertHead(head,6);
    insertHead(head,2);
    insertHead(head,4);
    insertHead(head,3);
    insertHead(head,7);
    insertHead(head,9);
    print(head);

}