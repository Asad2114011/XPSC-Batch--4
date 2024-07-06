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
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll>v(k+1),b(k+1);
        v[0]=0;
        b[0]=0;
        for(ll i=1;i<=k;i++)cin>>v[i];
        for(ll i=1;i<=k;i++)cin>>b[i];
        while(q--)
        {
            ll x;
            cin>>x;
            ll ind=lower_bound(v.begin(),v.end(),x)-v.begin();
            if(v[ind]==x){
                cout<<b[ind]<<" ";
                continue;
            }
            ll dist=v[ind]-v[ind-1];
            ll time=b[ind]-b[ind-1];
            ll d=x-v[ind-1];
            cout<<((d*time)/dist)+b[ind-1]<<" ";
        }
        cout<<'\n';

    }
    return 0;
}