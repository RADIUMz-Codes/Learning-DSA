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

int main()
{
    node*head;
    node*head2;
    cin>>head;
    cin>>head2;
    cout<<head;
    cout<<head2;
    return 0;
}
// https://trainings.internshala.com/?referral=ISRP15238122&utm_source=ISRP_share_link&utm_medium=ISRP15238122&utm_campaign=TRAINING
// ISRP15238122 