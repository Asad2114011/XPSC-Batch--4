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
        vector<int>v(n);
        int ans=-1;
        for(int i=0;i<n;i++){
            cin>>v[i];
           ans&=v[i];
        }
        cout<<ans<<'\n';
    }
    return 0;
}