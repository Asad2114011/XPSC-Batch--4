#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 int t;cin>>t;
 while(t--){
    int n;
    cin>>n;
    multiset<int>s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
        int cnt=0;
        while(!s.empty())
        {
            cnt++;
            int cur=*s.begin();
            while(cur)
            {
                auto f=s.find(cur);
                if(f!=s.end()){
                    s.erase(f);
                }
                else{
                    break;
                }
                cur++;
            }
        }
        cout<<cnt<<'\n';
 }
    return 0;
}