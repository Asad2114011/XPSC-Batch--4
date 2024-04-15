#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(m+1);
    for(int i=0;i<=m;i++)
    {
        cin>>a[i];
    }
    vector<vector<int>>all_marks;
    for(int mask=0;mask<=m;mask++)
    {
        vector<int>v;
        for(int k=0;k<n;k++)
        {
            if((a[mask]>>k)&1)
            {
                v.push_back(1);
            }
            else{
                v.push_back(0);
            }
        }
        all_marks.push_back(v);
    }
    int ans=0;
    vector<int>fedor=all_marks[m];
    for(int i=0;i<m;i++)
    {
        vector<int>v=all_marks[i];
        int cnt=0;
        for(int k=0;k<n;k++)
        {
            if(fedor[k]!=v[k]){
                cnt++;
            }
        }
        if(cnt<=k)
        {
            ans++;
        }
    }
    cout<<ans<<'\n';
    return 0;
}