#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int D, N;
    cin >> D >> N;

    vector<int> t(D, 24);
    rep(_, 0, N) {
        int L, R, H;
        cin >> L >> R >> H;
        L--;
        rep(i, L, R) {
            t[i] = min(t[i], H);
        }
    }

    int ans = accumulate(t.begin(), t.end(), 0);
    cout << ans << endl;
    return 0;
}
