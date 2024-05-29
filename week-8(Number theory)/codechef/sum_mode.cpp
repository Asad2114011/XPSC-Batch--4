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
        int n;
        cin>>n;

        string s;
        cin>>s;
        long long cnt=0;;
        for(int i=0;i<n;i++)
        {
            int x=0,y=0;
            for(int j=i;j<n;j++){
               if(s[j]=='0'){
                x++;
               }
               else{
                y++;
               }
            if(x==y){
                cnt+=2;
            }
            else{
                cnt+=1;
            }
            }
        }
        cout<<cnt<<'\n';
       

    }
    return 0;
}