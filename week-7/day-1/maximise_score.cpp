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
        int mn=INT_MAX,mx;
        for(int i=1;i<n-1;i++)
        {
            int x=abs(v[i]-v[i+1]);
            int y=abs(v[i]-v[i-1]);
            mx=max(x,y);
            mn=min(mn,mx);
        }
        mn=min({abs(v[0]-v[1]),mn,abs(v[n-1]-v[n-2])});
        cout<<mn<<'\n';
    }

    return 0;
}