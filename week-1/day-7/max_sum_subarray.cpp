#include<bits/stdc++.h>
using namespace std;
long maximumSumSubarray(int K, vector<int> &A , int N)
{
    int l=0,r=0;
    long long sum=0,ans=0;
    while(r<N){
        sum+=A[r];
    if((r-l+1)==K)
    {
        ans=max(ans,sum);
        sum-=A[l];
        l++;
        r++;
    }
    else{
        r++;
    }
    }
    return ans;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<maximumSumSubarray(k,v,n)<<'\n';
    return 0;
}