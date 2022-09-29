#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N;
    cin >> N;
    vector<int> C(N);
    rep(i, 0, N) {
        cin >> C[i];
    }

    sort(C.begin(), C.end());
    vector<int> ac(1, 0);
    rep(i, 0, N) {
        ac.push_back(ac[i] + C[i]);
    }

    int Q;
    cin >> Q;
    rep(_, 0, Q) {
        int x;
        cin >> x;
        auto itr = upper_bound(ac.begin(), ac.end(), x);
        cout << itr - ac.begin() - 1 << endl;
    }
    return 0;
}
