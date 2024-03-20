#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    vector<bool>v(n+1,false);
    for(int i:a)
    {
        v[i]=true;
    }
    v[0]=true;
    for(int i=0;i<v.size();i++)
    {
        if(!v[i]){
            cout<<i<<'\n';
            break;
        }
    }
    return 0;
}