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
        int n,m;
        cin>>n>>m;
        vector<int>v[n];
        int y=n;
        int h=0;
        while(n--)
        {
            string x;
            cin>>x;
            int s;
            for(int i=0;i<m;i++)
            {
                s=(x[i]-'a');
                v[h].push_back(s);
            }
            h++;
        }
        int x=INT_MAX;
        for(int i=0;i<y;i++)
        {
          for(int k=i+1;k<y;k++){
            int s=0;
           for(int j=0;j<m;j++)
           {
                int f=abs(v[i][j]-v[k][j]);
                s+=f;
           }
           x=min(x,s);
           //cout<<'\n'; 
        }
        }
        cout<<x<<'\n';
    }
    return 0;
}