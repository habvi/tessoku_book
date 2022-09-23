#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    int one = 0;
    for (char &c : S) {
        one += (c == '1');
    }
    cout << (one % 2 == K % 2 ? "Yes" : "No") << endl;
    return 0;
}
