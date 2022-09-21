#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)
using P = pair<int, int>;

int main(void) {
    int N;
    cin >> N;
    vector<P> T(N);
    rep(i, 0, N) {
        cin >> T[i].first >> T[i].second;
    }

    auto cmp = [&](P x, P y) -> bool {
        if (x.second != y.second) {
            return x.second < y.second;
        }
        return x.first < y.first;
    };
    sort(T.begin(), T.end(), cmp);

    int ans = 0;
    int now = 0;
    for (auto &[l, r] : T) {
        if (now <= l) {
            now = r;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
