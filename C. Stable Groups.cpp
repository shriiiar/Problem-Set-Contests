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
#define vvi vector <vector<int>>
#define vvl vector <vector<ll>>
#define seti set <int>
#define setl set <ll>
#define mapl map <ll, ll>
#define mapi map <int, int>
#define mults multiset<ll>
#define vs vector<string>
#define pii pair<ll, ll>

#define for0(i,n) for (ll i=0;i<n;i++)
#define for1(i,n) for (ll i=1;i<=n;i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    ll n, k, x, cnt = 1;
    cin >> n >> k >> x;
    vl v;
    vector<pair<ll, pii>> p;
    for0(i, n)
    {
        ll val;
        cin >> val;
        v.pb(val);
    }
    sort(all(v));
    for0(i, n - 1)
    {
        if(v[i + 1] - v[i] > x) 
        {
            cnt++;
            p.pb(mp((v[i + 1] - v[i]), mp(i, i + 1)));
        }
    }
    sort(all(p));
    for0(i, p.sz)
    {
        ll dis = v[p[i].se.se] - v[p[i].se.fr] - 1;
        dis /= x;
        if(dis <= k)
        {
            cnt--;
            k -= dis;
        }
    }
    cout << cnt << endl;
    return 0;
}