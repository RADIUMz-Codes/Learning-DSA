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
node *buildTree(int *preOrder, int *inOrder, int s, int e){
    static int i=0;
    if (s>e){
        return NULL;
    }
    int j;
    for(j=s;j<=e;j++){
        if(preOrder[i]==inOrder[j])
        break;
    }

    node *root = new node(inOrder[j]);
    i++;
    root->left = buildTree(preOrder,inOrder,s,j-1);
    root->right = buildTree(preOrder,inOrder,j+1,e);
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
int main()
{
    int preOrder[]={1,2,3,4,8,5,6,7};
    int inOrder[] ={3,2,8,4,1,6,7,5};
    node *root = buildTree(preOrder,inOrder,0,7);
    BFS(root);
    
}