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
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        int x,y;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='g'){
                x=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='g'){
                y=i;
                break;
            }
        }
    }
    return 0;
}
