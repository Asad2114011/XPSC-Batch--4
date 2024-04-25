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
        bool x=false;
        for(int i=1;i<n-1;i++)
        {
          if(v[i]>v[i-1]&&v[i]>v[i+1])
          {
            x=true;
            cout<<"YES"<<'\n'<<i<<" "<<i+1<<" "<<i+2<<'\n';
            break;
          }       
        }
        if(!x)cout<<"NO"<<'\n';
    }

    return 0;
}