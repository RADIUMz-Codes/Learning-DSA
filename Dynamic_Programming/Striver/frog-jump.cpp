#include <bits/stdc++.h>
using namespace std;

int frogJumpRecc(vector<int> &v, int n)
{
    if (n == 0)
        return 0;

    int l = frogJumpRecc(v, n - 1) + abs(v[n] - v[n - 1]);

    int r = INT_MAX;

    if (n > 1)
    {

        r = frogJumpRecc(v, n - 2) + abs(v[n] - v[n - 2]);
    }
    // cout << "test" << endl;
    return min(l, r);
}

// Top Down Approach
vector<int> dp(100,-1);
int frogJump(vector<int>v,int n){
    if (n == 0)
        return 0;

    if(dp[n]!=-1){
        return dp[n];
    }

    int l = frogJumpRecc(v, n - 1) + abs(v[n] - v[n - 1]);

    int r = INT_MAX;

    if (n > 1)
    {

        r = frogJumpRecc(v, n - 2) + abs(v[n] - v[n - 2]);
    }
    // cout << "test" << endl;
    return min(l, r);
}

int main()
{
    vector<int> v{30, 10, 60, 10, 60, 50};
    int n = v.size() - 1;
    // cout << "Main" << endl;
    // cout << "Min Jump : " << frogJumpRecc(v, n);
    cout << "Min Jump : " << frogJump(v, n);


    return 0;
}