#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int l = 0, r = 0, cnt = 0;
    long long sum = 0;

    while (r < n) {
        sum += v[r];

        while (sum > k && l <= r) {
            sum -= v[l];
            l++;
        }

        if (sum == k) {
            cnt++;
        }
        
        r++;
    }

    cout << cnt << '\n';

    return 0;
}
