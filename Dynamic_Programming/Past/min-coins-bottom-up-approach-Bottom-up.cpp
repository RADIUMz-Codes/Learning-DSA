#include <bits/stdc++.h>
using namespace std;

int coins(int money,vector<int>v, int dp[]){
    int size = v.size();
    for(int i = 1;i<=money;i++)
    {
        dp[i] = INT_MAX;
        for(int j =0;j<size;j++){
            if(i-v[j] >=0){
                int sub_prob = dp[i-v[j]] +1;
                dp[i] = min(dp[i],sub_prob);
            }
        }
    }
    return dp[money];
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    int money;
    cin>>money;
    int dp[100000] = {0};
    cout<<coins(money,v,dp);
}