#include<bits/stdc++.h>
using namespace std;
vector<int> quick_sort(vector<int>a)
{
    if(a.size()<=1)
        return a;
    int pivot=rand()%(a.size());
    vector<int>left,right;
    for(int i=0;i<a.size();i++)          //complexity o(nlogn),worst case o(n^2);

    {
        if(i==pivot)
            continue;
        else if(a[i]<a[pivot])
            left.push_back (a[i]);
        else if(a[i]>a[pivot])
            right.push_back (a[i]);
     }
        vector<int>sorted_left=quick_sort(left);
           vector<int>sorted_right=quick_sort(right);
           vector<int>ans;

           for(int i=0;i<sorted_left.size();i++)
            {
             ans.push_back(sorted_left[i]);
            }             
           ans.push_back (a[pivot]);
           for(int i=0;i<sorted_right.size();i++)
           {
            ans.push_back(sorted_right[i]);
           }
          
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<a.size();i++)
    {
        cin>>a[i];
    }
    vector<int>ans=quick_sort(a);
     for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
