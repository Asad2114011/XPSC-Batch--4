// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,k;
//         cin>>n>>k;


//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int maxSumWithOneChange(const vector<int>& A, int K) {
    int N = A.size();
    // Calculate initial sum of adjacent differences
    int initial_sum = 0;
    for (int i = 0; i < N - 1; ++i) {
        initial_sum += abs(A[i] - A[i + 1]);
    }

    int max_sum = initial_sum;

    for (int i = 0; i < N; ++i) {
        int original_value = A[i];

        // Check effect of changing A[i] to 1
        int new_sum = initial_sum;
        if (i > 0) new_sum -= abs(A[i - 1] - A[i]);
        if (i < N - 1) new_sum -= abs(A[i] - A[i + 1]);
        if (i > 0) new_sum += abs(A[i - 1] - 1);
        if (i < N - 1) new_sum += abs(1 - A[i + 1]);
        max_sum = max(max_sum, new_sum);

        // Check effect of changing A[i] to K
        new_sum = initial_sum;
        if (i > 0) new_sum -= abs(A[i - 1] - A[i]);
        if (i < N - 1) new_sum -= abs(A[i] - A[i + 1]);
        if (i > 0) new_sum += abs(A[i - 1] - K);
        if (i < N - 1) new_sum += abs(K - A[i + 1]);
        max_sum = max(max_sum, new_sum);
    }

    return max_sum;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << maxSumWithOneChange(A, K) << endl;
    }
    return 0;
}
