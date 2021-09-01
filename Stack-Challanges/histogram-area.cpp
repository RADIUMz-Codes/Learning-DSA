#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(auto &x:a) cin>>x;
    stack <long long> s;
    long long area=0,marea=0;
    for(long long i=0;i<n;i++){
        while(!s.empty() and a[s.top()]>a[i]){
            long long tp=s.top();
            s.pop();
            if(s.empty()){
                area=i*a[tp];
            }
            else{
                area=(i-s.top()-1)*a[tp];
            }
            marea=max(marea,area);            
        }
        s.push(i);
    }
    while(!s.empty()){
            long long tp=s.top();
            s.pop();
            if(s.empty()){
                area=n*a[tp];
            }
            else{
                area=(n-s.top()-1)*a[tp];
            }
            marea=max(marea,area);            
        }
    cout<<marea;
}