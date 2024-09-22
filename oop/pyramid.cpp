#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int spc=n-1;
    int x=1;
    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=spc;i++)cout<<" ";
        for(int i=1;i<=x;i++)cout<<"*"<<" ";
        cout<<'\n';
        spc--;
        x++;
    }

    return 0;
}