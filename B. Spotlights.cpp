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
    int n, m, res = 0;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int val;
            cin >> val;
            a[i][j] = val;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j])
            {
                for (int u = i - 1; u >= 0; u--)
                {
                    if (a[u][j])
                        break;
                    cnt++;
                }
                for (int d = i + 1; d < n; d++)
                {
                    if (a[d][j])
                        break;
                    cnt++;
                }
                for (int l = j - 1; l >= 0; l--)
                {
                    if (a[i][l])
                        break;
                    cnt++;
                }
                for (int r = j + 1; r < m; r++)
                {
                    if (a[i][r])
                        break;
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}