#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    int total =0;
    for(auto &x:v) {
        total+=x;
    }
    if(total%n !=0){
        cout<<-1;
        return 0;
    }
    int max_diff = INT_MIN;
    int diff = 0;
    int load = total/n;
    for(int i=0; i<n; i++){
        diff += (v[i] - load);
        max_diff = max(max_diff,abs(diff));
    }

    cout<<max_diff<<endl;
    
}