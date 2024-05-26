#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    int pos=-1;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==k){
            pos=i;
        }
    }
    if(pos==-1){
        cout<<"Not found"<<'\n';
    }
    else{
    for(int i=pos;i<n-1;i++)
    {
        v[i]=v[i+1];
    }
    n--;
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<'\n';
    }
    return 0;
}