#include <bits/stdc++.h>
using namespace std;

int minSteps(int n)
{
    // Tc = O(n) Sc = o(n);
    /*
    vector<int> dp(n+1);
    dp[0] = dp[1] = 1;
    for(int i =2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
    */

//    SC = o(1) TC = O(n);
   int a,b,c;
   a=b=1;
   if(n<=1) return 1;
   for(int i=2; i<=n;i++){
        c=a+b;
        a=b;
        b=c;
   }
   return c;
}

int main()
{
    int n;
    cin >> n;
    cout << "Min Steps = " << minSteps(n);
    return 0;
}