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

vector<int> bottomView(node* root){
    vector<int>ans;
    map<int,int> m;
    queue<pair<int,node*>> q;

    if(!root) return ans;

    q.push({0,root});

    while(!q.empty()){
        auto p = q.front();
        int x= p.first;
        node *t = p.second;
        q.pop();

        m[x] = t->data;

        if(t->left) q.push({x-1,t->left});
        if(t->right)q.push({x+1,t->right});
    }
    for(auto x:m){
        ans.push_back(x.second);
    }
    return ans;
}

int main()
{
    node *root = buildTree();
    BFS(root);
    vector<int> ans = bottomView(root);
    for(auto x: ans) cout<<x<<" ";
    
}