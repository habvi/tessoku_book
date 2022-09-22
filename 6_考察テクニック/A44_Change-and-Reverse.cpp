#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    rep(i, 0, N) {
        A[i] = i + 1;
    }

    int rev = 0;
    rep(_, 0, Q) {
        int q;
        cin >> q;
        if (q == 1) {
            int x, y;
            cin >> x >> y;
            if (!rev) {
                A[x - 1] = y;
            } else {
                A[N - x] = y;
            }
        } else if (q == 2) {
            rev = 1 - rev;
        } else {
            int x;
            cin >> x;
            if (!rev) {
                cout << A[x - 1] << endl;
            } else {
                cout << A[N - x] << endl;
            }
        }
    }
    return 0;
}
