#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back({x,i+1});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        int v1=v[i].first;
        
        int l=i+1,r=n-1,sum=0;

        while(l<r)
        {
            sum=v1+v[l].first+v[r].first;
            if(sum==k){
                cout<<v[i].second<<" "<<v[l].second<<" "<<v[r].second<<'\n';
                return 0;
            }

            if(sum>k){
                r--;
            }
            else{
                l++;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<'\n';

    return 0;
}