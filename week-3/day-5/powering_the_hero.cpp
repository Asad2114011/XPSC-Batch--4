#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    priority_queue<int,vector<int>>pq;
    long long sum=0;
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++)
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