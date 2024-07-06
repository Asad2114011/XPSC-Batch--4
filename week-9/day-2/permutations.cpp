#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v;
    if(n==2||n==3){
        cout<<"NO SOLUTION"<<'\n';
        return 0;
    }
    if(n==1){
        cout<<1<<'\n';
        return 0;
    }
    if(n==4){
        cout<<"2 4 1 3"<<'\n';
        return 0;
    }
    for(int i=n;i>=1;i-=2)
    {
        v.push_back(i);
    }
    for(int i=n-1;i>=1;i-=2)
    {
        v.push_back(i);
    }
    for(int i:v)cout<<i<<" ";
    cout<<'\n';

    return 0;
}