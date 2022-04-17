// Longest Increasing Subsequence
// Brute Force

#include <bits/stdc++.h>
using namespace std;

int lis(int arr[], int dp[], int n)
{
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        int max_len = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                max_len = max(max_len, dp[j]);
            }
        }
        dp[i] = max_len + 1;
        mx = max(dp[i],mx);
    }
    for(int i =0;i<n;i++) cout<<dp[i]<<" ";
    cout<<endl;
    return mx;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int dp[100] = {0};
    cout << "LIS = " << lis(arr, dp, n);
    return 0;
}