#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, q;
    cin >> n >> m >> q;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    
    vector<ll> l(m+1), r(m+1), d(m+1);
    for (ll i = 1; i <= m; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        l[i] = a, r[i] = b, d[i] = c;
    }

    vector<ll> qr(m + 2, 0);
    while (q--) {
        ll x, y;
        cin >> x >> y;
        qr[x]++;
        qr[y + 1]--;
    }

    for (ll i = 1; i <= m; i++) {
        qr[i] += qr[i - 1];
    }

    vector<ll> arr(n + 2, 0);
    for (ll i = 1; i <= m; i++) {
        arr[l[i]] += d[i] * qr[i];
        arr[r[i] + 1] -= d[i] * qr[i];
    }

    for (ll i = 1; i <= n; i++) {
        arr[i] += arr[i - 1];
    }

    for (ll i = 0; i < n; i++) {
        v[i] += arr[i + 1];
    }

    for (ll i : v) cout << i << " ";
    cout << '\n';

    return 0;
}
