#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    string S;
    cin >> S;
    string T;
    cin >> T;

    int ls = S.size(), lt = T.size();
    cout << ls << " " << lt << endl;
    vector<vector<int>> dp(ls + 1, vector<int>(lt + 1, 0));
    rep(i, 0, ls) {
        rep(j, 0, lt) {
            char s = S[i], t = T[j];
            if (s == t) {
                dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + 1);
            }
            dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j + 1]);
            dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i + 1][j]);
        }
    }
    cout << dp[ls][lt] << endl;
    return 0;
}
