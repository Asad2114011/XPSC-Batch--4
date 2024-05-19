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
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        vector<int>s(n);
        int cur=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            cur=max(v[i],cur);
            s[i]=cur;
        }

        vector<long long>a(n);
        a[0]=v[0];
        for(int i=1;i<n;i++){
            a[i]=a[i-1]+v[i];
        }
        while(q--)
        {
            int x;
            cin>>x;
            int l=0,r=n-1,mid,ans=-1;
            while(l<=r)
            {
                mid=l+(r-l)/2;
                if(s[mid]<=x){
                    ans=mid;
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
            if(ans==-1){
                cout<<0<<" ";
            }
            else{
                cout<<a[ans]<<" ";
            }
        }
        cout<<'\n';
    }

    return 0;
}
