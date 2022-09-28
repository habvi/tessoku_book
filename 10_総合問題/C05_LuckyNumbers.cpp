#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rrep(i, a, b) for (int i = a; i > b; --i)

int main(void) {
    int N;
    cin >> N;

    N--;
    rrep(i, 9, -1) {
        if (N >> i & 1) {
            cout << '7';
        } else {
            cout << '4';
        }
    }
    cout << endl;
    return 0;
}
