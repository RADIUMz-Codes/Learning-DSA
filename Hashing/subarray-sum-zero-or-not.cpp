// using hashing finding if the sum is zero or not
// if yes find start and end index

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] ={6,-1,2,-1,2,-1};
    unordered_map<int,int> m;
    for(int i=0;i<6;i++){
        arr [i] += (i==0)? 0: arr[i-1];
        if(m.find(arr[i]) != m.end()){
            cout<<m[arr[i]]+1<<" "<<i<<endl;
        }
        m[arr[i]]=i;
    }
    return 0;
}