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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        int a=v[0],b=v[1];
        bool f=true;
        for(int i=2;i<n;i++){
            if(v[i]%a==0||v[i]%b==0){
                continue;
            }
            else{
                f=false;
                break;
            }
        }
        if(f)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';

    }
    return 0;
}