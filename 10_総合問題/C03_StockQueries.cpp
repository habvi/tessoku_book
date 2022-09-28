#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int D;
    cin >> D;
    long long X;
    cin >> X;
    vector<long long> p(1, X);
    rep(i, 0, D - 1) {
        long long A;
        cin >> A;
        p.push_back(p[i] + A);
    }

    int Q;
    cin >> Q;
    rep(_, 0, Q) {
        int S, T;
        cin >> S >> T;
        S--;
        T--;
        if (p[S] > p[T]) {
            cout << S + 1 << endl;
        } else if (p[S] < p[T]) {
            cout << T + 1 << endl;
        } else {
            cout << "Same" << endl;
        }
    }
    return 0;
}
