#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int loc=-1;
    for(int i=0;i<n;i++)
    {
        if(v[i]==k){
            loc=i+1;
            break;
        }
    }
    if(loc==-1)cout<<"Not found"<<'\n';
    else cout<<loc<<'\n';

    return 0;
}