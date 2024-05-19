#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b;
    cin>>n>>a>>b;
    
    int m=0;
    for(int i=1;i<n;i++)
    {
        int ax=a/i;
        int bx=b/(n-i);
        int mn=min(ax,bx);
        m=max(m,mn);
    }
    cout<<m<<'\n';

    return 0;
}