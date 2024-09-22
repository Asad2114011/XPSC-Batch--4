#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;

    bool ch=true;
    if(n==1)ch=false;
    else{
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0){
                ch=false;
                break;
            }
        }
    }
    if(ch)cout<<"Prime"<<'\n';
    else cout<<"Not prime"<<'\n';

    return 0;
}