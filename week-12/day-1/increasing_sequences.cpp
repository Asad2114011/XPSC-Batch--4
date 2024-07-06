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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int x=1;
        for(int i=0;i<n;i++)
        {
            if(v[i]==x){
                x++;
                v[i]=x;
            }
            else{
                v[i]=x;
            }
            x++;
        }
        cout<<v[n-1]<<'\n';

    }
    return 0;
}