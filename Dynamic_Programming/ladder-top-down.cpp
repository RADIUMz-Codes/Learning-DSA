#include <bits/stdc++.h>
using namespace std;

int ladder_top_down(int dp[], int n, int k)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        ans += ladder_top_down(dp, n - i, k);
    }
    return dp[n] = ans;
}

int ladder_bottom_up(int n, int k)
{
    int dp[100] = {0};
    dp[0] = 1;
    int curr_sum = dp[0];
    for (int i = 1; i <= k; i++)
    {
        dp[i] = curr_sum;
        curr_sum += dp[i];
    }
    for (int i = k + 1; i <= n; i++)
    {
        dp[i] = curr_sum - dp[i - k - 1];
        curr_sum += (dp[i] - dp[i - k - 1]);
    }
    for (int i = 0; i <= n; i++)
        cout << i << " " << dp[i] << endl;
    return dp[n];
}

int optimize(int n, int k)
{
    int dp[100] = {0};
    dp[0] = 1;
    int sum = dp[0];
    for (int i = 1; i <= n; i++)
    {
        if (i <= k)
        {
            dp[i] = sum;
            sum += dp[i];
        }
        else
        {
            dp[i] = sum - dp[i - k - 1];
            sum += (dp[i] - dp[i - k - 1]);
        }
    }
    return dp[n];
}

int main()
{
    int n, k;
    cin >> n >> k;
    int dp[100] = {0};
    int s = 0;

    cout << "Top Down = " << ladder_top_down(dp, n, k) << endl;
    cout << "Bottom Up = " << ladder_bottom_up(n, k) << endl;
    cout << "Optimized = " << optimize(n, k);
}