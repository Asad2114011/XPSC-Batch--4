#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to determine if all balls can be activated
bool canActivateAllBalls(vector<int>& X, vector<int>& P, int N) {
    // Arrays to track the maximum range of activation from each ball
    vector<int> leftReach(N), rightReach(N);

    // Calculate the maximum range to the left
    for (int i = 0; i < N; ++i) {
        int reach = X[i] - P[i];
        auto it = lower_bound(X.begin(), X.end(), reach);
        int idx = it - X.begin();
        leftReach[i] = idx;
    }

    // Calculate the maximum range to the right
    for (int i = 0; i < N; ++i) {
        int reach = X[i] + P[i];
        auto it = upper_bound(X.begin(), X.end(), reach);
        int idx = it - X.begin() - 1;
        rightReach[i] = idx;
    }

    // Prefix and suffix arrays to keep track of the furthest activation points
    vector<int> furthestLeft(N), furthestRight(N);

    // Calculate furthest left reach for each ball from the left
    furthestLeft[0] = leftReach[0];
    for (int i = 1; i < N; ++i) {
        furthestLeft[i] = min(furthestLeft[i - 1], leftReach[i]);
    }

    // Calculate furthest right reach for each ball from the right
    furthestRight[N - 1] = rightReach[N - 1];
    for (int i = N - 2; i >= 0; --i) {
        furthestRight[i] = max(furthestRight[i + 1], rightReach[i]);
    }

    // Check if we can activate all balls using at most two moves
    if (furthestRight[0] == N - 1 || furthestLeft[N - 1] == 0) {
        return true;
    }

    for (int i = 0; i < N - 1; ++i) {
        if (furthestRight[i] >= i + 1 && furthestLeft[i + 1] <= i) {
            return true;
        }
    }

    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> X(N), P(N);

        for (int i = 0; i < N; ++i) {
            cin >> X[i];
        }

        for (int i = 0; i < N; ++i) {
            cin >> P[i];
        }

        if (canActivateAllBalls(X, P, N)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
