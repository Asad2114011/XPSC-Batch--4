#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,int>m;
        vector<string>v[3];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                string word;
                cin>>word;
                v[i].push_back(word);
                m[word]++;
            }
        }
        for(int i=0;i<3;i++)
        {
           int sum=0;
            for(int j=0;j<n;j++)
            {
                if(m[v[i][j]]==1)sum+=3;
                else if(m[v[i][j]]==2)sum+=1;
                //cout<<m[v[i][j]]<<" ";  
            }
            cout<<sum<<" ";
        }
        cout<<'\n';
    }
    return 0;
}