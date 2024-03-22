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
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        string x=s+s;
        int cnt=0,mx=0;
        bool b=false;
        for(int i=0;i<2*n;i++)
        {
             if(x[i]=='g')
            {
                b=false;
                mx=max(mx,cnt);
            }
           else if(x[i]==c&&!b)
            {
                b=true;
                cnt=0;
            }
            if(b)cnt++;
        }
        cout<<mx<<'\n';
        
    }
    return 0;
}