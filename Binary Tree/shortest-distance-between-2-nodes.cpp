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

node* lca(node *root,int a, int b){

    if(root == NULL) return root;

    if(root->data == a or root->data == b) return root;

    node* left_lca = lca(root->left, a, b);
    node* right_lca = lca(root->right, a, b);

    if(left_lca and right_lca) return root;

    return (left != NULL)? left_lca: right_lca;
}

int level(node* root, int d){
    if(root->data ==d ){
        return 0;
    }
    
}

int main()
{
    node *root = buildTree();   
}