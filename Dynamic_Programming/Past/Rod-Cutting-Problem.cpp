#include <bits/stdc++.h>
using namespace std;

int profit_top_down(int dp[], int price[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }

    int ans = INT_MIN;
    for(int i=1;i<=n;i++){
        int curr = price[i] + profit_top_down(dp,price,n-i);
        ans = max(curr,ans);
    }
    return dp[n] = ans;
}

int profit_bottom_up(int price[], int n)
{
    int dp[100] ={0};
    for(int i=1;i<=n;i++){
        int ans= price[i];
        for(int j=1;j<=i;j++){
            int curr = price[j]+dp[i-j];
            ans = max(ans,curr);
        }
        dp[i] = ans;
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    int price[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> price[i];
    }
    int dp[100] = {0};

    cout<<profit_top_down(dp,price,n)<<endl;
    cout<<profit_bottom_up(price,n);
}