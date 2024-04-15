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
        long long sum=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            if(v[i]%3==1)cnt++;
        }
        if(sum%3==0){
            cout<<0<<'\n';
        }
        else if(sum%3==2){
            cout<<1<<'\n';
        }
        else{
            if(cnt>0){
                cout<<1<<'\n';
            }
            else{
                cout<<2<<'\n';
            }
        }
    }
    return 0;
}
