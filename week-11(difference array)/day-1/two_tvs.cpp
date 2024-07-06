#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    map<int,int>v;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        v[l]++;
        v[r+1]--;
    }
    ll sum=0;
    bool f=true;
    for(auto p:v){
        sum+=p.second;
        if(sum>2){
            f=false;
            break;
        }
    }
    if(f)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}