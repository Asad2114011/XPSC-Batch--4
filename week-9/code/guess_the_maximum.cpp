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
        for(int i=0;i<n;i++){
           cin>>v[i];
        }
        int result=1e9;
    for(int i=0;i<n-1;i++)
    {
        int mx=max(v[i],v[i+1]);
        result=min(result,mx);
    }
    cout<<result-1<<'\n';
    }
    return 0;
}