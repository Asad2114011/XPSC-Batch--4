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
        string s;
        cin>>s;
        int one=0,zero=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')zero++;
            else one++;
        }
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0'&&one>0){
                one--;
            }
            else if(s[i]=='1'&&zero>0)
            {
                zero--;
            }
            else{
                ans=s.size()-i;
                break;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}