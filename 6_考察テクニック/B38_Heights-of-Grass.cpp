#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i > b; --i)

int main(void) {
    int N;
    cin >> N;

    if (N == 1) {
        cout << 1 << endl;
        return 0;
    }

    string S;
    cin >> S;

    int m = N;
    if (S[N - 2] == 'B') {
        S.push_back('A');
        m++;
    }
    vector<int> ct(m, 1);
    int b = 0;
    rep(i, 0, m - 1) {
        if (S[i] == 'A') {
            if (b) {
                rrep(j, i, i - b) {
                    ct[j - 1] = max(ct[j - 1], ct[j] + 1);
                }
                b = 0;
            }
            ct[i + 1] = max(ct[i + 1], ct[i] + 1);
        } else {
            b++;
        }
    }

    int ans = 0;
    rep(i, 0, N) {
        ans += ct[i];
    }
    cout << ans << endl;
    return 0;
}
