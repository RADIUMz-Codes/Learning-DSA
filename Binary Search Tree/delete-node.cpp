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

node *insertInBST(int d, node *root)
{
    node *n = new node(d);
    if (root == NULL)
    {
        return n;
    }
    else
    {
        if (d <= root->data)
        {
            root->left = insertInBST(d, root->left);
        }
        else
        {
            root->right = insertInBST(d, root->right);
        }
    }
    return root;
}

node *buildTree()
{
    int d;
    cin >> d;
    node *root = NULL;
    while (d != -1)
    {
        root = insertInBST(d, root);
        cin >> d;
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

node *deleteNode(node* root,int d){
    if(root == NULL){
        return NULL;
    }
    else if (d<root->data)
    {
        /* code */
        root->left = deleteNode(root->left,d);
        return root;
        
    }

    else if (d == root->data)
    {
        // 0 children or leaf node          
        if(root->right ==NULL and root->right== NULL){
            return NULL;
        }

        // 1 child
        if(root->right!=NULL and root->left == NULL){
            node *t = root->right;
            delete root;
            return t;
        }

        if(root->left!= NULL and root->right == NULL){
            node* t= root->left;
            delete  root;
            return t;
        }
        if(root->left !=NULL and root->right !=NULL){
            node * replacement = root->right;
            while(replacement->left !=NULL){
                replacement= replacement->left;
            }
            replacement ->left = root ->left;
            delete root;
            return replacement;
        }
    }
    else
    {
        root->right = deleteNode(root->right,d);
        return root;
    }
    
    
}

int main()
{
    node *root = buildTree();
    BFS(root);
    node* newRoot = deleteNode(root, 5);
    cout<<endl;
    BFS(newRoot);    
}