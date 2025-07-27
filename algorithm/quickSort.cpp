#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&v,int l,int r){
    int pivot=v[r];
    int i=l-1;
    for(int j=l;j<=r;j++){
        if(v[j]<=pivot){
            i++;
            swap(v[j],v[i]);
        }
    }
    return i;
}
void quicksort(vector<int>&v,int l, int r){
    if(l<r){
        int pi=partition(v,l,r);
        quicksort(v,l,pi-1);
        quicksort(v,pi+1,r);
    }
}
int main()
{

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    quicksort(v,0,n-1);

    for(int i:v)cout<<i<<" ";
    cout<<'\n';

    return 0;
}