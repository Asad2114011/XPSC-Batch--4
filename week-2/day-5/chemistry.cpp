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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        int cnt=0;
        for(auto p:m)
        {
            if(p.second%2!=0)cnt++;
        }
        if(k>=n){
            cout<<"NO"<<'\n';
        }
        else if(cnt-1<=k){
            cout<<"YES"<<'\n';
        }
        else cout<<"NO"<<'\n';
    }
    return 0;
}