#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    unordered_set<int> s;
    for(auto &x: arr){
        cin>>x;
        s.insert(x);
    }
    int maxi = 0;
    for(auto x: arr){
        if(s.find(x-1) != s.end()){
            continue;
        }
        int curr =1;
        int i =x;
        while(s.find(++i)!= s.end()){
            curr++;
        }
        maxi = max(curr,maxi);
    }
    cout<< "Max = "<<maxi<<endl;
}