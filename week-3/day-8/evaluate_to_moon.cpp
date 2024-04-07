#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,h;
        cin>>n>>m>>h;
        vector<ll>c(n);
        for(ll i=0;i<n;i++)cin>>c[i];
        vector<ll>p(m);
        for(ll i=0;i<m;i++)cin>>p[i];
        sort(c.rbegin(),c.rend());
        sort(p.rbegin(),p.rend());
        ll total=0;
        ll j=min(n,m);
        for(ll i=0;i<j;i++)
        {
            ll y=p[i]*h;
            total+=min(y,c[i]*1LL);
        }
        cout<<total<<'\n';
    }
    return 0;
}