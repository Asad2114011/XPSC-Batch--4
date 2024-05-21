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
        string s;
        cin>>s;
        int x=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1]){
                x++;
                i++;
            }
        }
        cout<<(n-x)<<'\n';
    }

    return 0;
}
