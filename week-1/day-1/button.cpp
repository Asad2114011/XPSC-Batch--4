#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n,m;
    cin>>n>>m;
    int x;
    int sum=0;
    if(n==m){
        sum=2*n;
    }
    else{
    if(n>m)x=n;
    else x=m;
    sum=x+(x-1);
    }
    cout<<sum<<'\n';
    return 0;
}