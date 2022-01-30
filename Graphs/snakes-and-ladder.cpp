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

int main()
{
    int m, n;
    cin >> n >> m;
    vector<int> g[n + 1];
    inputGraph(g, n, m);
    int board[50] = {0};
    board[2] = 13;
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] = -14;
    board[24] = -8;
    board[25] = 10;
    board[32] = -2;
    board[34] = -22;
}