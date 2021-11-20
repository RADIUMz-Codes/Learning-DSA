#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> w(n),b(n);
    for(auto &x:w) cin>>x;
    for(auto &x:b) cin>>x;
    sort(w.begin(),w.end());
    sort(b.begin(),b.end());
    int t =0;
    for(int i =0;i<n;i++){
        t+=abs(w[i]-b[i]);
    }
    cout<<t;
}