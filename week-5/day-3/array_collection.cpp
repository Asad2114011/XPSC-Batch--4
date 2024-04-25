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
    long long val=0,m=0,k;
    for(int i=0;i<n;i++){
        cin>>v[i];
        val+=v[i];
        if(val<0){
            k=abs(val);
            m=max(k,m);
        }
    }
    cout<<m<<'\n';
   
 }
    return 0;
}