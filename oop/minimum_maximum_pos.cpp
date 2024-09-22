#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>v(n);
    int mn=INT_MAX,mx=INT_MIN;
    int mn_idx=-1,mx_idx=-1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>=mx){
            mx=v[i];
            mx_idx=i;
        }
        if(v[i]<=mn){
            mn=v[i];
            mn_idx=i;
        }
    }
    cout<<mn<<" "<<mn_idx<<'\n';
    cout<<mx<<" "<<mx_idx<<'\n';
    return 0;
}