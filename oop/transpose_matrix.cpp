#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int row,col;
    cin>>row>>col;
    int a[row][col],res[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            res[j][i]=a[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}