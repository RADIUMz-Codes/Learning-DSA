#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define int long long
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
#define sp(n) fixed<<setprecision(n)
#define countBits(x) __builtin_popcount(x)
#define ctz(x) __builtin_ctz(x)// no. of unset bits before first setBit
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;
const int mod = 1'000'000'007;
int mpow(int base, int exp);

void solve(){
    string s;
    cin>>s;
    stack <char>st;
    for(int i=0;i<s.length();i++){
        char x=s[i];
        if(x==')'){
            if(st.top()=='('){
                cout<<"Duplicate"<<endl;
                return;
            }
            else{
                while(!st.empty() && st.top()!='('){
                    st.pop();
                }st.pop();
            }
        }
        else{
            st.push(x);
        }
    }cout<<"Not Duplicates"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }   
}

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % mod;
    base = (base * base) % mod;
    exp >>= 1;
  }
  return result;
}