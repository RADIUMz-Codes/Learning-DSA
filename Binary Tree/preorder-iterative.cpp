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
node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void preorder(node* root){
    stack<node*>s;
    if(root==NULL){
        return;
    }
    s.push(root);
    while(!s.empty()){
        node* tp= s.top();
        s.pop();
        cout<<tp->data<<" ";
        if(tp->right){
            s.push(tp->right);
        }
        if(tp->left){
            s.push(tp->left);
        }
    }
}

int main()
{
    node *root = buildTree();
    // BFS(root);
    preorder(root);
    
}