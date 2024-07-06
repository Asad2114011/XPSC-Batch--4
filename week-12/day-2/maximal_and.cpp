
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int bit = 30; bit >= 0; bit--) {
            int count = 0;
            for (int i = 0; i < n; i++) {
                if ((v[i] & (1 << bit)) == 0) {
                    count++;
                }
            }
            if (count <= k) {
                k -= count;
                for (int i = 0; i < n; i++) {
                    v[i] |= (1 << bit);
                }
            }
        }

        int result = v[0];
        for (int i = 1; i < n; i++) {
            result &= v[i];
        }
        
        cout << result << '\n';
    }
    
    return 0;
}
