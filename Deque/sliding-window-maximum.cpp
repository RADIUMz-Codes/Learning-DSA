#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &x:v) cin>>x;

    deque<int> dq;
    for(int i=0;i<k;i++){

        while(!dq.empty() and v[dq.back()]<= v[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout<<v[dq.front()]<<" ";

    for(int i =k;i<n;i++){
        while(!dq.empty() and (i-dq.front())>=k){
            dq.pop_front();
        }

        
        while(!dq.empty() and v[i]>=v[dq.back()]){
            dq.pop_back();
        }

        dq.push_back(i);
        cout<<v[dq.front()]<<" ";
    }
}