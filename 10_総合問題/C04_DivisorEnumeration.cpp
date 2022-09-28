#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG

vector<long long> div_list(long long x) {
    vector<long long> l, r;
    long long i = 1;
    while (i * i <= x) {
        if (x % i == 0) {
            l.push_back(i);
            if (i != x / i) {
                r.push_back(x / i);
            }
        }
        i++;
    }
    reverse(r.begin(), r.end());
    l.insert(l.end(), r.begin(), r.end());
    return l;
}

int main(void) {
    long long N;
    cin >> N;

    vector<long long> div;
    div = div_list(N);
    for (auto d : div) {
        cout << d << endl;
    }
    return 0;
}
