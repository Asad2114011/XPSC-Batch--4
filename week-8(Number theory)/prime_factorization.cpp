#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    map<int,int>cnt;

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                cnt[i]++;
                n/=i;
            } 
        }
    }
    if(n>1){
        cnt[n]++;
    }

    for(auto p:cnt){
        cout<<p.first<<"->"<<p.second<<'\n'; 
    }

    return 0;
}