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
    int a[n];
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<min)min=a[i];
    }
    long long cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=min)
        {
            cnt+=(a[i]-min);
        }
    }
    cout<<cnt<<'\n';

}
    return 0;
}