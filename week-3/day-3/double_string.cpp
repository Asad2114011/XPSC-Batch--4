#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string>v(n);
        vector<int>a;
        map<string,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            int length=v[i].size();
            bool f=false;
            for(int j=1;j<length;j++)
            {
                string x=v[i].substr(0,j);
                string y=v[i].substr(j,length-j);
                if(m.find(x)!=m.end())
                {
                    if(m.find(y)!=m.end())
                    {
                        f=true;
                    }
                }
            }
            if(f){a.push_back(1);}
            else {a.push_back(0);}
        }
        for(int i:a)cout<<i;
        cout<<'\n';
       
    }

    return 0;
}