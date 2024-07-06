#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   int a,b,c;
   cin>>a>>b>>c;
   bool x=false;

   for(int i=0;i<=c/a;i++)
   {
    for(int j=0;j<=c/b;j++)
    {
        if(a*i+b*j==c){
           x=true;
           cout<<"YES"<<'\n';
           return 0;
        }
    }
   }
   if(!x)cout<<"NO"<<'\n';
    return 0;
}