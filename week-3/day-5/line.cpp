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
        string s;
        cin>>s;
        vector<ll>v(n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            int L=i;
            int R=n-i-1;
            int cur=0;
            if(s[i]=='L'){
                sum+=L;
                cur=L;
            }
            else{
                sum+=R;
                cur=R;
            }
            int mx=max(L,R);
            v[i]=mx-cur;
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i:v)
        {
            sum+=i;
            cout<<sum<<" ";
        }
        cout<<'\n';
        
    }
    return 0;
}