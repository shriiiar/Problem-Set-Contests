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
void seive(vector<bool> &b, int n, bool &f)
{
    b[0] = 0, b[1] = 0;
    for (int i = 2; i * i <= n + 1; i++)
    {
        if (b[i])
        {
            for (int j = i * i; j <= n + 1; j += i)
            {
                b[j] = 0;
                f = true;
            }
        }
    }
}
int main()
{
    Fastio;
    int n;
    cin >> n;
    vb b(n + 1, 1);
    bool f = false;
    seive(b, n, f);
    if(f) cout<<2<<endl;
    else cout<<1<<endl;
    for (int i = 2; i <= n + 1; i++)
    {
        if (b[i])
            cout << 1 << " ";
        else
            cout << 2 << " ";
    }
    return 0;
}