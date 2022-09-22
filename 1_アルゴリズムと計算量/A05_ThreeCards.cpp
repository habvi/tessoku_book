#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N, K;
    cin >> N >> K;

    int ans = 0;
    rep(i, 1, N + 1) {
        rep(j, 1, N + 1) {
            int tmp = K - i - j;
            ans += (1 <= tmp && tmp <= N);
        }
    }
    cout << ans << endl;
    return 0;
}
