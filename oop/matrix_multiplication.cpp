#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int row1,col1,row2,col2;
    cin>>row1>>col1>>row2>>col2;
    int a[row1][col1],b[row2][col2],res[row1][col2];

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++){
            cin>>b[i][j];
        }
    }
    if(col1!=row2){
        cout<<"Impossible"<<'\n';
        return 0;
    }
     for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++){
            res[i][j]=0;
        }
    }
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++){
            for(int k=0;k<col1;k++)
            {
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}