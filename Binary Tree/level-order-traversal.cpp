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

void printHeight(node *root,int h){
    if(root==NULL){
        return;
    }
    if(h==1){
        cout<<root->data<<" ";
        return;
    }
    printHeight(root->left,h-1);
    printHeight(root->right,h-1);
}


void levelOrderTraversal(node*root){
    int n =findHeight(root);
    for(int i=1;i<=n;i++){
        printHeight(root,i);
        cout<<endl;
    }
}


int main()
{
    node* root= buildTree();
    levelOrderTraversal(root);
    return 0;
    
}