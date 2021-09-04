#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
node* buildTree(int arr[],int s,int e)
{
    if(s>e){
        return NULL;
    }
    int mid = (s+e)/2;
    node* root= new node(arr[mid]);
    root->left= buildTree(arr,s,mid-1);
    root->right= buildTree(arr, mid+1,e);
    return root;
}
void BFS(node *root)
{
    queue<node *> Q;
    Q.push(root);
    Q.push(NULL);
    while (!Q.empty())
    {
        node *curr = Q.front();
        if (curr == NULL)
        {
            cout << endl;
            Q.pop();
            if (!Q.empty())
            {
                Q.push(NULL);
            }
        }
        else
        {
            cout << curr->data << " ";
            if (curr->left)
            {
                Q.push(curr->left);
            }
            if (curr->right)
            {
                Q.push(curr->right);
            }
            Q.pop();
        }
    }
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    node *root = buildTree(arr,0,6);
    BFS(root);
    
}