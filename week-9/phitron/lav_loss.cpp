#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   double a,b,c;
   cin>>a>>b>>c;
   double x=1-(b/100);
   double y=a/x;
   double res=y+((y*c)/100);
   cout<<fixed<<setprecision(2)<<res<<'\n';
    return 0;
}