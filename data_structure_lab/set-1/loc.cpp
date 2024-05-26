#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;           //logn
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int l=0,r=n-1,mid,ans=-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(v[mid]==k)
        {
            ans=mid;
            break;
        }
        else if(v[mid]<k){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<"The location of k is : "<<ans+1<<'\n';

    return 0;
}