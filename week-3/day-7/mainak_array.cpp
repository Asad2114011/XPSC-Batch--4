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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        if(n==1){
            cout<<0<<'\n';
            continue;
        }
        int mx=v[n-1]-v[0];
        for(int i=1;i<n;i++)
        {
            mx=max(mx,v[i]-v[0]);
        }
        for(int i=0;i<n-1;i++)
        {
            mx=max(mx,v[n-1]-v[i]);
        }
        for(int i=1;i<n;i++)
        {
            mx=max(mx,v[i-1]-v[i]);
        }
        cout<<mx<<'\n';
    }

    return 0;
}