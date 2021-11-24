#include <bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2,int i,int j,int dp[][100]){
    if(s1.length() == i or s2.length() == j){
        return 0;
    }
    if(dp[i][j] != 0){
        return dp[i][j];
    }
    if(s1[i] == s2[j]){
        return 1+lcs(s1,s2,i+1,j+1,dp);
    }
    int opt1 = lcs(s1,s2,i+1,j,dp);
    int opt2 = lcs(s1,s2,i,j+1,dp);

    return dp[i][j] = max(opt1,opt2);
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int dp[100][100];
    cout<<"LCS = "<<lcs(s1,s2,0,0,dp);
}