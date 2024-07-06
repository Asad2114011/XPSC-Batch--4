#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    int r=k;
    string z="";
    for(auto p:m)
    {
        int x=r-p.second;
        if(x<=0){
          z+=p.first;
          break;
        }
        else{
            z+=p.first;
            r-=p.second;
        }
    }
    for(char i:z)
    {
        if(k<=0)break;
        for(int j=0;j<n;j++)
        {   
            if(k<=0){
                break;
            }
            if(s[j]==i){
                k--;
                s[j]='0';
            }
        }
    }
    for(auto i:s)
    {
        if(i!='0'){
            cout<<i;
        }
    }
    cout<<'\n';
    return 0;
}