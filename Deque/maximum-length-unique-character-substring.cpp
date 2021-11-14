#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int l =0;
    map<char,int> m;
    int st=0,e=0;
    for(int i =0;i<n;i++){
        if(m.find(s[i]) != m.end()){
            st=m[s[i]]+1;
        }
        m[s[i]] = i;
        int curr = i-st+1;
        l = max(curr,l);
    }

    cout<<"Max Length Unique Character Substring = "<<l<<endl;
}