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
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll x=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]>i+1)
            {
                ll d=abs((i+1)-a[i]);
                x=max(d,x);
            }
        }
        cout<<x<<'\n';
    }
    return 0;
}