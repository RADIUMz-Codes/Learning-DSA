/*
    Complexity = O(N^2)
    
    Here Top-Down Approach.
    Finding Height has a complexity of O(N);
    We find height at every node so over all complexity = O(N^2)
*/    
    

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

int findHeight(node *root){
    if(root==NULL){
        return 0;
    }
    return max(findHeight(root->left),findHeight(root->right))+1;
}

int diameterofBT(node* root){

    if(root==NULL){
        return 0;
    }

    int l=findHeight(root->left);
    int r=findHeight(root->right);

    int includingRoot= l+r; // if diameter include both left and right subtree

    int onlyLeft= diameterofBT(root->left);// if diameter only exists only in left subtree 

    int onlyRight= diameterofBT(root->right);// if diameter only exists only in right subtree 

    return max(includingRoot,max(onlyLeft,onlyRight));
}

int main()
{
    node *root = buildTree();
    cout<<"Diameter = "<<diameterofBT(root);
}