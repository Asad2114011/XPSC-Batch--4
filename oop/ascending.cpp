#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[j]<v[i]){
                int tmp=v[i];
                v[i]=v[j];
                v[j]=tmp;
            }
                //swap(v[i],v[j]);
        }
    }
    for(int i:v)cout<<i<<" ";
    cout<<'\n';

    return 0;
}