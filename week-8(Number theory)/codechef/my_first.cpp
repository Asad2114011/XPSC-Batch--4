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
        string s;
        cin>>s;

        int aMn=0,aMx=0,yMn=0,yMx=0;

        if(s[0]=='1')  aMn=-10;
        if(s[1]=='1')  aMx=10;
        if(s[2]=='1')  yMx=10;
        if(s[3]=='1')  yMn=-10;
        
        int result=(aMx - aMn +1 )*(yMx - yMn +1);
        cout<<result<<'\n';

    }
    return 0;
}