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

int maxSumPath (node *root,int &maxi){
    if(root == NULL) return 0;

    int ls =max(0, maxSumPath(root->left, maxi));
    int rs = max(0,maxSumPath(root->right, maxi));

    maxi = max(maxi, ls+rs+root->data);

    return root->data + max(ls,rs);
}

int main()
{
    node *root = buildTree();
    BFS(root);
    int maxi =0;
    int mx = maxSumPath(root,maxi);
    cout<<"Max Path Sum = "<< maxi<<" "<< mx;
    
}