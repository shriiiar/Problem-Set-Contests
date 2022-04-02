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
#define pii pair<int, int>
#define pll pair<ll, ll>

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
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define unq(v) (v).erase(unique(all((v))), (v).end())
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
int dx1[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dy1[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
int dx2[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy2[8] = {1, 2, 2, 1, -1, -2, -2, -1};

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int Log[100004];
void precalLog(ll n)
{
    for (ll i = 2; i <= n; i++)
    {
        Log[i] = Log[i / 2] + 1;
    }
}
void rmq(ll lim, ll n, vvl &v)
{
    for (int i = 1; i <= lim; i++)
    {
        // ll res = pow(2, i) - 1;
        for (int j = 0; j + (1 << i) - 1 < n; j++)
        {
            v[i].pb(max(v[i - 1][j], v[i - 1][j + (1 << (i - 1))]));
        }
    }
}
signed main()
{
    Fastio;
    ll n, lim, q, cnt = 0;
    cin >> n >> q;
    lim = (int)log2(n);
    vvl v(lim + 1);
    vi t;
    for0(i, n)
    {
        ll val;
        cin >> val;
        t.pb(val);
        v[0].pb(val);
    }
    rmq(lim, n, v);
    precalLog(n);
    while (q--)
    {
        ll l, r, dis;
        cin >> l >> r;
        r--;
        dis = Log[r - l + 1];
        dis = max(v[dis][l - 1], v[dis][r - (1 << dis)]);
        if (dis <= t[l - 1]) cnt++;
    }
    cout << cnt << endl;
}