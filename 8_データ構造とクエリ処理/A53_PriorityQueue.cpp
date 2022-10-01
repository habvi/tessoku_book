#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int Q;
    cin >> Q;

    priority_queue<int> hq;
    rep(_, 0, Q) {
        int q;
        cin >> q;
        if (q == 1) {
            int x;
            cin >> x;
            hq.push(-x);
        } else if (q == 2) {
            cout << -hq.top() << endl;
        } else {
            hq.pop();
        }
    }
    return 0;
}
