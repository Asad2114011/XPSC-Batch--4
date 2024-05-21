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
        string s;
        cin>>n>>s;
        int one=0,zero=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')zero++;
            else one++;
        }
        int mn=min(one,zero);
        if(mn%2==0){
            cout<<"Ramos"<<'\n';
        }
        else{
            cout<<"Zlatan"<<'\n';
        }
    }

    return 0;
}