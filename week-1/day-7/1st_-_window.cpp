#include<bits/stdc++.h>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int a[],long long int n, long long int k)
{
    int l=0,r=0;
    vector<long long>v;
    queue<long long>q;
    while(r<n)
    {
        if(a[r]<0)q.push(a[r]);
        if(r-l+1==k)
        {
            if(!q.empty())
            {
                v.push_back(q.front());
            }
            else{
                v.push_back(0);
            }
            if(a[l]==q.front())q.pop();
            l++;
            r++;
        }
        else{
            r++;
        }
    }
    return v;
}
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int k;
    cin>>k;
    vector<long long>v=printFirstNegativeInteger(a,n,k);
    for(int i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}