#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];

bool visited[N];

// comments indiciate where code can be inserted in dfs
void dfs(int vertex)
{
    /** 
     * Take action on entering the vertex after
     * entering the vertex
     */
    visited[vertex] = true;
    for (auto child : g[vertex])
    {
        if(visited[child]) continue;
        /**
         * Take action on child before 
         * entering the child node
         */
        dfs(child);
        /**
         * Take actoin on entering child 
         * after exiting child node
         */
    }
    /**
     * Take action on vertex before exiting 
     * the vertex
     */
    // O(V+E)
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    return 0;
}