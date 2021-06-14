#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0; i < m; i++){
        for(int j=0; j < n; j++) cin>>a[i][j];
    }
    int i=0,j=n-1;
    int target;
    cin>>target;
    while (i<m and j>=0)
    {
        if(a[i][j]==target)
        {
            cout<<1;
            return 0;
        }
        if(a[i][j]>target)
        {
            j--;
        }
        if(a[i][j]<target)
        {
            i++;
        }
    }
    cout<<0;
    
    return 0;
}