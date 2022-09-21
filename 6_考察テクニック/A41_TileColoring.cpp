#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main(void) {
    int N;
    cin >> N;
    string S;
    cin >> S;

    char now = S[0];
    int i = 0;
    int ct = 0;
    while (i < N) {
        if (S[i] == now) {
            ct++;
        } else {
            now = S[i];
            ct = 1;
        }
        cout << i << " " << now << " " << ct << endl;
        if (ct >= 3) {
            cout << "Yes" << endl;
            return 0;
        }
        i++;
    }
    cout << "No" << endl;
    return 0;
}
