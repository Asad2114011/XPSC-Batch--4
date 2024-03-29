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
    int n;
    string s;
    cin>>n>>s;
    bool x=true;
    if(n<4){
        cout<<"NO"<<'\n';
    }
    else if((s[0]!='m'&&s[0]!='M')||(s[n-1]!='w'&&s[n-1]!='W')){cout<<"NO"<<'\n';}
   else{
     for(int i=0;i<n-1;i++)
    {
        if((s[i]=='m'||s[i]=='M')&&(s[i+1]=='e'||s[i+1]=='E'||s[i+1]=='m'||s[i+1]=='M')){continue;}
         else if((s[i]=='e'||s[i]=='E')&&(s[i+1]=='o'||s[i+1]=='O'||s[i+1]=='e'||s[i+1]=='E')){continue;}
         else if((s[i]=='o'||s[i]=='O')&&(s[i+1]=='w'||s[i+1]=='W'||s[i+1]=='o'||s[i+1]=='O')){continue;}
         else if((s[i]=='w'||s[i]=='W')&&(s[i+1]=='w'||s[i+1]=='W')){continue;}
        else{
            x=false;
            break;
        }
    }
    if(x)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
}
    return 0;
}