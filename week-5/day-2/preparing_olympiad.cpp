#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,mn,mx,d;
    cin >> n>>mn>>mx>>d;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int cnt=0;
    for (int i = 0;i < (1 << n);i++) {
        long long sum=0;
        int x=INT_MAX,y=INT_MIN;
        for (int k = 0;k < n;k++) {
            if ((i >> k) & 1) {
                sum+=v[k];
                x=min(x,v[k]);
                y=max(y,v[k]);
              //  cout<<sum<<" "<<v[k]<<" "<<x<<" "<<y<<'\n';
            }
        }
            if(sum>=mn&&sum<=mx&&(y-x>=d))cnt++;
    }
        cout<<cnt<< '\n';

    return 0;
}