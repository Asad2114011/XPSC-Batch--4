#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a+b==c)cout<<"+"<<'\n';
        else if(a-b==c)cout<<"-"<<'\n';
    }
    return 0;
}