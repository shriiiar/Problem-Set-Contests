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

#define vi vector<int>
#define vb vector<bool>
#define vl vector<ll>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define vplb vector<pair<ll, bool>>
#define vpib vector<pair<int, bool>>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define seti set<int>
#define setl set<ll>
#define mapl map<ll, ll>
#define mapi map<int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    ll n, a = 0, b = 0;
    cin >> n;
    vl v, t, res;
    for0(i, n)
    {
        ll val;
        cin >> val;
        res.pb(val);
        if(val > 0) 
        {
            v.pb(val);
            a += val;
        }
        else
        {
            t.pb(-val);
            b += (-val);
        }
    }
    if(a != b)
    {
        if(a > b) cout << "first" << endl;
        else cout << "second" << endl;
    }
    else if(v != t)
    {
        if(v > t) cout << "first" << endl;
        else cout << "second" << endl;
    }
    else
    {
        if(res[res.sz - 1] > 0) cout << "first" << endl;
        else cout << "second" << endl;
    }
    return 0;
}