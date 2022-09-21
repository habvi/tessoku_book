#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    rep(i, 1, n) {
        cin >> A[i];
    }
    rep(i, 2, n) {
        cin >> B[i];
    }

    const int INF = 1001001001;
    vector<int> dp(n, INF);
    dp[0] = 0;
    rep(i, 1, n) {
        dp[i] = min(dp[i], dp[i - 1] + A[i]);
        if (i - 2 >= 0) {
            dp[i] = min(dp[i], dp[i - 2] + B[i]);
        }
    }
    cout << dp[n - 1] << endl;
    return 0;
}
