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
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        m[__lg(x)]++;
    }
    long long cnt=0;
    for(auto v:m)
    {
        int y=v.second;
        cnt+=(1LL*y*(y-1))/2;
    }
    cout<<cnt<<'\n';
 }
    return 0;
}