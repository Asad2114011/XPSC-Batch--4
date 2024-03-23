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
        string s;
        cin>>n>>s;
        vector<bool>v(n,false);
        if(s.size()!=5){
            cout<<"NO"<<'\n';
        }
        else{
        for(int i=0;i<n;i++)
        {
            if(s[i]=='T'||s[i]=='i'||s[i]=='m'
               ||s[i]=='u'||s[i]=='r'){
                v[i]=true;
               }
        }
        bool x=false;
        for(bool c:v)
        {
            if(!c){
                x=true;
                break;
            }
        }
        if(x)cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';

    }
    }
    return 0;
}