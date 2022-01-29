#include <bits/stdc++.h>
using namespace std;

void inputGraph(vector<int> adj[], int n, int m)
{
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void bfs(vector<int> adj[], int n)
{
    vector<int> vis(n);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                cout << node << " -> ";
                for (auto x : adj[node])
                {
                    if (!vis[x])
                    {
                        q.push(x);
                        vis[x] = 1;
                    }
                }
            }
        }
    }
}

int main()
{
    int m, n;
    cin >> n >> m;
    vector<int> adj[n + 1];
    inputGraph(adj, n, m);
    bfs(adj, n);
}