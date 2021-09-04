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

int countNodes(node* root){
    if(root==NULL){
        return 0;
    }
    int l=countNodes(root->left);
    int r=countNodes(root->right);
    return l+r+1;
}

int main()
{
    node *root = buildTree();
    cout<<"Nodes = "<<countNodes(root);
}