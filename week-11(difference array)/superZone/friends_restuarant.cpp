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
        vector<int>x(n),y(n);
        for(int i=0;i<n;i++)cin>>x[i];
        for(int i=0;i<n;i++)cin>>y[i];
        vector<int>diff(n);
        for(int i=0;i<n;i++)
        {
            diff[i]=y[i]-x[i];
        }
        sort(diff.rbegin(),diff.rend());

        int l=0,r=n-1,cnt=0;
        while(l<r){
            while(r>l&&diff[l]+diff[r]<0){
                r--;
            }
            if(l>=r)break;
            cnt++;
            r--;
            l++;
        }
        cout<<cnt<<'\n';

    }
    return 0;
}