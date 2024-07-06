#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin>>s;

  map<char,int>m;
  for(int i=0;i<s.size();i++)
  {
    m[s[i]]++;
  }
  int t=0;
  char ch;
  for(auto p:m)
  {
    if(p.second%2!=0){
         ch=p.first;
         t++;
    }
    if(t==2){
        cout<<"NO SOLUTION"<<'\n';
        return 0;
    }
  }
  string x="";
  string y="";
  for(auto p:m)
  {
    if(p.second%2==0||(p.second%2!=0&&p.second>1)){
        int j=p.second/2;
        while(j--){
            x+=p.first;
            y+=p.first;
        }
    }
  }
  reverse(y.begin(),y.end());
  if(t==1){
    x+=ch;
  } 
  x+=y;
  cout<<x<<'\n';
  
    return 0;
}