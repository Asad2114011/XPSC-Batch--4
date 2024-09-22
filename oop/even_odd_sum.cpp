#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    int e_sum=0,o_sum=0;
    for(int i=1;i<=100;i++)
    {
        if(n%2==0)e_sum+=i;
        else o_sum+=i;
    }
    cout<<"Even sum is: "<<e_sum<<'\n';
    cout<<"Odd sum is: "<<o_sum<<'\n';

    return 0;
}