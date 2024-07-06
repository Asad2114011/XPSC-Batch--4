#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<set<int>> v(n);
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            for (int j = 0; j < k; j++)
            {
                int x;
                cin >> x;
                s.insert(x);
                v[i].insert(x);
            }
        }
        int sz = s.size();
        int new_sz = 0;
        for(int i=1;i<=50;i++)
        {
            set<int>tmp;
            for(int j=0;j<n;j++)
            {
                bool found=false;
                for(auto k:v[j]){
                    if(k==i){
                        found=true;
                        break;
                    }
                }
                if(!found){
                    tmp.insert(v[j].begin(),v[j].end());
                }
            }
            int d=tmp.size();
            if(d!=sz){
                new_sz=max(new_sz,d);
            }
        }
        cout<<new_sz<<'\n';
    }
    return 0;
}