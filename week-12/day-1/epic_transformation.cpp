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

        priority_queue<int>q;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }
       for(auto p:m){
            q.push(p.second);
       }
       int s=n;
       while(q.size()>=2)
       {
            int x=q.top();
            q.pop();
            int y=q.top();
            q.pop();
            x--;
            y--;
            s-=2;
            if(x)q.push(x);
            if(y)q.push(y);
       }
       cout<<s<<'\n';

    }
    return 0;
}