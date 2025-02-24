#include <bits/stdc++.h>
#include "random.h"

using namespace std;

int main(int argc, char* argv[]) {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    string a = gen.lower_string(gen.uniform(1, 5));
    string b = gen.lower_string(gen.uniform(1, 5));

    while (a.size() + b.size() <= 200'000) {
        string c = a + b;
        a = b;
        b = c;
    }
   
    string s = b;

    cout << s << endl;
    return 0;
}
