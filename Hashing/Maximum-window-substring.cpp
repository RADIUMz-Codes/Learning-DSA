#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st, pt;
    cin >> st >> pt;
    map<char, int> m, f;
    int min_length = INT_MAX;
    //finding fequency
    for (int i = 0; i < pt.length(); i++)
        f[pt[i]]++;

    int cnt = 0;
    int start = 0, st_idx = -1;
    for (int i = 0; i < st.length(); i++)
    {
        char ch = st[i];
        m[ch]++;

        if (m[ch] <= f[ch])
        {
            cnt++;
        }

        if (cnt == pt.length())
        {
            char temp = st[start];

            while (f[temp] == 0 or m[temp] > f[temp])
            {
                m[temp]--;
                start++;
                temp = st[start];
            }
            int curr = i - start + 1;
            if (curr < min_length)
            {
                min_length = curr;
                st_idx = start;
            }
        }
    }
    cout<<st.substr(st_idx,min_length);
}