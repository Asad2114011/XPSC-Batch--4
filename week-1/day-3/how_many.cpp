#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int s,t;
    cin>>s>>t;
    int sum=0;
    for(int i=0;i<=s;i++)
    {
        for(int j=0;j<=s;j++)
        {
            for(int k=0;k<=s;k++){
            if(i+k+j<=s&&(i*k*j)<=t){
                sum++;
            }
            }
        }
    }
    cout<<sum<<'\n';

    return 0;
}