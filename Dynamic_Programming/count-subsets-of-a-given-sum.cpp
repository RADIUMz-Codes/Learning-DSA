#include <bits/stdc++.h>
using namespace std;

/* ---------------------------- Reccurssive Code ---------------------------- */
int coutnRecc(int arr[], int n, int sum)
{
    // Base Case
    if (sum == 0)
    {
        return 1;
    }
    if (n == 0 && sum > 0)
    {
        return 0;
    }

    if (arr[n - 1] <= sum)
    {
        return coutnRecc(arr, n - 1, sum - arr[n - 1]) + coutnRecc(arr, n - 1, sum);
    }
    else
    {
        return coutnRecc(arr, n - 1, sum);
    }
}

/* -------------------------------- Bottom UP ------------------------------- */
int countDp(int arr[], int n, int sum)
{

    int dp[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= sum; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i] <= j)
            {
                dp[i][j] = dp[i - 1][j - arr[i]] + dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return dp[n][sum];
}

int main()
{
    int arr[5] = {1, 2, 7, 3, 4};
    int sum = 5;
    cout << coutnRecc(arr, 5, sum)<<endl;
    cout<<countDp(arr, 5, sum);

    return 0;
}