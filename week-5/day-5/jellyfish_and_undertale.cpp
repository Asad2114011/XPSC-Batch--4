#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        vector<ll>v(c);
        for(int i=0;i<c;i++)cin>>v[i];
        ll cnt=b;
        for(int i=0;i<c;i++)
        {
            cnt+=min(v[i],a-1);
        }
        cout<<cnt<<'\n';
    }

    return 0;
}