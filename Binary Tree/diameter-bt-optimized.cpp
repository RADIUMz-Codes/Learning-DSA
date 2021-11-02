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

int findHeight(node *root, int &maxi){
    if(root == NULL) return 0;

    int lh = findHeight(root->left, maxi);
    int rh = findHeight(root->right, maxi);

    maxi = max(maxi,lh+rh);

    return 1+ max(rh,lh);
}

int main()
{
    node *root = buildTree();
    BFS(root);
    int maxi =0;
    int h = findHeight(root, maxi);
    cout<<"Dimeter =  "<< maxi;
    
}