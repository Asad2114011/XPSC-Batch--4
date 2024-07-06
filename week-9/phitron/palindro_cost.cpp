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
        int k;
        cin>>s>>k;
        long long x=0;
        int l=0,r=s.size()-1;
       while(l<=r)
        {
            if(s[l]!=s[r])
            {
                x+=abs(s[l]-s[r]);
            }
            l++;
            r--;
        }
        if(x<=k)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';

    }
    return 0;
}