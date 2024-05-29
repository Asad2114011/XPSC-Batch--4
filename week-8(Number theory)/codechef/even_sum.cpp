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
        vector<int>v(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        int cnt=0;
        if(sum%2==0){
            cout<<n<<'\n';
            continue;
        }
    int x=sum;
    int j=n;
        for(int i=n-1;i>=0;i--){
            x-=v[i];
            j--;
            if(x%2==0){
                cnt=j;
                break;
            }
        }
        int cnt1=0;
        int k=0;
        for(int i=0;i<n;i++){
            sum-=v[i];
            k++;
            if(sum%2==0){
                cnt1=n-k;
                break;
            }
        }
        cout<<max(cnt,cnt1)<<'\n';

    }
    return 0;
}