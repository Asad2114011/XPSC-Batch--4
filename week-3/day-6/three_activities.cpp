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
        vector<pair<ll,ll>>s;
        vector<pair<ll,ll>>m;
        vector<pair<ll,ll>>b;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            s.push_back({x,i});
        }
         for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            m.push_back({x,i});
        }
         for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            b.push_back({x,i});
        }
        sort(s.rbegin(),s.rend());
        sort(m.rbegin(),m.rend());
        sort(b.rbegin(),b.rend());
        long long cnt=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    if(s[i].second!=m[j].second&&s[i].second!=b[k].second
                       &&m[j].second!=b[k].second)
                    {
                        cnt=max(cnt,(s[i].first+m[j].first+b[k].first));
                    }
                }
            }
        }
        cout<<cnt<<'\n';

    }
    return 0;
}