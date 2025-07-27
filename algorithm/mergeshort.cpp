  #include<bits/stdc++.h>
  using namespace std;
  void merge(vector<int>&v,int l, int mid,int r){

        vector<int>L(mid-l+1),R(r-mid);

        for(int i=0,j=l;j<=mid;j++,i++)L[i]=v[j];
        for(int i=0,j=mid+1;j<=r;j++,i++)R[i]=v[j];

        int i=0,j=0;// i kaj korbe left e , j kaj korbe right e 
        int cur=l;
        while(i<L.size()&&j<R.size()){
            if(L[i]<=R[j]){
                v[cur]=L[i];
                cur++;
                i++;
            }
            else{
                v[cur]=R[j];
                cur++;
                j++;
            }
        }
        while(i<L.size()){
            L[i]=v[cur];
            i++;
            cur++;
        }
        while(j<R.size()){
            R[i]=v[cur];
            j++;
            cur++;
        }
  }
  void mergesort(vector<int>&v,int l,int r){
        if(l<r){
            int mid=(l+r)/2;
            mergesort(v,l,mid);
            mergesort(v,mid+1,r);
            merge(v,l,mid,r);
        }
  }
  int main()
  {

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    mergesort(v,0,n-1);
    for(int i:v)cout<<i<<" ";
    cout<<'\n';
      return 0;
  }