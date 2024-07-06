#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    long long move=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1]){
            int d=v[i]-v[i+1];
            v[i+1]=v[i];
            move+=d; 
        }
    }
    cout<<move<<'\n';

    return 0;
}
