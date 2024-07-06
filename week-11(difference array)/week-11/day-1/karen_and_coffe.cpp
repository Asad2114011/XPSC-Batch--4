#include<bits/stdc++.h>
using namespace std;
const int s=200005;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k,q;
    cin>>n>>k>>q;
    
    vector<int>v(s,0);
    while(n--)
    {
        int l,r;
        cin>>l>>r;
        v[l]++;
        v[r+1]--;
    }
    for(int i=1;i<s;i++)
    {
        v[i]=v[i-1]+v[i];
    }
    vector<int>a(s,0);
    for(int i=0;i<s;i++)
    {
        if(v[i]>=k)a[i]=1;
    }
    for(int i=1;i<s;i++)
    {
        a[i]=a[i-1]+a[i];
    }
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        int cnt=a[y]-a[x-1];
        cout<<cnt<<'\n';
    }

    return 0;
}