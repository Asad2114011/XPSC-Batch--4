#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    int x=0;
    for(ll i=n;i<=m;i*=2)
    {
        x++;
    }
    cout<<x<<'\n';
    return 0;
}