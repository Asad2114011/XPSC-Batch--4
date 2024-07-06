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
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            int x=v[i].first;
            int y=v[i].second;
            for(int j=i+1;j<n;j++)
            {
               int l=v[j].first;
               int r=v[j].second;
               long long k=(x*r)+(l*y);
               sum=max(sum,k);
            }
        }
        cout<<sum<<'\n';
 
    }
    return 0;
 }