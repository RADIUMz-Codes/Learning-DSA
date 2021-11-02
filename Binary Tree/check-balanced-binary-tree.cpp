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

int checkBalance(node *root){
    if(root== NULL) return 0;

    int lh = checkBalance(root->left);
    int rh = checkBalance(root->right);

    if(lh == -1 or rh == -1) return -1;

    if(abs(lh-rh) >1) return -1;

    return 1+max(lh,rh);
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
int main()
{
    node *root = buildTree();
    BFS(root);
    cout<<endl;
    if(checkBalance(root) != -1) cout<<"balanced";
    else cout<< "unbalanced";
    
}