#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
int a[205][205];
long long ans=0;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void bishop(int si, int sj)
{
    long long sum = 0;
    for (int k = 0; k < 4;k++) {
        int ci = si, cj = sj; 
        while (valid(ci, cj)) {
            sum += a[ci][cj];
            ci += d[k].first; 
            cj += d[k].second;
        }
    }
    sum-=a[si][sj];
    ans = max(ans, sum);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bishop(i,j);
        }
    }
   cout<<ans<<'\n';
    }
    return 0;
}