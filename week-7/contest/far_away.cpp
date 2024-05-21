
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
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        int a=abs(v[i]-1);
        int b=abs(v[i]-m);
        sum+=max(a,b);
    }
    cout<<sum<<'\n';
  }
    return 0;
}
