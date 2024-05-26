#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string x;
    cin>>x;
    map<string,int>m;
    stringstream ss;
    ss<<s;
    string word;
    while(ss >> word)
    {
        m[word]++;
    }
    cout<<m[x]<<endl;
     
    return 0;
}