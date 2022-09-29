#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> C(H, vector<char>(W));
    rep(i, 0, H) {
        rep(j, 0, W) {
            cin >> C[i][j];
        }
    }

    vector<vector<long long>> dp(H, vector<long long>(W, 0));
    dp[0][0] = 1;
    rep(i, 0, H) {
        rep(j, 0, W) {
            if (C[i][j] == '#') {
                continue;
            }
            if (i + 1 < H && C[i + 1][j] != '#') {
                dp[i + 1][j] += dp[i][j];
            }
            if (j + 1 < W && C[i][j + 1] != '#') {
                dp[i][j + 1] += dp[i][j];
            }
        }
    }
    cout << dp[H - 1][W - 1] << endl;
    return 0;
}
