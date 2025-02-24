#include <bits/stdc++.h>

#include "testlib.h"

int main() {
    registerValidation();

    int L = inf.readInt(1, 100'000);
    inf.readSpace();
    int R = inf.readInt(1, 100'000);
    inf.readSpace();
    int M = inf.readInt(1, 200'000);
    inf.readEoln();

    using P = std::pair<int, int>;
    std::set<P> st;
    for (int i = 0; i < M; i++) {
        int a = inf.readInt(0, L - 1);
        inf.readSpace();
        int b = inf.readInt(0, R - 1);
        inf.readEoln();
        ensure(!st.count(P(a, b)));
        st.insert(P(a, b));
    }
    inf.readEof();
    return 0;
}
