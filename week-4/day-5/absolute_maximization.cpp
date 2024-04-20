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
        int Or=0,And=-1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            Or|=x;
            And&=x;
        }
        cout<<(Or-And)<<'\n';
    }
    return 0;
}