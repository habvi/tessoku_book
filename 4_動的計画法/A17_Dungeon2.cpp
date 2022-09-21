#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i > b; --i)

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

    vector<int> ans;
    ans.push_back(n);
    int i = n - 1;
    while (i > 0) {
        if (dp[i] - A[i] == dp[i - 1]) {
            ans.push_back(i);
            i--;
            continue;
        }
        ans.push_back(i - 1);
        i -= 2;
    }

    cout << ans.size() << endl;
    rrep(i, ans.size() - 1, -1) {
        cout << ans[i] << " ";
    }
    return 0;
}
