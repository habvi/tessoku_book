#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N;
    cin >> N;
    vector<int> A(N - 1), B(N - 1);
    rep(i, 0, N - 1) {
        cin >> A[i];
        A[i]--;
    }
    rep(i, 0, N - 1) {
        cin >> B[i];
        B[i]--;
    }

    const int INF = 1001001001;
    vector<int> dp(N, -INF);
    dp[0] = 0;
    rep(i, 0, N - 1) {
        int a = A[i];
        dp[a] = max(dp[a], dp[i] + 100);
        int b = B[i];
        dp[b] = max(dp[b], dp[i] + 150);
    }
    cout << dp[N - 1] << endl;
    return 0;
}
