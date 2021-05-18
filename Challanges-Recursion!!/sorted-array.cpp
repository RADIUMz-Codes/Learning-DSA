#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define endl "\n"
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

void checkSort(ll a[],int n)
{
    if(n==0)
    {
        cout<<"true";
        return;
    }

    if(a[n]>=a[n-1])
    {
        checkSort(a,n-1);
    }
    else 
    {
        cout<<"false";
        return;
    }




}

void solve() {
    int n;
    cin>>n;
    ll  a[n];
    fo(i,n)
    {
        cin>>a[i];
    }
    checkSort(a,n-1);
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}