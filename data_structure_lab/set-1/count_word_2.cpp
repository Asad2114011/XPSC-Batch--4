#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,d;
    getline(cin,s);
    cin>>d;
    bool found;
    int cnt=0;
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
            cnt++;
            i+=d.size();
        }
    }
    if(cnt){
        cout<<cnt<<'\n';
    }
    else{
        cout<<"Substring not found"<<'\n';
    }

    return 0;
}