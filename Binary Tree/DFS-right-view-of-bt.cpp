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

void rightView(node* root,int level){
    static int maxLevel=-1;
    if(root== NULL){
        return;
    }
    if(maxLevel<level){
        maxLevel++;
        cout<<root->data<<endl;
    }
    rightView(root->right,level+1);
    rightView(root->left,level+1);

}

int main()
{
    node *root = buildTree();
    rightView(root,0);
}