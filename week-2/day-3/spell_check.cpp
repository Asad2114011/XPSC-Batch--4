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
        vector<int>v(26,0);
        if(s.size()!=5){
            cout<<"NO"<<'\n';
        }
        else{
            bool x=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='T')
            {
                x=true;
                v[s[i]-'A']++;
            }
            else v[s[i]-'a']++;
        }
        if(!x){
            cout<<"NO"<<'\n';
        }
        else{
        if(v['T'-'A']==1&&v['i'-'a']==1&&v['m'-'a']==1
            &&v['u'-'a']==1&&v['r'-'a']==1){
                cout<<"YES"<<'\n';
            }
            else{
                cout<<"NO"<<'\n';
            }
    }
    }
    }
    return 0;
}