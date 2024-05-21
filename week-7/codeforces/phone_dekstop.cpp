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
        int x,y;
        cin>>x>>y;
        int a=(y+1)/2;
        int ua=y*4;
        int r=max(0,a*15-ua);

        int rb=max(0,x-r);
        int b=(rb+14)/15;
        int total=a+b;
        cout<<total<<'\n';
    }

    return 0;
}