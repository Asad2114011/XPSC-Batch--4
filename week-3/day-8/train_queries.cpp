#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        map<int,pair<int,int>>m;
        for(int i=0;i<n;i++)
        {
            int v;
            cin>>v;
            if(m.count(v)==0)
            {
                m[v].first=i;
                m[v].second=i;
            }
            else{
                m[v].second=i;
            }
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            if(!m.count(l)||!m.count(r)||m[l].first>m[r].second){
            cout<<"NO"<<'\n';}
            else {
                cout<<"YES"<<'\n';
            }
          
        }
    }
    return 0;
}