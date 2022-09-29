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

    vector<int> lis(1, 0);
    int ans = 0;
    for (int a : A) {
        if (lis[lis.size() - 1] < a) {
            lis.push_back(a);
            ans++;
        } else {
            auto itr = lower_bound(lis.begin(), lis.end(), a) - lis.begin();
            lis[itr] = a;
        }
    }
    cout << ans << endl;
    return 0;
}
