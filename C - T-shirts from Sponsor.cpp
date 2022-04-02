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
signed main()
{
    Fastio;
    vi v;
    for0(i, 5)
    {
        int val;
        cin >> val;
        v.pb(val);
    }
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "S")
        {
            if (v[0] != 0)
            {
                cout << "S" << endl;
                v[0] -= 1;
            }
            else if (v[1] != 0)
            {
                cout << "M" << endl;
                v[1] -= 1;
            }
            else if (v[2] != 0)
            {
                cout << "L" << endl;
                v[2] -= 1;
            }
            else if (v[3] != 0)
            {
                cout << "XL" << endl;
                v[3] -= 1;
            }
            else if (v[4] != 0)
            {
                cout << "XXL" << endl;
                v[4] -= 1;
            }
        }
        else if (s == "M")
        {
            if (v[1] != 0)
            {
                cout << "M" << endl;
                v[1] -= 1;
            }
            else if (v[2] != 0)
            {
                cout << "L" << endl;
                v[2] -= 1;
            }
            else if (v[0] != 0)
            {
                cout << "S" << endl;
                v[2] -= 1;
            }
            else if (v[3] != 0)
            {
                cout << "XL" << endl;
                v[3] -= 1;
            }
            else if (v[4] != 0)
            {
                cout << "XXL" << endl;
                v[4] -= 1;
            }
        }
        else if (s == "L")
        {
            if (v[2] != 0)
            {
                cout << "L" << endl;
                v[2] -= 1;
            }
            else if (v[3] != 0)
            {
                cout << "XL" << endl;
                v[3] -= 1;
            }
            else if (v[1] != 0)
            {
                cout << "M" << endl;
                v[1] -= 1;
            }
            else if (v[4] != 0)
            {
                cout << "XXL" << endl;
                v[4] -= 1;
            }
            else if (v[0] != 0)
            {
                cout << "S" << endl;
                v[0] -= 1;
            }
        }
        else if (s == "XL")
        {
            if (v[3] != 0)
            {
                cout << "XL" << endl;
                v[3] -= 1;
            }
            else if (v[4] != 0)
            {
                cout << "XXL" << endl;
                v[4] -= 1;
            }
            else if (v[2] != 0)
            {
                cout << "L" << endl;
                v[2] -= 1;
            }
            else if (v[1] != 0)
            {
                cout << "M" << endl;
                v[1] -= 1;
            }
            else if (v[0] != 0)
            {
                cout << "S" << endl;
                v[0] -= 1;
            }
        }
        else if (s == "XXL")
        {
            if (v[4] != 0)
            {
                cout << "XXL" << endl;
                v[4] -= 1;
            }
            else if (v[3] != 0)
            {
                cout << "XL" << endl;
                v[3] -= 1;
            }
            else if (v[2] != 0)
            {
                cout << "L" << endl;
                v[2] -= 1;
            }
            else if (v[1] != 0)
            {
                cout << "M" << endl;
                v[1] -= 1;
            }
            else if (v[0] != 0)
            {
                cout << "S" << endl;
                v[0] -= 1;
            }
        }
    }
    return 0;
}