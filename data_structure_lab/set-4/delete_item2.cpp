#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    int pos=-1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==k){
            pos=i;
        }
    }
    v.erase(v.begin()+pos);
    for(int i:v)cout<<i<<" ";
    cout<<'\n';

    return 0;
}