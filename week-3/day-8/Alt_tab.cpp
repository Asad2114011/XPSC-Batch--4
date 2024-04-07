#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<string>v;
    map<string,int>m;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        v.push_back(x);
        m[x]=1;
    }
    string s="";
    for(int i=n-1;i>=0;i--)
    {
        string x=v[i];int y=x.size()-1;
        if(m[x]==1){
            s+=x[y-1];
            s+=x[y];
            m[x]=0;
       }
    }
    cout<<s<<'\n';
    return 0;
}