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
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        bool b=true;
        if(sum%n==0){
        int f=sum/n;
        for(int i=0;i<n;i++)
        {
            if(v[i]%2!=f%2){
                b=false;
                break;
            }
        }
        if(b)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }

    return 0;
}