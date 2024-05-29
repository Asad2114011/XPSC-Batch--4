#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        // int n;
        // cin >> n;
        string s;
        cin >> s;
int one=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                one++;
            }
        }
        if(one==3) cout<<231<<'\n';
        else if(one==4)cout<<441<<'\n';
        else if(one==1)cout<<11<<'\n';
        else if(one==2&&s[0]=='1'&&s[1]=='1')cout<<21<<'\n';
        else if(one==2&&s[2]=='1'&&s[3]=='1')cout<<21<<'\n';
        else if(one==2&&s[1]=='1'&&s[2]=='1')cout<<121<<'\n';
        else if(one==2&&s[0]=='1'&&s[3]=='1')cout<<121<<'\n';
        else if(one==2&&s[0]=='1'&&s[2]=='1')cout<<121<<'\n';
        else if(one==2&&s[1]=='1'&&s[3]=='1')cout<<121<<'\n';

    }

    return 0;
}
