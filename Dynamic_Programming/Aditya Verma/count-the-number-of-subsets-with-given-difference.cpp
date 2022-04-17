#include <bits/stdc++.h>
using namespace std;
int count(vector<int> arr, int n, int diff)
{
    int sum = 0;
    for (auto x : arr)
    {
        sum += x;
    }
    cout << sum << endl;
    int s = (sum + diff) / 2;

    if (s % 2 == 1)
        return 0;

    int dp[n + 1][s + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[n][s];
}
int main()
{
    vector<int> vect{1, 2, 3, 3};
    int n = vect.size();
    int diff = 3;
    // for(auto x: vect)cout<< x<<endl;
    // cout<<endl<<endl;
    cout << count(vect, n, diff) << endl;

    return 0;
}