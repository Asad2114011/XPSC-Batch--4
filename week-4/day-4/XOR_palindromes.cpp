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
        string s;
        cin>>s;
        int np=0,mp=0;
        int l=0,r=n-1;
        while(l<r)
        {
            if(s[l]==s[r])mp+=2;
            else np++;
            l++;
            r--;
        }
        string ans="";
        for(int i=0;i<=n;i++)
        {
            int x=i;
            x-=np;
            if(x<0){
                ans+='0';
                continue;
            }
           x=max((x%2),x-mp);
           x=max(0,x-(n%2));
           if(x==0)ans+='1';
           else ans+='0';
        }
        cout<<ans<<'\n';
    }

    return 0;
}