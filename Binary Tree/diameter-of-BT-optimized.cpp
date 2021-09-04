/*
    Complexity = O(N);
    Using post order traversal or Bottom-Up approach we reduced the complexity to O(N)
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


class Pair{
public:
    int height;
    int diameter;    
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

Pair fastDiameter(node* root){
    Pair p;
    if(root== NULL){
        p.height=p.diameter=0;
        return p; 
    }
    Pair l= fastDiameter(root->left);
    Pair r= fastDiameter(root->right);
    p.height =max(l.height,r.height)+1;
    p.diameter= max(l.height+r.height,max(l.diameter,r.diameter));
    return p;
}


int main()
{
    node *root = buildTree();
    Pair p= fastDiameter(root);
    cout<<"Height = "<<p.height<<endl;
    cout<<"Diameter = "<<p.diameter<<endl;
}