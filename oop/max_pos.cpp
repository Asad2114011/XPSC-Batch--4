#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;

    int mx=INT_MIN,pos=-1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>mx){
            mx=x;
            pos=i;
        }
    }
    cout<<mx<<" "<<pos<<'\n';

    return 0;
}