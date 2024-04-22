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
        string x="";
        for(int i=n-1;i>=0;i--)
        {
            if(i>=2&&s[i]=='0'){
               int a=(s[i-1]-'0')+(s[i-2]-'0')*10;
                x+='a'+(a-1);
                i-=2;
            }
            else{
                int a=s[i]-'0';
                x+='a'+(a-1);
            }
        }
        reverse(x.begin(),x.end());
        cout<<x<<'\n';
    }

    return 0;
}