#include<bits/stdc++.h>
using namespace std;
const int maxN=1000;
const int maxW=1000;
int dp[maxN][maxW];
int knapsack(int n,int w[],int v[],int W){
    if(n==0||W==0)return 0;
    if(dp[n][W]!=-1)return dp[n][W];
    if(w[n-1]<=W){
        int op1=knapsack(n-1,w,v,W-w[n-1])+v[n-1];
        int op2=knapsack(n-1,w,v,W);
        return dp[n][W]=max(op1,op2);
    }
    else{
        int op2=knapsack(n-1,w,v,W);
        return dp[n][W]=op2;
    }
}
int main()
{
    int n;
    cin>>n;
    int w[n],v[n];
    for(int i=0;i<n;i++)cin>>w[i];
    for(int i=0;i<n;i++)cin>>v[i];
    int W;
    cin>>W;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++)dp[i][j]=-1;
    }
    cout<<knapsack(n,w,v,W)<<'\n';

    return 0;
}