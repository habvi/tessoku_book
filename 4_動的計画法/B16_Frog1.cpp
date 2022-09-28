#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N;
    cin >> N;
    vector<int> h(N);
    rep(i, 0, N) {
        cin >> h[i];
    }

    const int INF = 1001001001;
    vector<int> dp(N, INF);
    dp[0] = 0;
    rep(i, 1, N) {
        dp[i] = min(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if (i - 2 >= 0) {
            dp[i] = min(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
        }
    }
    cout << dp[N - 1] << endl;
    return 0;
}
