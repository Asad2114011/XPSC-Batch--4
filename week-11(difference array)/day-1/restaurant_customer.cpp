#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    map<int,int>m;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        m[l]++;
        m[r+1]--;

    }
    int sum=0;
    int mx=0;
    for(auto p:m)
    {
        sum+=p.second;
        mx=max(mx,sum);
    }
    cout<<mx<<'\n';
    return 0;
}