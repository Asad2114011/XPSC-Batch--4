#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,d,n;
    getline(cin,s);
    cin>>d>>n;
    bool found,match=false;
    for(int i=0;i<s.size();i++)
    {
        found=true;
        for(int j=0;j<d.size();j++)
        {
            if(s[i+j]==d[j]){
                continue;
            }
            else{
                found=false;
                break;
            }
        }
        if(found){
            s.replace(i,d.size(),n);
            i+=d.size();
            match=true;
        }
    }
    if(match){
        cout<<"Final string:"<<s<<'\n';
    }
    else{
        cout<<"Substring not found"<<'\n';
    }

    return 0;
}