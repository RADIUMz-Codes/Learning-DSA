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

vector<vector<int>> zigzag(node* root){
    vector<vector<int>> ans;
    queue<node*>q;
    if(root) q.push(root);
    bool f= true;
    while(!q.empty()){
        int size = q.size();
        vector<int> row(size);
        for(int i=0;i<size;i++){
            node* temp = q.front();
            q.pop();

            int index = (f)? i: size-i-1;
            row[index] = temp->data;
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        f=!f;
        ans.push_back(row);
    }
    return ans;
}


int main()
{
    node *root = buildTree();
    BFS(root);
    cout<<endl;
    vector<vector<int>> ans = zigzag(root);
    for(auto x: ans){
        for(auto y:x){
            cout<< y<<" ";
        }cout<<endl;
    }
}