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
        for(ll i=0;i<n;i++)cin>>v[i];
        ll sum=0,cnt=0;
        bool x=false;
        for(int i=0;i<=n;i++)
        {
            if(i<n)
            {
                sum+=abs(v[i]);
            }
            if(x)
            {
                if(i==n||v[i]>0)
                {
                    cnt++;
                    x=false;
                }
            }
            else{
                if(v[i]<0)
                {
                    x=true;
                }
            }
        }
        cout<<sum<<" "<<cnt<<'\n';
    }
    return 0;
}