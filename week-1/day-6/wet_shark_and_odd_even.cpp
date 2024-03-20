#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n;
    cin>>n;
    vector<ll>a(n);
    ll sum=0;
   ll s_odd=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]%2!=0&&a[i]<s_odd)
        {
            s_odd=a[i];
        }
    }
    if(sum%2==0){
        cout<<sum<<'\n';
        return 0;
    }
    cout<<sum-s_odd<<'\n';

    return 0;
}