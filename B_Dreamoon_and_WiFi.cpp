#include <bits/stdc++.h>
using ll = long long;

ll fact(int n) {
    ll res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

ll nCr(int n, int r) {
    if (r < 0 || r > n) {
        return 0;
    }
    return fact(n) / (fact(r) * fact(n - r));
}

void solve() {
    std::string s1, s2;
    std::cin >> s1 >> s2;

    ll tar = 0, cur = 0, q = 0;
    for (int i = 0; i < s1.size(); i++) {
        tar += (s1[i] == '+' ? 1 : -1);
    }

    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] == '?') {
            q++;
        }
        else{
            cur += (s2[i] == '+' ? 1 : -1);
        }
    }

    ll ans = tar - cur;
    if ((ans + q) % 2 != 0 || std::abs(ans) > q) {
        std::cout << std::fixed << std::setprecision(12) << 0.0 << '\n';
        return;
    }

    ll k = (ans + q) / 2;
    double err = 1.0 * nCr(q, k) / (1 << q);
    std::cout << std::fixed << std::setprecision(12) << err << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
