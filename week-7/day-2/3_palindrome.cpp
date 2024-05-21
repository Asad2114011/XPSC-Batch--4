#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    
    string s="";
    while(n>0){

    for(char x='a';x<='b';x++)
    {
        int j=2;
        while(j--)
        {
            if(n<=0){
                break;
            }
            s+=x;
            n--;
        }
    }
    }
    cout<<s<<'\n';
    

    return 0;
}