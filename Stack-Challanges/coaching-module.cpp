#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        int ch;
        cin >> ch;
        if (ch == 1)
        {
            if (!s.empty())
            {
                cout << s.top() << endl;
                s.pop();
            }
            else
                cout<<"No Code"<<endl;
        }
        if (ch == 2)
        {
            int p;
            cin >> p;
            s.push(p);
        }
    }
}