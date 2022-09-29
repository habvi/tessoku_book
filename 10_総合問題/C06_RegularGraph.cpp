#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N;
    cin >> N;

    cout << N << endl;
    rep(i, 0, N) { 
        cout << i + 1 << " " << (i + 1) % N + 1 << endl;
    }
    return 0;
}
