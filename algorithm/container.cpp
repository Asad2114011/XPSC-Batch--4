#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,w;
    cin>>n>>w;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int cnt=0;
    for(int i=0;i<n;i++){
        if(v[i]<=w){
            cnt++;
            w-=v[i];
        }
        else break;
    }
    cout<<cnt<<'\n';

    return 0;
}