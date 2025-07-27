#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>pw(n);
    for(int i=0;i<n;i++){
        int val,weight;
        cin>>val>>weight;
        pw[i]={val,weight};
    }
    vector<pair<float,int>>pwf(n);
    for(int i=0;i<n;i++){
        int x=pw[i].first,y=pw[i].second;
        float fraction=x/y*1.0;
        pwf[i]={fraction,i};
    }
    sort(pwf.rbegin(),pwf.rend());

    float total=0.0;
    for(int i=0;i<n;i++){
        int idx=pwf[i].second;
        if(m==0)break;
        if(pw[idx].second<=m){
            total+=pw[idx].first;
            m-=pw[idx].second;
        }
        else{
            total+=pwf[idx].first*m;
            m=0;
        }
    }
    cout<<total<<'\n';

    return 0;
}