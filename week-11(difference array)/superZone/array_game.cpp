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
        ll n,k;
        cin>>n>>k;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll d=v[0];
        for(ll i=1;i<n;i++)
        {
            d=min(d,(v[i]-v[i-1]));
        }
        if(k>=3){
            cout<<0<<'\n';
            continue;
        }
        else if(k==1){
            cout<<d<<'\n';
            continue;
        }
       for (ll i = 0; i < n; i++) {
         for (ll j = 0; j < i; j++) {
            ll x = v[i] - v[j];
            ll p = lower_bound(v.begin(), v.end(), x) - v.begin();
            if (p < n) d = min(d, v[p] - x);
            if (p > 0) d = min(d, x- v[p - 1]);
        }
    }
        cout << d << '\n';
    }
    return 0;
}