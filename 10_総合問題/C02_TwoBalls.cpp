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

    int ans = 0;
    rep(i, 0, N) {
        rep(j, i + 1, N) {
            ans = max(ans, A[i] + A[j]);
        }
    }
    cout << ans << endl;
    return 0;
}
