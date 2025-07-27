#include<bits/stdc++.h>
using namespace std;
const int N=1000;
vector<int>v[N];
vector<bool>vis(N,false);
void dfs(int src){
    cout<<src<<" ";
    vis[src]=true;
    for(int i:v[src]){
        if(!vis[i])dfs(i);
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(0);

    return 0;
}