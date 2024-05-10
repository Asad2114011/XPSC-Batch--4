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
        int n=s.size();
        map<char,int>m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        char c=s[0];
        if(m[c]==s.size()||s.size()==1){
            cout<<"NO"<<'\n';
            continue;
        }

              string h=s.substr(1,s.size()-1);
              string j="";
              j+=h;
              j+=c;
              cout<<"YES"<<'\n'<<j<<'\n';

    }

    return 0;
}