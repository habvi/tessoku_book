#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int D, N;
    cin >> D >> N;

    vector<int> p(D + 1, 0);
    rep(_, 0, N) {
        int L, R;
        cin >> L >> R;
        p[L]++;
        p[R + 1]--;
    }
    rep(i, 0, D) {
        p[i + 1] += p[i];
    }
    rep(i, 1, D + 1) {
        cout << p[i] << endl;;
    }
    return 0;
}
