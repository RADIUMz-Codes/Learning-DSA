#include <bits/stdc++.h>
using namespace std;

void  insertBottom(stack<int> &s,int t){
    if(s.empty()){
        s.push(t);
        return;
    }
    int d=s.top();
    s.pop();
    insertBottom(s,t);
    s.push(d);

}

void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int t=s.top();
    s.pop();
    reverse(s);
    insertBottom(s,t);
}
int main()
{
    int n;
    cin>>n;
    stack<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }reverse(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}