#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second

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

void verticalOrderTraversal(node *root){
    vector<vector<int>> ans;
    map<int,map<int,multiset<int>>> m;  // stores a map of x co-ordinate to y co-ordinate and a multiset
    queue<pair<node*,pair<int,int>>> q; // stores the node , x co-ordinate, y co-ordinate

    q.push({root,{0,0}});
    while(!q.empty()){
        auto curr =q.front();
        q.pop();
        node*temp = curr.ff;
        int x = curr.ss.ff;
        int y = curr.ss.ss;
        m[x][y].insert(temp->data);

        if(temp->left) q.push({root->left,{x-1,y+1}});
        if(temp->right) q.push({root->right,{x+1,y+1}});
    }
    cout<<"check"<<endl;
    for(auto x: m){
        vector<int> col;
        for(auto y:x.ss){
            for(auto z:y.ss){
                cout<< z<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    node *root = buildTree();
    // BFS(root);
    verticalOrderTraversal(root);
}