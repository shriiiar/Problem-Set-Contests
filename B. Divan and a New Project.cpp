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

#define for0(i,n) for (ll i=0;i<n;i++)
#define for1(i,n) for (ll i=1;i<=n;i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {
        ll n, dis = 500000, id = 1, ans = 0;
        cin >> n;
        vpl v, res;
        for0(i, n)
        {
            ll val;
            cin >> val;
            v.pb(mp(val, i));
        }
        sort(all(v));
        bool f = 1;
        for(int i = n - 1; i >= 0; i--)
        {
            if(f)
            {
                res.pb(mp(v[i].se, dis + id));
                ans += (2 * (abs(dis - (dis + id))) * v[i].fr);
                f = 0;
            }
            else
            {
                res.pb(mp(v[i].se, dis - id));
                ans += (2 * (abs(dis - (dis - id))) * v[i].fr);
                f = 1;
                id += 1;
            }
        }
        cout << ans << endl;
        cout << 500000 << " ";
        sort(all(res));
        for0(i, n)
        {
            cout << res[i].se << " ";
        }
        cout << endl;
    }
    return 0;
}