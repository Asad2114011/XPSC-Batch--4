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
        
        int cnt=INT_MAX;
        for(char x='a';x<='z';x++)
        {
            int l=0,r=n-1,ans=0;
            while(l<r)
            {
                if(s[l]==s[r]){
                    l++;
                    r--;
                }
                else if(s[l]==x){
                    l++;
                    ans++;
                }
                else if(s[r]==x){
                    r--;
                    ans++;
                }
                else{
                    ans=INT_MAX;
                    break;
                }
            }
            cnt=min(cnt,ans);

        }
        if(cnt==INT_MAX){
            cout<<-1<<'\n';
        }
        else{
        cout<<cnt<<'\n';
        }
        
    }

    return 0;
}