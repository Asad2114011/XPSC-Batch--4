#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int ans;
    if(n%2==0)
    {
        ans=n/2;
        cout<<ans<<'\n';
        for(int i=1;i<=ans;i++)cout<<2<<" ";
        cout<<'\n';
    }
    else{
        n-=3;
        ans=n/2;
        cout<<ans+1<<'\n';
        for(int i=1;i<=ans;i++)cout<<2<<" ";
        cout<<3<<'\n';
    }

    return 0;
}