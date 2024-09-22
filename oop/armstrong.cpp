#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=n;
    int sum=0;
    while(x>0){
        int d=x%10;
      //  cout<<d<<'\n';
        sum+=d*d*d;
        x/=10;
    }
 //   cout<<sum<<'\n';
    if(sum==n)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}