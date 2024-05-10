#include<bits/stdc++.h>
using namespace std;
int main()
{  ios::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x=min(n,m);
        int y=max(n,m);
        cout<<x<<" "<<y<<'\n';
    }

    return 0;
}