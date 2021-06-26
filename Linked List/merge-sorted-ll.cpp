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
void insert(node *&head, int d)
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
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}

node* merge(node *&a,node *&b){
    // base case
    if(a==NULL)
    {
        return b;
    }
    if(b==NULL){
        return a;
    }
    // cout<<c->data;
    
    node *c;
    
    if(a->data <b->data)
    {
        c=a;
        c->next=merge(a->next,b); 
    }
    else {
        c=b;
        c->next=merge(a,b->next);
    }

    return c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        node *head = NULL;
        int n;
        cin >> n;
        while (n--)
        {
            int d;
            cin >> d;
            insert(head, d);
        }
        node *newHead = NULL;
        cin >> n;
        while (n--)
        {
            int d;
            cin >> d;
            insert(newHead, d);
        }
        node *c=merge(head,newHead);
        print(c);
    }
    return 0;
}