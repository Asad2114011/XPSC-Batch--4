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
        ll n,c;
        cin>>n>>c;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
            v[i]+=(i+1);
        }
        sort(v.begin(),v.end());
        ll cnt=0,sum=0;
        for(ll i=0;i<n;i++)
        {
            if((sum+v[i])<=c){
                sum+=v[i];
                cnt++;
            }else{
                break;
            }
        }
        cout<<cnt<<'\n';
    }

    return 0;
}