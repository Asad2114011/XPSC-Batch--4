#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int a,b,c;
cin>>a>>b>>c;
for (int i = 0; i <= c / a; ++i) {
        if ((c - i * a) % b == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}

