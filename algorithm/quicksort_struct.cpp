#include<bits/stdc++.h>
using namespace std;
struct student{
    string name;
    int roll;
    string gender;
    int age;
};
int partition(vector<student>&v,int l,int r){
    int pivot=v[r].roll;
    int i=l-1;
    for(int j=l;j<=r;j++){
        if(v[j].roll<=pivot){
            i++;
            swap(v[j],v[i]);
        }
    }
    return i;

}
void quicksort(vector<student>&v,int l,int r){
    if(l<r){
        int pivot=partition(v,l,r);
        quicksort(v,l,pivot-1);
        quicksort(v,pivot+1,r);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<student>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i].roll>>v[i].name>>v[i].gender>>v[i].age;
    }
    quicksort(v,0,n-1);
    for(auto i:v){
        cout<<i.roll<<" "<<i.name<<" "<<i.gender<<" "<<i.age<<'\n';
    }

    return 0;
}