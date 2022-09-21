#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, 0, n) {
        cin >> h[i];
    }

    const int INF = 1001001001;
    int ans = INF;
    vector<int> dp(n, INF);
    dp[0] = 0;
    rep(i, 1, n) {
        dp[i] = min(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if (i - 2 >= 0) {
            dp[i] = min(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
        }
    }
    cout << dp[n - 1] << endl;
    return 0;
}
