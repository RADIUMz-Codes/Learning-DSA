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
int replacementSum(node* &root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL & root->right== NULL){
        return root->data;
    }
    int l= replacementSum(root->left);
    int r= replacementSum(root->right);
    int temp =root->data;
    root->data=l+r;
    return l+r+temp;
}


int main()
{
    node *root = buildTree();
    BFS(root);
    int sum =replacementSum(root);
    cout<<endl;
    BFS(root);
    
}