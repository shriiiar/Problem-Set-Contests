#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vb vector<bool>
#define vl vector<long long>
#define mp make_pair
#define vpi vector<pair<int, int>>
#define vpl vector<pair<long long, long long>>
#define vplb vector<pair<long long, bool>>
#define vpib vector<pair<int, bool>>
#define vv vector<vector<int>>
#define iton (ll i = 0; i < n; i++)
#define seti set<int>
#define setl set<long long>
#define mapl map<long long, long long>
#define mapi map<int, int>
#define sz size()
#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
int main()
{
    Fastio;
    ll n, l, r, res = 0;
    cin >> n;
    l = 0, r = n - 1;
    vi v;
    for
        iton
        {
            int val;
            cin >> val;
            v.pb(val);
        }
    sort(v.begin(), v.end());
    while (1)
    {
        if (l==n)
            break;
        res = (res + ((v[l] % 10007) * (v[r] % 10007))) % 10007;
        l++, r--;
    }
    cout << res << endl;
    return 0;
}