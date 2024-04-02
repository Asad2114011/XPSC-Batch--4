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
        int a[n][n-1];
        int c[n-1][n];
        vector<int>v;
        map<int,int>m;
        map<int,int>m2;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                cin>>a[i][j];
            }
        }
        int last,last2;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n;j++)
            {
                c[i][j]=a[j][i];
            }
        }
        for(int i=n-2;i<n-1;i++)
        {
            for(int j=0;j<n;j++)
            {
                 m2[c[i][j]]++;
                 if(m2[c[i][j]]==n-1)last=c[i][j];
            }
        }
         for(int i=0;i<n-1;i++)
        {
            if(i==n-2)
            {
                for(int j=0;j<n;j++)
                {
                    if(m2[c[i][j]]!=n-1)last2=c[i][j];
                }
            }
            else{
            for(int j=0;j<n;j++)
            {
               m[c[i][j]]++;
               if(m[c[i][j]]==n-1){
                v.push_back(c[i][j]);
               }
            }
         }
        }
        v.push_back(last2);
        v.push_back(last);
        for(int i:v)cout<<i<<" ";
        cout<<'\n';
    }
    return 0;
}