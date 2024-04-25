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
        long long a,b,n,s;
        cin>>a>>b>>n>>s;
        long long x=s/n;
        if(a*n<=s){
            s-=(a*n);
        }
        else{
            s-=(n*x);
        }
        if((s-b)<=0)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }

    return 0;
}