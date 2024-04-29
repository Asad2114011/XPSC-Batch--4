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
        ll x=(n*(n-1))/2;
        vector<ll>v(x);
        for(ll i=0;i<x;i++)cin>>v[i];
        vector<ll>a;
        sort(v.begin(),v.end());
        ll l=0,r=n-1;
        for(ll i=0;i<n-2;i++)
        {
            a.push_back(v[l]);
            l+=r;
            r--;
        }
        a.push_back(v[x-1]);
        a.push_back(v[x-1]);
        for(ll i:a)cout<<i<<" ";
        cout<<'\n';
    }

    return 0;
}