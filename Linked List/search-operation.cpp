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

void insertAtTail(node *&head,int d)
{
    node*n= new node(d); 
    if(head== NULL)
    {
        head = n;
        return;
    }

    node*temp= head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}


//search takes O(n) time in worst case
int search(node *head,int key){
    if(head==NULL)
    {
        return -1;
    }
    int p=1;
    while(head->next!= NULL)
    {
        if(head->data==key )
        {
            return p;
        }
        p++;head= head->next;
    }
}


bool searchRecursive(node *head,int key)
{
    if(head->data==key)
    return true;

    if(head->next == NULL)
    return false;

    searchRecursive(head->next,key);

}


int main()
{
    node*head=NULL;
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 1);
    insertAtTail(head, 2);

    cout<<search(head,1)<<endl;
    cout<<searchRecursive(head,1)<<endl;
    cout <<searchRecursive(head,20);

    return 0;
}