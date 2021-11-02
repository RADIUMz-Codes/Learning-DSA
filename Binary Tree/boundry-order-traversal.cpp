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

bool isLeaf(node *root)
{
    return root->right == NULL && root->left == NULL;
}

void addLeft(node *root, vector<int> &ans)
{
    node *curr = root->left;

    while (curr)
    {
        if (!isLeaf(curr))
            ans.push_back(curr->data);

        if (curr->left)
            curr = curr->left;
        else
            curr = curr->right;
    }
}

void addLeaves(node *root, vector<int> &ans)
{
    if (isLeaf(root))
    {
        ans.push_back(root->data);
        return;
    }
    if (root->left)
        addLeaves(root->left, ans);
    if (root->right)
        addLeaves(root->right, ans);
}

void addRight(node *root,vector<int>&ans){
    node *curr = root->right;
    stack<int> s;
    while(curr){
        if(!isLeaf(curr)) s.push(curr->data);

        if(curr->right) curr = curr->right;
        else curr = curr->left; 
    }

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
}

vector<int> boundryOrderTraversal(node *root)
{
    vector<int> ans;
    if (!root)
        return ans;

    if (!isLeaf(root))
        ans.push_back(root->data);
    
    addLeft(root,ans);
    addLeaves(root,ans);
    addRight(root,ans);

    return ans;
}

int main()
{
    node *root = buildTree();
    BFS(root);
    vector<int> ans = boundryOrderTraversal(root);
    for(auto x: ans) cout<<x<<" ";
}