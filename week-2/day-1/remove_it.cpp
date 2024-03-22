#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=m)
        {
            v.push_back(a[i]);
        }
    }
    for(int i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}