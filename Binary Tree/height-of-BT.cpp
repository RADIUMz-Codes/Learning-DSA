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

int findHeight(node *root){
    if(root==NULL){
        return 0;
    }
    return max(findHeight(root->left),findHeight(root->right))+1;
}

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

int main()
{
    node* root= buildTree();
    cout<<findHeight(root);
    return 0;
    
}