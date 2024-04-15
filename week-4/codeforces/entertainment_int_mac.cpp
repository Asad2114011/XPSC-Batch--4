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
        int y=s.size();
        bool x=false;
        for(int i=0;i<y/2;i++)
        {
            if(s[i]==s[y-i-1])continue;
            if(s[i]>s[y-i-1]){
                x=true;
            }
            else{
                break;
            }
        }
        string v=s;
        reverse(v.begin(),v.end());
        if(x){
            cout<<v+s<<'\n';
        }
         else 
        {
            cout<<s<<'\n';
        }
    }

    return 0;
}