#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,q;
        cin>>n>>q;
        vector<long long>v(n);
        long long total_sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            total_sum+=v[i];
        }
        vector<long long>pre(n+1);
        for(int i=1;i<=n;i++)
        {
            pre[i]=pre[i-1]+v[i-1];
        }
        while(q--)
        {
            long long l,r,k;
            cin>>l>>r>>k;
            long long sum=(total_sum-pre[r])+pre[l-1]+((r-l+1)*k);
            if(sum%2!=0)cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
    return 0;
}