#include<bits/stdc++.h>
using namespace std;
const int N=1000;
vector<int>v[N];
vector<bool>vis(N,false);
void bfs(int src){
    vis[src]=true;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int parent=q.front();
        q.pop();
        cout<<parent<<" ";
        for(int i:v[parent]){
            if(!vis[i]){
                q.push(i);
                vis[i]=true;
            }
        }

    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--){
        int l,r;
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
    }
    int src;
    cin>>src;
    bfs(src);
    return 0;
}