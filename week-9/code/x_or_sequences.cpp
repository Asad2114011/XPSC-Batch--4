#include<bits/stdc++.h>
using namespace std;
int zero(int n){
    if(n==0)return 32;
    int cnt=0;
    while((n&1)==0){
        n>>=1;
        cnt++;
    }
    return cnt;
}
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
        
        int Xor=x^y;
        int pos=zero(Xor);
        int res=1<<(pos);
        cout<<res<<'\n';

    }
    return 0;
}