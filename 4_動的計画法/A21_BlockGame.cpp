#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N;
    cin >> N;
    vector<int>  P(N), A(N);
    rep(i, 0, N) {
        cin >> P[i] >> A[i];
        P[i]--;
    }

    vector<vector<int>> dp(N, vector<int>(N, -1));
    auto solve = [&](auto f, int l, int r) -> int {
        if (l == r) {
            return 0;
        }
        if (dp[l][r] >= 0) {
            return dp[l][r];
        }

        int mx = 0;
        int i = P[l];
        if (l < i && i <= r) {
            mx = max(mx, f(f, l + 1, r) + A[l]);
        } else {
            mx = max(mx, f(f, l + 1, r));
        }
        i = P[r];
        if (l <= i && i < r) {
            mx = max(mx, f(f, l, r - 1) + A[r]);
        } else {
            mx = max(mx, f(f, l, r - 1));
        }
        return dp[l][r] = mx;
    };

    cout << solve(solve, 0, N - 1) << endl;
    return 0;
}
