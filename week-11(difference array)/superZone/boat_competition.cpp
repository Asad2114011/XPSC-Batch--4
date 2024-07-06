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
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=1;i<=100;i++)
        {
            int l=0,r=n-1,cnt=0;
            while(l<r)
            {
                if(v[l]+v[r]==i)
                {
                    l++;
                    r--;
                    cnt++;
                }
                else if(v[l]+v[r]<i){
                    l++;
                }
                else{
                    r--;
                }
            }
            ans=max(ans,cnt);

        }
        cout<<ans<<'\n';

    }
    return 0;
}