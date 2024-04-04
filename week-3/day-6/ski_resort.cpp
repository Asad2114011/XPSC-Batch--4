#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    ll n,d,c;
    cin>>n>>d>>c;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll r=0;
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(v[i]<=c)
        {
            r++;
            if(i==n-1)
            {
                if(r>=d){
            cnt+=((r-d+1)*(r-d+2))/2;
            }
            }
        }
        else{
            if(r>=d){
            cnt+=((r-d+1)*(r-d+2))/2;
            }
            r=0;
        }
    }
    cout<<cnt<<'\n';
    }
    return 0;
}