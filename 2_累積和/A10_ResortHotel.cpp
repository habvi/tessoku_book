#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, 0, N) {
        cin >> A[i];
    }

    vector<int> left(N, 0), right(N, 0);
    left[0] = A[0];
    right[N - 1] = A[N - 1];
    rep(i ,1, N) {
        left[i] = max(left[i - 1], A[i]);
        right[N - i - 1] = max(right[N - i], A[N - i - 1]);
    }

    int D;
    cin >> D;
    rep(_, 0, D) {
        int L, R;
        cin >> L >> R;
        L--;
        cout << max(left[L - 1], right[R]) << endl;
    }
    return 0;
}
