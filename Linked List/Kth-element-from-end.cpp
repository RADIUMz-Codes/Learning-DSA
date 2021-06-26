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

void input(node *&head)
{
    int d;
    cin>>d;
    while(d!=-1){
        insert(head,d);
        cin>>d;
    }
}

node* kthElement(node *&head, int k)
{
    if(head == NULL or head->next == NULL)
    {
        return head;
    }
    node *s,*f;
    s=f= head;
    while(k--){
        f=f->next;
    }
    while(f->next != NULL)
    {
        s=s->next;
        f=f->next;
    }
    return s->next;
}


int main()
{
    node*head=NULL;
    input(head);
    int k;
    cin>>k;
    cout<<kthElement(head,k)->data<<endl;
    
    return 0;
}