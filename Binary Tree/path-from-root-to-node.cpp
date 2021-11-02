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
bool helper(node*root, vector<int>&ans, int x){

    if(!root) return false;

    ans.push_back(root->data);

    if(root->data == x) {
        return true;
    }
    if(helper(root->left,ans,x) or helper(root->right, ans, x)){
        return true;
    }

    ans.pop_back();
    return false;

}

vector<int> path(node*root, int x){
    vector<int> ans;
    if(helper (root, ans, x)){
        return ans;
    }
    else{
        cout<<"ni mila bhai";
        return ans;
    }
}

int main()
{
    node *root = buildTree();
    BFS(root);
    vector<int> ans = path(root, 8);
    for(auto x:ans) cout<<x<<endl;
}