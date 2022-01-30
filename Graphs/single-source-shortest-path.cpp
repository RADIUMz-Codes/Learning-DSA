#include <bits/stdc++.h>
using namespace std;

void inputGraph(vector<int> g[], int n, int m)
{
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
}

/* ------------------- sssp = Single Source Shortest Path ------------------- */
int sssp(vector<int> g[], int n, int src, int dest)
{
    vector<int> vis(n+1, 1e6);
    vis[src] = 0;
    queue<int> q;
    q.push(src);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto x : g[node])
        {
            if (vis[x] == 1e6)
            {
                q.push(x);
                vis[x] = min(vis[x],vis[node]+1);
            }
        }
    }
    return vis[dest];
}

int main()
{
    int m, n;
    cin >> n >> m;
    vector<int> g[n + 1];
    inputGraph(g, n, m);

    int src, dest;
    cin >> src >> dest;
    cout << "SSSP = " << sssp(g, n, src, dest);
}