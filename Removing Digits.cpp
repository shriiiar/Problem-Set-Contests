#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod 1000000007
#define fr first
#define se second

#define vi vector <int>
#define vb vector <bool>
#define vl vector <ll>
#define vpi vector <pair<int, int>>
#define vpl vector <pair<ll, ll>>
#define vplb vector <pair<ll, bool>>
#define vpib vector <pair<int, bool>>
#define vv vector <vector<int>>
#define seti set <int>
#define setl set <ll>
#define mapl map <ll, ll>
#define mapi map <int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i,n) for (ll i=0;i<n;i++)
#define for1(i,n) for (ll i=1;i<=n;i++)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
vi v;
int count(int n)
{
    if(v[n] != -1) return v[n];
    if(n == 0) return 0;
    int ans = INT_MAX;
    string s = to_string(n);
    for0(i, s.sz)
    {
        if(s[i] != '0')
        {
            int dis = s[i] - '0';
            ans = min(ans, 1 + count(n - dis));
        }
    }
    return v[n] = ans;
}
signed main()
{
    Fastio;
    int n;
    cin >> n;
    v.resize(n + 1, -1);
    cout << count(n) <<endl;
    return 0;
}