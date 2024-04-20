#include<bits/stdc++.h>
using namespace std;
const int maxN=(1<<15);
vector<int>all_palindrome;
void mark_palindrome()
{
    for(int i=0;i<maxN;i++)
    {
        string s=to_string(i);
        string x=s;
        reverse(s.begin(),s.end());
        if(x==s)all_palindrome.push_back(i);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    mark_palindrome();
    //for(int i=0;i<all_palindrome.size();i++)cout<<i<<" "<<all_palindrome[i]<<'\n';

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>cnt(maxN),a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            cnt[x]++;
            a.push_back(x);
        }
        long long ans=n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<all_palindrome.size();j++)
            {
                int cur=(a[i]^all_palindrome[j]);
                ans+=cnt[cur];
            }
        }
        cout<<ans/2<<'\n';

    }

    return 0;
}