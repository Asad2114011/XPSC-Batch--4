#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>v(n);
        vector<int>a,b,x;
        map<int,int>m;
        for(int i=0;i<n;i++){
           cin>>v[i];
            m[v[i]]++;
            if(m[v[i]]==1&&v[i]<=n){
                a.push_back(v[i]);
            }
            else{
                b.push_back(v[i]);
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(m.find(i)==m.end())x.push_back(i);
        }
        if(x.empty())
        {
            cout<<0<<'\n';
            continue;
        }

        sort(b.rbegin(),b.rend());
        sort(x.begin(),x.end());
        int ans=0;

        for(int i=0;i<x.size();i++)
        {
            if(b.empty()){
                ans=-1;
                break;
            }
            int bi=b.back();
            b.pop_back();

            if(bi>(2*x[i])){
               ans++;
            }
            else{
                ans=-1;
               break;
            }
        }
        cout<<ans<<'\n';
    }       
    return 0;
}