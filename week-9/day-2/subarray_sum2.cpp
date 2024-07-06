#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
     ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    map<ll,ll>pref;
    pref[0]=1;
    ll sum=0;
    ll cnt=0;

    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        cnt+=pref[sum-k];
        pref[sum]+=1;
    }
    cout<<cnt<<'\n';

    return 0;
}