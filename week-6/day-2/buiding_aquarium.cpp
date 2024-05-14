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
        int n,h;
        cin>>n>>h;
        vector<long long>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());

        auto ok=[&](long long mid)
        {
            long long cnt=0;
            for(int i=0;i<n;i++){
                if(v[i]<mid){
                    cnt+=(mid-v[i]);
                }
                else{
                    break;
                }
            }
            return cnt<=h;
        };
        long long l=0,r=(2*1e9),mid,ans=0;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(ok(mid))
            {
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}