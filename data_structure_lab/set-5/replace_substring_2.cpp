#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string x,y;
    cin>>x>>y;

    int pos=0;
    auto a=s.find(x);
    while(a!=string::npos)
    {
        s.replace(a,x.size(),y);
        a=s.find(x);
    }
   cout<<s<<'\n';
    return 0;
}