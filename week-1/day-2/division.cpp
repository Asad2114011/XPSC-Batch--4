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
    int x;
    cin>>x;
    if(x>=1900)cout<<"Division 1"<<'\n';
    else if(x>=1600&&x<=1899)cout<<"Division 2"<<'\n';
    else if(x>=1400&&x<=1599)cout<<"Division 3"<<'\n';
    else if(x<=1399)cout<<"Division 4"<<'\n';
}   
    return 0;
}