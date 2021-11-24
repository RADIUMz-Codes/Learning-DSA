#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int dp[100] ={0};
    for(int i = 0;i<=n;i++)
    {
        if(i ==0 or i== 1){
            dp[i] = i;
        }
        else{
            dp[i] =dp[i-1] +dp[i-2];
        }
    }
    cout<<dp[n]<<endl;
}