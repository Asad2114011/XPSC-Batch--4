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
    cin>>n;
    string a,b;
    cin>>a>>b;
    bool x=false;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='G'&&b[i]=='B'||
           a[i]=='B'&&b[i]=='G'){
            continue;
           }
        else if(a[i]!=b[i]){
            x=true;
            break;
        }
    }
    if(x)cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
}
    return 0;
}