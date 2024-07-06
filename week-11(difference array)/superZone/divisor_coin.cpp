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
        vector<int>v;
        v.push_back(n);
        while(__builtin_popcount(n)>1)
        {
            int x=__builtin_ctz(n);
            n-=(1<<x);
            v.push_back(n);
        }
        while(n>1)
        {
            n/=2;
            v.push_back(n);
        }
        cout<<v.size()<<'\n';
        for(int i:v)cout<<i<<" ";
        cout<<'\n';

    }
    return 0;
}