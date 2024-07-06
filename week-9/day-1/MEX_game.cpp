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
       map<int,int>m;
       vector<int>v(n);
       for(int i=0;i<n;i++)
       {
            cin>>v[i];
            m[v[i]]++;
       }
       int mx=*max_element(v.begin(),v.end());
       int cnt=0,ans=mx+1;
       for(int i=0;i<=mx;i++)
       {
          if(m[i]==0){
            ans=i;
            break;
          }
          else if(m[i]==1){
            cnt++;
          }
          if(cnt==2){
            ans=i;
            break;
          }
       }
       cout<<ans<<'\n';

    }
    return 0;
}