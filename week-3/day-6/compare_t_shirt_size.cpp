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
    string a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"="<<'\n';
    }
    else {
    int a1=0,b1=0;
    char a2,b2;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='X')a1++;
        else{
            a2=a[i];
        }
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]=='X')b1++;
        else{
            b2=b[i];
        }
    }
    if(a2=='S'&&b2=='S')
    {
        if(a1>b1)cout<<"<"<<'\n';
        else cout<<">"<<'\n';
    }
    else if(a2=='L'&&b2=='L')
    {
        if(a1>b1)cout<<">"<<'\n';
        else cout<<"<"<<'\n';
    }
   else if(a2=='M'&&b2=='S'){
    cout<<">"<<'\n';
   }
   else if(a2=='S'&&b2=='M')
   {
    cout<<"<"<<'\n';
   }
   else if(a2=='M'&&b2=='L'){
    cout<<"<"<<'\n';
   }
   else if(a2=='L'&&b2=='M')
   {
    cout<<">"<<'\n';
   }
   else if(a2=='L'&&b2=='S')
   {
    cout<<">"<<'\n';
   }
   else if(a2=='S'&&b2=='L')
   {
    cout<<"<"<<'\n';
   }
 }
 }
    return 0;
}