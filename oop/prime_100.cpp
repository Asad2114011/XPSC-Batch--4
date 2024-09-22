#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<bool>v(101,true);

    for(int i=2;i<=100;i++){
        if(v[i]){
            for(int j=i+i;j<=100;j+=i)
            {
                v[j]=false;
            }
        }
    }
    int sum=0;
    for(int i=2;i<=100;i++){
        if(v[i])sum+=i;
    }
    cout<<sum<<'\n';
    return 0;
}