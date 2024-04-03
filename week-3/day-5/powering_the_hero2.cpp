#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 ll t;
 cin>>t;
 while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    priority_queue<ll,vector<ll>>pq;
    long long sum=0;
    for(ll i=0;i<n;i++)cin>>v[i];
    for(ll i=0;i<n;i++)
    {
        if(v[i]>0){
            pq.push(v[i]);
        }
        else if(v[i]==0)
        {
            if(!pq.empty()){
            sum+=pq.top();
            pq.pop();
            }
        }
    }
    cout<<sum<<'\n';
 }
    return 0;
}