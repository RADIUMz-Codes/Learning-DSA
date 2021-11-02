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

void leftView(node *root, vector<int> &lView, int l)
{
    if (root == NULL)
        return;

    if (l == lView.size())
        lView.push_back(root->data);

    leftView(root->left, lView, l + 1);
    leftView(root->right, lView, l + 1);
}

void rightView(node*root, vector<int> &rView, int l){
    if(root == NULL) return;

    if(l == rView.size()) rView.push_back(root->data);

    rightView(root->right, rView, l+1);
    rightView(root->left, rView, l+1);
}

int main()
{
    node *root = buildTree();
    BFS(root);
    cout << endl;
    vector<int> lView;
    leftView(root, lView, 0);
    for (auto x : lView)
        cout << x << endl;
    
    cout<<endl;
    vector<int> rView;
    rightView(root, rView,0);
    for(auto x: rView) cout<<x<<endl;
}