#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,pair<int,int>>>v(n);
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        v[i]={l,{r,i}};
    }
    sort(v.begin(),v.end());
    vector<char>M[3],m(3,0);
    for(auto i:v){
        int start=i.first,end=i.second.first,idx=i.second.second;
        for(int j=0;j<3;j++){
            if(m[j]<=start){
                M[j].push_back(char(idx+'a'));
                m[j]=end;
                break;
            }
        }
    }
    for(int i=0;i<3;i++){
        cout<<"Machine "<<i+1<<": ";
        for(char j:M[i])cout<<j<<" ";
        cout<<'\n';
    }


    return 0;
}