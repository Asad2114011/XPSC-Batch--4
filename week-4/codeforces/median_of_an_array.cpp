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
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll>a(v);
        sort(a.begin(),a.end());
        ll m=(n-1)/2;
        ll x=a[m];
        ll cnt=0;
        for(ll i=m;i<n;i++)
        {
            if(a[i]==x)cnt++;
        }
        cout<<cnt<<'\n';

    }
    return 0;
}