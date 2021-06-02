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
    cout<<endl;

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

ostream &operator<<(ostream &os,node*head)
{
    print(head);
    return os;
}

istream &operator>>(istream &is,node*&head)
{
    head=take_input();
    return is;
}

// reverse

void Reverse(node*&head)
{
    node*temp=NULL;
    node*c=head;
    node*n;
    
    while(c!=NULL)
    {
        // save the next node
        n=c->next;
        // 
        c->next=temp;
        temp=c;
        c=n;

    }  
    head=temp;
    
}





int main()
{
    node*head;
    cin>>head;
    Reverse(head);
    cout<<head;
    return 0;
}

