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
        string s;
        cin>>s;
        vector<bool>x(n+1,false);
        vector<int>cost(n+1);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')x[i+1]=true;
            else x[i+1]=false;
        }
        for(int i=n;i>=1;i--)
        {
            for(int j=i;j<=n;j+=i)
            {
                if(!x[j]){
                    cost[j]=i;
                }
                else{
                    break;
                }
            }
        }
        long long sum=0;
        for(int i:cost){
            sum+=i;
        }
        cout<<sum<<'\n';

    }
    return 0;
}