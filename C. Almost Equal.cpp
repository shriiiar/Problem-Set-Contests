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

#define for0(i,n) for (ll i=0;i<n;i++)
#define for1(i,n) for (ll i=1;i<=n;i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int n, val, id1, id2;
    cin >> n;
    id1 = n - 1, id2 = 2 * n - 1;
    if(!(n % 2)) 
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    vi v(2 * n, 0);
    v[0] = 1, v[n] = 2;
    bool f = 0;
    val = n * 2;
    n -= 1;
    while(n--)
    {
        if(f)
        {
            v[id1] = val;
            v[id2] = val - 1;
            f = 0;
            id1--, id2--;
            val -= 2;
        }
        else
        {
            v[id2] = val;
            v[id1] = val - 1;
            f = 1;
            id1--, id2--;
            val -= 2;
        }
    }
    for0(i, v.sz) cout << v[i] << " ";
    cout << endl;
    return 0;
}