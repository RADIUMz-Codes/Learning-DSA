#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    int n = s.length();
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push(1);
        }
        if (s[i] == ')')
        {
            if (!(st.empty()))
                st.pop();
            else
                return false;
        }
    }


    if(st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cin >> s;
    if (isValid(s))
    {
        cout << "valid";
    }
    else
    {
        cout << "invalid";
    }
}