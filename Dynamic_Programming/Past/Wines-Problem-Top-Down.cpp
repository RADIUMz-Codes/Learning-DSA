#include <bits/stdc++.h>
using namespace std;

int wines (int arr[],int dp[][100],int s,int e,int y)
{
    if(s>e){
        return 0;
    }

    if(dp[s][e]!=0){
        return dp[s][e];
    }

    int p1 = arr[s]*y + wines(arr,dp,s+1,e,y+1);
    int p2 = arr[e]*y + wines(arr,dp,s,e-1,y+1);

    return dp[s][e] = max(p1,p2);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int dp[100][100] ={0};

    cout<< wines(arr,dp,0,n-1,1);

}