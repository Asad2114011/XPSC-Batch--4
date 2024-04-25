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
        int cnt=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]<0){
                cnt++;
                v[i]=abs(v[i]);
            }    
            sum+=v[i];
        }
        if(cnt%2==0){
            cout<<sum<<'\n';
        }
        else{
            int mn=*min_element(v.begin(),v.end());
            cout<<sum-2*mn<<'\n';
        }
    }

    return 0;
}