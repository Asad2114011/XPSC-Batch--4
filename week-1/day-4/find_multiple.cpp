#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    bool x=false;
    for(int i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            cout<<i<<'\n';
            x=true;
            break;
        }
    }
    if(!x)
    {
        cout<<-1<<'\n';
    }
    return 0;
}