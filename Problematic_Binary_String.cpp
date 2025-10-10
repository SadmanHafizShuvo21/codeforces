#include <bits/stdc++.h>
using ll = long long;

ll simulate(int n, const std::string &s) {
    // d[i] = 1 if mismatch with target "0101..."
    std::vector<int> d(n + 1);
    for (int i = 1; i <= n; i++) {
        char target = (i % 2 ? '0' : '1');
        d[i] = (s[i - 1] != target);
    }

    std::vector<int> p(n + 1), q(n + 1);
    ll s0 = 0, A = 0, B = 0;

    auto add = [&](int idx) {
        if (p[idx]) s0++;
        if (q[idx]) (p[idx] ? B : A)++;
    };

    p[1] = 0; q[1] = 1; add(1);
    if (n >= 2) {
        p[2] = d[1]; q[2] = 1; add(2);
        for (int k = 2; k <= n - 1; k++) {
            p[k + 1] = d[k] ^ p[k - 1] ^ p[k];
            q[k + 1] = q[k - 1] ^ q[k];
            add(k + 1);
        }
    }

    int left_const, left_coeff, req;
    if (n == 1) {
        left_const = p[1]; left_coeff = q[1]; req = d[1];
    } else {
        left_const = p[n - 1] ^ p[n];
        left_coeff = q[n - 1] ^ q[n];
        req = d[n];
    }

    if (left_coeff == 0) {
        if (left_const != req) return -1;
        return std::min(s0, s0 + A - B);
    } else {
        int x1 = left_const ^ req;
        return (x1 == 0 ? s0 : s0 + A - B);
    }
}

void solve() {
    int n; std::string s;
    std::cin >> n >> s;
    std::cout << simulate(n, s) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t; std::cin >> t;
    while (t--) solve();
}
