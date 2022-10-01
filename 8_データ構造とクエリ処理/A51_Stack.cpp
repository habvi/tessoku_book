#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int Q;
    cin >> Q;

    vector<string> v;
    rep(_, 0, Q) {
        int q;
        cin >> q;
        if (q == 1) {
            string x;
            cin >> x;
            v.push_back(x);
        } else if (q == 2) {
            cout << v[v.size() - 1] << endl;
        } else {
            v.pop_back();
        }
    }
    return 0;
}
