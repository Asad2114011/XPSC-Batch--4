#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int n=s.size();
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}