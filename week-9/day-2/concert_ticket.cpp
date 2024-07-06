#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    multiset<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(int i=0;i<k;i++)
    {
        int x;
        cin>>x;
        auto it=s.upper_bound(x);
        if(it==s.begin()){
            cout<<-1<<'\n';
        }
        else{
            cout<<*(--it)<<'\n';
            s.erase(it);
        }
    }
   
    return 0;
}