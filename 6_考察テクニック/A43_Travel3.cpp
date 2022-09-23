#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N, L;
    cin >> N >> L;

    int ans = 0;
    rep(_, 0, N) {
        int A;
        char B;
        cin >> A >> B;
        if (B == 'E') {
            ans = max(ans, L - A);
        } else {
            ans = max(ans, A);
        }
    }
    cout << ans << endl;
    return 0;
}
