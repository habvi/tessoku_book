#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i > b; --i)

int main(void) {
    int N, W;
    cin >> N >> W;

    const int INF = 1001001001;
    vector<long long> dp(W + 1, -INF);
    dp[0] = 0;
    rep(_, 0, N) {
        int w, v;
        cin >> w >> v;
        rrep(i, W + 1, -1) {
            int nxt = i + w;
            if (nxt <= W) {
                dp[nxt] = max(dp[nxt], dp[i] + v);
            }
        }
    }

    long long ans = 0;
    rep(i, 0, W + 1) {
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
    return 0;
}
