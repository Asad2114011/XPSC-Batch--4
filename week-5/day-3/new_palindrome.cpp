#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int n=s.size();
    map<char,int>m;
    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    bool x=false;
    char c=s[0];
    for(int i=1;i<n-1;i++)
    {
        if(s[i]!=c){
        if(m[s[i]]>=2){
            x=true;
            break;
        }
        }
    }
    if(x)cout<<"YES"<<'\n';   
    else cout<<"NO"<<'\n';
    }
    return 0;
}