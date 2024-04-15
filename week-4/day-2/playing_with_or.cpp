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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int l=0,r=0;
        int cnt=0;
       while(r+k-1<n)
        {
            int x=k;
            bool y=false;
            while(x--)
            {
                if(v[l]%2!=0){
                    y=true;
                    break;
                }
                l++;
            }
            if(y)cnt++;
            r++;
            l=r;
        }
    cout<<cnt<<'\n';
    }

    return 0;
}