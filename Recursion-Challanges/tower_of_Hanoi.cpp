#include <bits/stdc++.h>
using namespace std;

void toh(int n, char s, char d, char h)
{
    if (n == 0)
    {
        // cout<<"Moving ring "<<n<<" from "<<s<<" to "<<d<<"\n";
        return;
    }
    toh(n - 1, s, h, d);
    cout << "Moving ring " << n << " from " << s << " to " << d << "\n";
    toh(n - 1, h, d, s);
    // cout<<"Moving ring "<<n<<" from "<<s<<" to "<<d<<"\n";
}

int main()
{
    int n;
    cin >> n;

    toh(n, 'A', 'B', 'C');
    return 0;
}