#include <bits/stdc++.h>
using namespace std;

int minSteps(int n, int dp[])
{
    if (n == 1)
    {
        return 0;
    }
    
    if (dp[n] != 0)
    {
        return dp[n];
    }

    int x, y, z;
    x = y = z = INT_MAX;
    if (n % 3 == 0)
    {
        x = minSteps(n / 3, dp);
    }
    if (n % 2 == 0)
    {
        y = minSteps(n / 2, dp);
    }
    z = minSteps(n - 1, dp);

    return dp[n] = min(x,min(y,z)) +1;
}

int main()
{
    int n ;
    cin>>n;
    int dp[100] ={0};
    cout<<minSteps(n,dp);
    return 0;
}