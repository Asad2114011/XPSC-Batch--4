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
        long long n;
        cin>>n;
        long long sum=0;
        long long  cycle=n/9;
        sum+=(cycle*45);
        for(long long i=n-n%9+1;i<=n;i++)
        {
           sum+=1+(i-1)%9;
        }
        cout<<sum<<'\n';
    }

    return 0;
}