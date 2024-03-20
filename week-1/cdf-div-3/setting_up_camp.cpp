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
    int a,b,c;
    cin>>a>>b>>c;
   int total=a+b+c;
   int tent=a;
   total-=a;
   if(b>0){
   if(b==1){c-=2;tent+=1;total-=3;}
   else if(b==2){c-=1;tent+=1;total-=3;}
   else if(b==3){tent+=1;total-=3;}
   else if(b>3){
    int d=b/3;
    tent+=d;
    int h=b%3;
    total-=(3*d);
    if(h==1){c-=2;tent+=1;total-=3;}
   else if(h==2){c-=1;tent+=1;total-=3;}
   }
   }
   if(c>0) {
            int g=(c+2)/3;
            tent +=g;
            total -=g*3;
        }
    if(c<0){cout<<"-1"<<'\n';}
    else{
    cout<<tent<<'\n';}
    
}
    return 0;
}