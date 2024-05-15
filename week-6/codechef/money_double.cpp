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
        int x,y;
        cin>>x>>y;
        long long a=x,b=x;
        for(int i=0;i<y;i++){
            a*=2;
        }
        if(x<1000){
            b+=1000;
            y--;
        }
        for(int i=0;i<y;i++){
           b*=2;
        }
        long long mx=max(a,b);
        cout<<mx<<'\n';
    }

    return 0;
}