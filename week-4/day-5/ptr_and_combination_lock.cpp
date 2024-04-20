#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int m=1<<n;
    bool x=false;
    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if((1<<j)&i)sum+=v[j];
            else sum-=v[j];
        }
        if(sum%360==0){
            x=true;
            break;
        }
    }
    if(x)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}