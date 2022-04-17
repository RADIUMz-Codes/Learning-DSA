#include <bits/stdc++.h>
using namespace std;

int mindiff(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    bool dp[n + 1][sum + 1];

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
            if (arr[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    int diff = INT_MAX;
    for(int j= sum/2;j>=0;j--){
        if(dp[n][j] == true){
            diff = sum - j*2;
            break;
        }
    }
    return diff;
}
int main()
{
    int arr[] = {1, 2, 7, 3};
    int n = 4;
    cout << mindiff(arr, n) << endl;
    return 0;
}