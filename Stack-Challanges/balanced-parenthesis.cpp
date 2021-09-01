#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    stack<char> s;
    for(int i=0;i<st.length();i++){
        char c=st[i];
        if(c=='(' or c=='{' or c=='['){
            s.push(c);
        }
        else if(!s.empty()){
            if((c==')' and s.top()=='(')or(c=='}' and s.top()=='{') or (c==']' and s.top()=='[')){
                s.pop();
            }
            else{
                cout<<"No";
                return 0;
            }
        }
        else{
            cout<<"No";
            return 0;
        }
    }
    if(s.empty())
        cout<<"Yes";
    else
        cout<<"No";
}