#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    vector<int>m(a);
    for(int i=0;i<a;i++){
       cin>>m[i];
    }
    cin>>b;
    vector<int>n(b);
    for(int i=0;i<b;i++){
       cin>>n[i];
    }
    vector<bool>v(101);
    memset(v,false,v.size());
    int x=min(a,b);
    int y=max(a,b);
    int cnt=0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
           if(a<b){
              if(!v[j])
              {
                int l=abs(m[i]-n[j]);
                if(l==0||l==1){
                    cnt++;
                    v[j]=true;
                }
              }
           }else{
            if(!v[j])
              {
                int l=abs(n[i]-m[j]);
                if(l==0||l==1){
                    cnt++;
                    v[j]=true;
                }
              }
           }
        }
    }
    cout<<cnt<<'\n';

    return 0;
}