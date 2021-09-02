#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;

    node(int d)
    {
        data = d;
        right = NULL;
        left = NULL;
    }
};

node *buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    node*root= new node (d);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}

void print(node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

int main()
{
    node *root = buildTree();
    print(root);
}