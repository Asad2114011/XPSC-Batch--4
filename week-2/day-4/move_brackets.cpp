#include<bits/stdc++.h>
using namespace std;
ll main()
{
ios::sync_with_stdio(0);
cin.tie(0);
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll x=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='(')x++;
        else if(s[i]==')'&&x>0)x--;
    }
    cout<<x<<'\n';
}
    return 0;
}