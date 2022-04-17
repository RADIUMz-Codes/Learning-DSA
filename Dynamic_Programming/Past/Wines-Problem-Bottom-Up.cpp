#include <bits/stdc++.h>
using namespace std;

int wines(int arr[],int n)
{
    int dp[100][100] ={0};
    int y =n;
    for(int j=0;j<n;j++){
        int e=j;
        int s = 0;
        while(e<n){
            int p1,p2;
            p1=p2= INT_MIN;
            
            p1 = arr[s]*y + dp[s+1][e];
            
            if(s<e-1)
            p2 = arr[e]*y + dp[s][e-1];

            dp[s][e] = max(p1,p2);

            // cout<<s<<" "<<e<<" "<<y<<" "<< dp[s][e]<<endl;
            s++; e++;
        }
        y--;
    }
    return dp[0][n-1];
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
    cout<< wines(arr,n);
}