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
 
vi v;
int pos = 0;
bool comb(int sum, int pos)
{
    if(pos == v.sz) 
    {
        if(sum % 360 == 0) return 1;
        else return 0;
    }
    if(comb(sum + v[pos], pos + 1) || comb(sum - v[pos], pos + 1)) return 1;
    else return 0;
}
signed main()
{
    Fastio;
    int n, sum = 0;
    cin >> n;
    for0(i, n)
    {
        int val;
        cin >> val;
        sum += val;
        v.pb(val);
    }
    if(comb(0, 0)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}