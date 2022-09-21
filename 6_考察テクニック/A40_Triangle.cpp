#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N;
    cin >> N;
    unordered_map<int, int> mp;
    rep(_, 0, N) {
        int a;
        cin >> a;
        mp[a]++;
    }

    auto comb = [](long long n) -> long long {
        long long tmp = 1;
        rep(i, 0, 3) {
            tmp *= n - i;
        }
        tmp /= 3 * 2;
        return tmp;
    };
    long long ans = 0;
    for (auto &[_, v] : mp) {
        if (v >= 3) {
            ans += comb(v);
        }
    }
    cout << ans << endl;
    return 0;
}
