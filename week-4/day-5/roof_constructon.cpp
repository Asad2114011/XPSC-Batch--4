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
        int msb=__lg(n-1);
        int mn=(1<<msb);
        for(int i=mn-1;i>=0;i--)cout<<i<<" ";
        for(int i=mn;i<=n-1;i++)cout<<i<<" ";
        cout<<'\n';
    }

    return 0;
}