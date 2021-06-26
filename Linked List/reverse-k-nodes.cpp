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
    
    
}

node *reversek(node *head, int k)
{
    node *prev;
    node *nxt;
    node *curr;
    prev = NULL;
    curr = head;
    int t = k;
    while (t-- and curr != NULL)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    if (nxt != NULL)
    {
        head->next = reversek(nxt, k);
    }
    return prev;
}

int main()
{
    node *head=NULL;
    int n,k;
    cin>>n>>k;
    while(n--)
    {
        int d;
        cin>>d;
        insert(head,d);
    }
    node *newHead = reversek(head, k);
    print(newHead);

    return 0;
}