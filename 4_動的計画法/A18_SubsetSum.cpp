#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i > b; --i)

int main(void) {
    int N, S;
    cin >> N >> S;
    vector<int> A(N);
    rep(i, 0, N) {
        cin >> A[i];
    }

    vector<int> dp(S + 1, 0);
    dp[0] = 1;
    for (int &a : A) {
        rrep(i, S, -1) {
            int nxt = i + a;
            if (nxt <= S) {
                dp[nxt] |= dp[i];
            }
        }
    }
    cout << (dp[S] ? "Yes" : "No") << endl;
    return 0;
}
