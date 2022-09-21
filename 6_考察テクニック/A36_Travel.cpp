#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG

int main(void) {
    int N, K;
    cin >> N >> K;

    int mn = 2 * N - 2;
    cout << (K >= mn && (K - mn) % 2 == 0 ? "Yes" : "No") << endl;
    return 0;
}
