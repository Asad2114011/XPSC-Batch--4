#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;

        int dis=m;
        for(int i=0;i<=n-m;i++)
        {
            string x=a.substr(i,m);
            int y=0;
            for(int j=0;j<x.length();j++)
            {
                if(x[j]!=b[j]){
                    y++;
                }
            }
            dis=min(dis,y);
        }
        cout<<dis<<'\n';
    }
    return 0;
}