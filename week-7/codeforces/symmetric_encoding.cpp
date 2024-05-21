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
        map<char,int>m;
        map<char,char>m1;
    
        string r="";
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
            if(m[s[i]]==1)r+=s[i];
        }
        sort(r.begin(),r.end());
        int l=0,k=r.size()-1;
        while(l<=k){
            
            char x=r[l];
            char y=r[k];
            m1[x]=y;
            m1[y]=x;
            l++;
            k--;
        }
        for(int i=0;i<n;i++)
        {
            s[i]=m1[s[i]];
        }
        cout<<s<<'\n';

    }
    return 0;
}