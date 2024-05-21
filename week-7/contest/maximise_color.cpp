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
        int x,y,z;
        cin>>x>>y>>z;
        int sum=0;
        int cnt=0;
        sum+=min(x,1)+min(y,1)+min(z,1);

       if(x>0)x--;
       if(y>0)y--;
       if(z>0)z--;
       
       vector<int>v(3);
       v[0]=x,v[1]=y,v[2]=z;
       sort(v.rbegin(),v.rend());
       int a=v[0],b=v[1],c=v[2];

        if(a>0&&b>0){
            sum++;
            a--;
            b--;
        }
        if(a>0&&c>0){
            sum++;
            a--;
            c--;
        }
        if(c>0&&b>0)
        {
            sum++;
            c--;
            b--;
        }
        cout<<sum<<'\n';
    }

    return 0;
}