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
        map<ll,int>m;
        for( int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        int mx=0;
        for(auto p:m)
        {
            mx=max(mx,p.second);
        }
        if(n-mx==0){
            cout<<0<<'\n';
            continue;
        }
    ll sum=0;
    for(ll i=mx*2; ; i*=2)
    {
        if(n==i){
            sum+=i/2+1;
            break;
        }
        else if(n<i){
            sum+=n-i/2+1;
            break;
        }
        else{
            sum+=i/2+1;
        }
    }
    cout<<sum<<'\n';
    }
    return 0;
}