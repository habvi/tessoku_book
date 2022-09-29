#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N;
    cin >> N;
    vector<long long> A(N);
    rep(i, 0, N) {
        cin >> A[i];
    }

    const long long INF = 1e18;
    // x, o
    vector<long long> dp1(N + 1, -INF), dp2(N + 1, -INF);
    dp1[0] = 0;
    dp2[0] = 0;
    rep(i, 1, N + 1) {
        dp1[i] = max(dp1[i - 1], dp2[i - 1]);
        dp2[i] = dp1[i - 1] + A[i - 1];
    }
    cout << max(dp1[N], dp2[N]) << endl;
    return 0;
}
