#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N, M, B;
    cin >> N >> M >> B;
    vector<int> A(N), C(M);
    rep(i, 0, N) {
        cin >> A[i];
    }
    rep(i, 0, M) {
        cin >> C[i];
    }

    long long ans = (long long)B * N * M;
    ans += accumulate(A.begin(), A.end(), 0LL) * M;
    ans += accumulate(C.begin(), C.end(), 0LL) * N;
    cout << ans << endl;
    return 0;
}
