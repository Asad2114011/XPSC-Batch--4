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
        if(n==2){
            cout<<v[0]<<" "<<v[1]<<'\n';
            continue;
        }
        int mn=INT_MAX,pos=-1;
        for(int i=0;i<n-1;i++)
        {
            if(abs(v[i]-v[i+1])<mn)
            {
                pos=i;
                mn=abs(v[i]-v[i+1]);
            }
        }
        for(int i=pos+1;i<n;i++){
            cout<<v[i]<<" ";
        }
        for(int i=0;i<=pos;i++){
            cout<<v[i]<<" ";
        }
        cout<<'\n';

    }
    return 0;
}