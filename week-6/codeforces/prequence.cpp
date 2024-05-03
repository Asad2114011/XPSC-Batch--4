#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int j = 0;
        for (int i = 0; i < m && j < n; i++) {
            if (b[i] == a[j]) {
                ++j;
            }
        }
        cout << j << '\n';
    }
    return 0;
}
