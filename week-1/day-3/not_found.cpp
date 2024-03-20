#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    vector<bool>v(26,false);
    for(char c:s)
    {
        v[c-'a']=true;
    }
   bool x=false;
    for(int i=0;i<26;i++)
    {
        if(v[i]==false)
        {
            char ch='a'+i;
             x=true;
            cout<<ch<<endl;
            break;
        }
    }
    if(!x)cout<<"None"<<'\n';

    return 0;
}