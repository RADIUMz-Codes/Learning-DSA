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

void kappend(node *&head, int k)
{

    node *s, *f;
    s = f = head;
    while (k--)
    {
        f = f->next;
    }
    while (f->next != NULL)
    {
        f = f->next;
        s = s->next;
    }

    f->next = head;
    head = s->next;
    s->next = NULL;
}



void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    node *head = NULL;
    int n, k;
    cin >> n;
    int t=n;
    while (n--)
    {
        int d;
        cin >> d;
        insert(head, d);
    }
    cin >> k;
    
    kappend(head, k%t);
    print(head);
    return 0;
}