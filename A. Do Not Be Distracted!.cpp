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
    int t;
    cin >> t;
    while (t--)
    {
        int n, indx = -1;
        bool f = 1;
        cin >> n;
        string s, t;
        cin >> s;
        for (int i = 0; i < s.sz; i++)
        {
            if (i == 0)
            {
                t += s[i];
                indx++;
            }
            else
            {
                if (t[indx] != s[i])
                {
                    t += s[i];
                    indx++;
                }
            }
        }
        vi v(26, 0);
        for (int i = 0; i < t.sz; i++)
        {
            if (v[t[i] - 'A'] == 0)
                v[t[i] - 'A'] += 1;
            else
            {
                f = 0;
                break;
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}