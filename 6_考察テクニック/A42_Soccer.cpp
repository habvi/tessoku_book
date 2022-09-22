#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N, K;
    cin >> N >> K;
    vector<vector<int>> ab(101);
    rep(_, 0, N) {
        int a, b;
        cin >> a >> b;
        ab[a].push_back(b);
    }

    vector<int> c(101);
    int ans = 1;
    rep(a, 1, 101) {
        for (int &b : ab[a]) {
            c[b]++;
        }
        if (a - K - 1 >= 0) {
            for (int &b : ab[a - K - 1]) {
                c[b]--;
            }
        }
        rep(i, 1, 101) {
            int total = 0;
            rep(j, i, min(10, i + K) + 1) {
                total += c[j];
            }
            ans = max(ans, total);
        }
    }
    cout << ans << endl;
    return 0;
}
