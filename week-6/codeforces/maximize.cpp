#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    while(b!=0)
    {
        int tmp=b;
        b=a%b;
        a=tmp;
    }
    return a;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int mx=INT_MIN, y;
        for(int i=1;i<x;i++)
        {
            int v=gcd(x,i)+i;
            if(v>mx){
                mx=v;
                y=i;
            }
        }
        cout<<y<<'\n';
    }

    return 0;
}