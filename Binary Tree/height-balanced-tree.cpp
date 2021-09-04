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

class Pair{
public:
    int height;
    bool flag;
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

Pair checkBalanced(node* root){
    Pair p;
    if(root==NULL){
        p.height=0;
        p.flag=true;
        return p;
    }
    Pair l= checkBalanced(root->left);
    Pair r= checkBalanced(root->right);
    int  diff= abs(l.height-r.height);
    if(diff<=1 and l.flag and r.flag){
        p.flag=true;
    }else{
        p.flag = false;
    }
    p.height=max(l.height,r.height)+1;
    return p;
}

int main()
{
    node *root = buildTree();
    Pair p= checkBalanced(root);
    if(p.flag){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
}