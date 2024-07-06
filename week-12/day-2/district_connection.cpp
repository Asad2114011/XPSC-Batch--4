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
        vector<int>v(n+1);
        set<int>s;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            s.insert(v[i]);
        }

        if(s.size()==1){
            cout<<"NO"<<'\n';
            continue;
        }
        int f=0;
        for(int i=1;i<=n;i++)
        {
            if(v[i]==v[1]){
                f++;
            }
            else{
                break;
            }
        }
        cout<<"YES"<<'\n';
        for(int i=2;i<=n;i++)
        {
            if(v[1]!=v[i]){
                cout<<1<<" "<<i<<'\n';
            }
            else{
                cout<<f+1<<" "<<i<<'\n';
            }
        }



    }
    return 0;
}