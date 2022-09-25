#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N, Q;
    cin >> N >> Q;
    vector<int> ac(1, 0);
    rep(i, 0, N) {
        int a;
        cin >> a;
        ac.push_back(ac[i] + a);
    }

    rep(_, 0, Q) {
        int L, R;
        cin >> L >> R;
        cout << ac[R] - ac[L - 1] << endl;
    }
    return 0;
}
