#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, z = 0, c = 0;
    cin >> n;
    vector <int> v;
    map <int, int> mp;
    map <int, int> :: iterator it;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            long long x = v[i] + v[j];
            mp[x]++;
        }
    }
    for(auto it = mp.cbegin(); it != mp.cend(); ++it )
    {
        if (it ->second > c)
            c = it->second;
    }
    cout<<c<<endl;
}
