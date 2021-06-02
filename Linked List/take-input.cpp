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
        head = new node(d); 
        return;
    }
    node *n = new node(d);
    n->next = head;        
    head = n;              
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

node* take_input()
{
    node *head =NULL;
    int d ;
    cin>>d;
    while(d!=-1)
    {
        insertHead(head,d);
        cin>>d;
    }
    return(head);

}

int main()
{
    node*head = take_input();
    print(head);
    return 0;
}