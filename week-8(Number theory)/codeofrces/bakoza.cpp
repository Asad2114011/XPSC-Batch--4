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
        for(int i=0;i<n;i++)cin>>v[i];
        bool p=true;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1]){
                p=false;
                break;
            }
        }
        if(p){
            cout<<"YES"<<'\n';
        }
        else{
            bool x=true;
            for(int i=0;i<n-1;i++)
            {
                if(v[i]>v[i+1])
                {
                    if(v[0]<v[n-1]){
                        x=false;
                        cout<<"NO"<<'\n';
                        break;
                    }
                }
            }
            if(x)cout<<"YES"<<'\n';
        }

    }
    return 0;
}