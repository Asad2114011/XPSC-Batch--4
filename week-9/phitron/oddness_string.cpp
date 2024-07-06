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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        while(k--)
        {
            int x,y;
            cin>>x>>y;
            map<char,int>m;
            for(int i=x-1;i<y;i++){
                m[s[i]]++;
            }
            int cnt=0;
            for(auto p:m)
            {
                if(p.second % 2!=0)cnt++;
            }
            cout<<cnt<<'\n';
        }

    }
    return 0;
}