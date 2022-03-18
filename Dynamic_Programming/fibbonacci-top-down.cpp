#include <bits/stdc++.h>
using namespace std;

int fib(int n, int dp[])
{
    // cout<<"hello"<<endl;
    if (n == 0 or n == 1)
    {
        dp[n] = n;
        return n;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }

    int ans = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n] = ans;
}

int main()
{
    
    int n;
    cin >> n;
    int dp[100]={0};
    cout << n << endl;
    cout << fib(n, dp)<<endl;
}