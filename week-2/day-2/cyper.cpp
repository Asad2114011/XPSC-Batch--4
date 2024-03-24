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
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int h=0;
        while(n--)
        {
            int x;
            string y;
            cin>>x>>y;
            for(int i=0;i<x;i++)
            {
                if(y[i]=='D'){
                    a[h]++;
                }
                else {
                    a[h]--;
                }
            }
            h++;
        }
        for(int i:a)
        {
            if(i>9)cout<<i-10<<" ";
            else if(i<0)cout<<i+10<<" ";
            else cout<<i<<" ";
        }
        cout<<'\n';       
    }
    return 0;
}
