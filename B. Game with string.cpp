#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int c = 0;
    stack <char> ss;
    ss.push(s[0]);
    for(int i=1; i<s.size(); i++)
    {
        if(!ss.empty() && ss.top()==s[i])
        {
            ss.pop();
            c++;
        }
        else
            ss.push(s[i]);
    }
    if(c%2!=0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
