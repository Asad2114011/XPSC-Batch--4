#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6 + 5;
vector<ll> v[N];
ll leaf[N];
bool vis[N];
void dfs(ll src)
{
    bool x=true;
    vis[src] = true;
    ll count=0;
    for (ll child : v[src])
    {
        if (vis[child] == false){
            x=false;
            dfs(child);
            count+=leaf[child];
        }
    }
    if(x)
    {
        count=1;
    }
    leaf[src]=count;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin >> n;
    for(ll i=0;i<=n;i++)
    {
        v[i].clear();
        vis[i]=false;
        leaf[i]=0;
    }
    ll e=n-1;
    while (e--)
    {
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    ll q;
    cin>>q;
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        ll p=leaf[x]*leaf[y];
        cout<<p<<'\n';
    }
    }
    return 0;
}