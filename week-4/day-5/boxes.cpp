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
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.rbegin(),v.rend());
        stack<ll>s;
        s.push(v[0]);
        for(int i=1;i<n;i++)
        {
            ll x=s.top();
            if(x>=v[i])
            {
                s.pop();
                s.push((x^v[i]));
            }
            else{
                s.push(v[i]);
            }
        }
        cout<<s.size()<<'\n';
        
    }
    return 0;
}