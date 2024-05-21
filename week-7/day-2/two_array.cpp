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
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool f=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                if(a[i]+1==b[i])
                {
                    continue;
                }
                else{
                    f=false;
                    break;
                }
            }
        }
        if(f)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }

    return 0;
}