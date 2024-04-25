#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 int t;
 cin>>t;
 while(t--){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>v(31,0);
    for (int i = 0;i < 31;i++) {
        for (int k = 0;k < n;k++) {
            if ((1<<i) & a[k]) {
                v[i]++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        bool x=true;
        for(int j=0;j<31;j++)
        {
            if((v[j]%i)!=0)
            {
                x=false;
                break;
            }
        }
        if(x)cout<<i<<" ";
    }
   cout<<'\n';
 }
    return 0;
}