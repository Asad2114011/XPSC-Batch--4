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
        int n,k;
        cin>>n>>k;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }
       int mx=INT_MIN;
       for(auto p:m)
       {
         mx=max(mx,p.second);
       }
       int diff=n-mx;
       if(diff<=k)cout<<"YES"<<'\n';
       else cout<<"NO"<<'\n';


    }
    return 0;
}