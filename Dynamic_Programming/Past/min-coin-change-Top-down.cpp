#include <bits/stdc++.h>
using namespace std;

int coins(int money,vector<int> v,int dp[]){
    if(money == 0){
        return 0;
    }
    if(dp[money] !=0){
        return dp[money];
    }
    int ans = INT_MAX;
    int idx = upper_bound(v.begin(),v.end(),money) - v.begin()-1;
    while(idx >= 0){
        int sub_prob = coins(money-v[idx],v,dp)+1;
        ans = min(ans,sub_prob);
        idx--;
    }
    return dp[money] = ans;
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
    for(auto x:v) dp[x] = 1;
    cout<<coins(money,v,dp);
}