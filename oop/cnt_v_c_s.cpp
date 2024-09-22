#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    
    int v=0,cons=0,b=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')b++;
        else if(s[i]=='a'||s[i]=='e'||s[i]=='i' ||s[i]=='o'||s[i]=='u')v++;
        else cons++;
    }
    cout<<"vowel:"<<v<<"consonant:"<<cons<<"blank space:"<<b<<'\n';
    return 0;
}