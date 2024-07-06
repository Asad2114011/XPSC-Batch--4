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
        int a,b;
        cin>>a>>b;
        long long sum=a+b;
        if(sum%3!=0){
            cout<<"NO"<<'\n';
        }
        else{
            int x=min(a,b);
            int y=max(a,b);
            if((x*2)<y){
                cout<<"NO"<<'\n';
            }
            else{
            cout<<"YES"<<'\n';
            }
        }

    }
    return 0;
}