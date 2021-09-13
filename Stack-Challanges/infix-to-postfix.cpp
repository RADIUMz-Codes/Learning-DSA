#include <bits/stdc++.h>
using namespace std;

int pre(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 1;
    else if (ch == '+' or ch == '-')
        return 0;
    else
        return -1;
}

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i]>='a' and s[i]<='z')
        {
            cout << s[i]<<" ";
        }
        if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                cout << st.top()<<" ";
                st.pop();
            }
            st.pop();
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            while (!st.empty() and pre(st.top()) > pre(s[i]))
            {
                cout << st.top()<<" ";
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        cout << st.top()<<" ";
        st.pop();
    }
}