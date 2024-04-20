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
        int pos=__lg(n);
        int ans=1;
        bool x=false;
        for(int i=pos-1;i>=0;i--)
        {
           if((n&(1<<i))){
            x=true;
           }
           else{
            if(x)ans*=2;
           }
        }
         cout<<ans<<'\n';
    }
    return 0;
}