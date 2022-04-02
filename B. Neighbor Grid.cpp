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
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        bool f = 1;
        for0(i, n)
        {
            for0(j, m) cin >> a[i][j];
        }
        for0(i, n)
        {
            for0(j, m)
            {
                int nb = 0;
                if(i - 1 >= 0) nb++;
                if(i + 1 < n) nb++;
                if(j - 1 >= 0) nb++;
                if(j + 1 < m) nb++;
                if(a[i][j] > nb)
                {
                    f = 0;
                    break;
                }
                a[i][j] = nb;
            }
            if(!f) break;
        }
        if(f)
        {
            cout << "YES" << endl;
            for0(i, n)
            {
                for0(j, m) cout << a[i][j] << " ";
                cout << endl;
            }
        }
        else cout << "NO" << endl;
    }
    return 0;
}