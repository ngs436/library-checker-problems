#include <bits/stdc++.h>
#include "random.h"

using namespace std;

int main(int argc, char* argv[]) {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int q = 100;
    vector<long long> a(q);
    for (int i = 0; i < q; i++) {
        a[i] = seed * 100 + 1 + i;
    }

    cout << q << endl;
    for (auto x: a) {
        cout << x << endl;
    }
    return 0;
}
