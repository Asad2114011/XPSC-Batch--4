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
        string s;
        cin>>s;
        vector<pair<char,int>>v;
        char x=s[0],y=s[s.size()-1];
        char mx=max(x,y);
        char mn=min(x,y);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=mn&&s[i]<=mx){
            v.push_back({s[i],i});
            }
        }
        int sum=0;
        sort(v.begin(),v.end(),[](const pair<char,int>&a,const pair<char,int>&b){
            return a.first<b.first;
        });
        vector<int>a;
        for(int i=0;i<v.size()-1;i++)
        {
            int d=(v[i+1].first-'a'+1)-(v[i].first-'a'+1);
            sum+=d;
       }
        cout<<sum<<" "<<v.size()<<'\n';
        if(v[0].first==s[0]){
        for(auto i:v)cout<<i.second+1<<" ";
        }
        else{
            for(int i=v.size()-1;i>=0;i--){
                cout<<v[i].second+1<<" ";
            }
        }
        cout<<'\n';
    }
    return 0;
}