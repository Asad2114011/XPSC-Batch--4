#include<bits/stdc++.h>
using namespace std;
bool palindrome(vector<int>v,int x)
{
    int l=0,r=v.size()-1;
    while(l<r){
    if(v[l]==x)
    {
        l++;
    }
    else if(v[r]==x){
        r--;
    }
    else if(v[l]!=v[r])
    {
        return false;
    }
    else{
    l++;
    r--;
    }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int l=0,r=n-1;
    bool flag=true;
    for(int i=l;i<r;i++)
    {
        if(a[l]!=a[r])
        {
            flag=palindrome(a,a[l])||palindrome(a,a[r]);
            break;
        }
        l++;
        r--;
    }
    if(flag)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    }
    return 0;
}