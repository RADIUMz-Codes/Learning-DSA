#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)    
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(b,a));
        // cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    sort(v.begin(),v.end());
    int c = 1;
    int prev = v[0].first;
    for(int i=1;i<n;i++){
        if(v[i].second>=prev){
            c++;
            prev=v[i].first;
        }
    }
    cout<<c<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}