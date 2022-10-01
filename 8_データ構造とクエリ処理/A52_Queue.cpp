#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int Q;
    cin >> Q;

    deque<string> que;
    rep(_, 0, Q) {
        int q;
        cin >> q;
        if (q == 1) {
            string x;
            cin >> x;
            que.push_back(x);
        } else if (q == 2) {
            auto itr = que.begin();
            cout << *itr << endl;
        } else {
            que.pop_front();
        }
    }
    return 0;
}
