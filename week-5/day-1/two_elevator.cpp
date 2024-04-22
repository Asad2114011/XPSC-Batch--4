
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
        int a,b,c;
        cin>>a>>b>>c;
        int x=a-1;
        long long y;
        if(c>b){
         y=(c-b)+(c-1);
        }
        else if(c<b)
        {
            if(c==1)y=b-c;
            else y=(b-c)+(c-1);
        }
        else{
            y=b-1;
        }
        if(x<y)cout<<1<<'\n';
        else if(x>y)cout<<2<<'\n';
        else cout<<3<<'\n';
    }
    return 0;
}