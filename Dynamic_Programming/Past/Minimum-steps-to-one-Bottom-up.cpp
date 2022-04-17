#include <bits/stdc++.h>
using namespace std;

int minSteps(int n, int dp[])
{
    for (int i = 2; i <= n; i++)
    {
        int x, y, z;
        x = y = z = INT_MAX;

        if (i % 3 == 0)
        {
            x = dp[i / 3];
        }
        if (i % 2 == 0)
        {
            y = dp[i / 2];
        }
        z = dp[i - 1];

        dp[i] = min(x, min(y, z)) + 1;
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    int dp[100] = {0};
    cout << minSteps(n, dp);
    return 0;
}