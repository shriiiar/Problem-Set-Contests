#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod = 1e9 + 7
#define fr first
#define se second

#define vi vector<int>
#define vb vector<bool>
#define vl vector<ll>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define vplb vector<pair<ll, bool>>
#define vpib vector<pair<int, bool>>
#define vv vector<vector<int>>
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
ll cnt = 1;
vv v;
vb b;
void dfs(int i)
{
    b[i] = 1;
    for (int j = 0; j < v[i].sz; j++)
    {
        if (!b[v[i][j]])
        {
            cnt *= 2;
            dfs(v[i][j]);
        }
    }
}
signed main()
{
    Fastio;
    int n, m;
    cin >> n >> m;
    v.resize(n + 1);
    b.resize(n + 1, 0);
    for0(i, m)
    {
        int x, y;
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    for1(i, n)
    {
        if (!b[i])
            dfs(i);
    }
    cout << cnt << endl;
    return 0;
}