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

node* insertInBST(int d,node *root){
    node *n=new node(d);
    if(root==NULL){
        return n;
    }
    else{
        if(d<=root->data){
            root->left = insertInBST(d,root->left);
        }
        else{
            root->right = insertInBST(d,root->right);
        }
    }
    return root;
}



node *buildTree()
{
    int d;
    cin >> d;
    node * root=NULL;
    while(d!=-1){  
        root = insertInBST(d,root);
        cin>>d;
    }
    return root;
}

void BFS(node *root)
{
    queue<node *> Q;
    Q.push(root);
    Q.push(NULL);
    while (!Q.empty())
    {
        node *curr = Q.front();
        if (curr == NULL)
        {
            cout << endl;
            Q.pop();
            if (!Q.empty())
            {
                Q.push(NULL);
            }
        }
        else
        {
            cout << curr->data << " ";
            if (curr->left)
            {
                Q.push(curr->left);
            }
            if (curr->right)
            {
                Q.push(curr->right);
            }
            Q.pop();
        }
    }
}

void inorder(node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    node *root = buildTree();
    BFS(root);
    cout<<endl;
    inorder(root);
}

