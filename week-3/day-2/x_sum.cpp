#include<bits/stdc++.h>
using namespace std;
 vector<pair<int,int>>d={{-1,1},{-1,-1},{1,1},{1,-1}};
 long long a[205][205];
 int n,m;
bool valid(int i,int j)
{
    if(i>=n||i<0||j<0||j>=m)
    return false;
return true;
}
int bishop(int si,int sj)
{
    long long sum=a[si][sj];
    for(int i=0;i<4;i++)
    {
        int ci=si,cj=sj;
        while(valid(ci,cj)){
         ci+=d[i].first;
         cj+=d[i].second;
         if(valid(ci,cj))
         {
            sum+=a[ci][cj];
         }
        }
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        long long ans=0;
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               long long x= bishop(i,j);
               if(x>ans){
                ans=x;
               }
             }
        }
        cout<<ans<<'\n';
       for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                a[i][j]=0;
            }
        }
    }
    return 0;
}
