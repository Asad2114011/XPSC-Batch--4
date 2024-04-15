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
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        bool x=false;
        for(int i=0;i<=256;i++)
        {
            vector<int>a(n);
            int ans=0;
            for(int k=0;k<n;k++)
            {
                a[k]=v[k]^i;
            }
            for(int j=0;j<n;j++)
            {
                ans^=a[j];
            }
            if(ans==0){
                cout<<i<<'\n';
                x=true;
                break;
            }
        }
        if(!x){
            cout<<-1<<'\n';
        }
    }

    return 0;
}