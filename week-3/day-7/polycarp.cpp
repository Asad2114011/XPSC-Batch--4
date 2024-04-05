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
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        vector<int>b;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(m[v[i]]==1)
            {
                b.push_back(1);
            }
            else{
                m[v[i]]--;
                b.push_back(0);
            }         
        }
        for(int i=b.size()-1;i>=0;i--)
        {
           if(b[i]==0){
            break;
           }
           else{
            cnt++;
           }
        }
        cout<<n-cnt<<'\n';

    }
    return 0;
}