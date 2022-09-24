#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rrep(i, a, b) for (int i = a; i > b; --i)

int main(void) {
    int N;
    cin >> N;

    rrep(i, 9, -1) {
        cout << N / (1 << i) % 2;
    }
    cout << endl;
    return 0;
}
