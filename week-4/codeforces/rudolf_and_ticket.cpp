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
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>left(n);
        vector<int>right(m);
        for(int i=0;i<n;i++)cin>>left[i];
        for(int i=0;i<m;i++)cin>>right[i];
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(left[i]+right[j]<=k)cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
